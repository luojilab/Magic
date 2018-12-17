/*
--------------------------------------------------------------------------------

This source file is part of Magic

Copyright (c) 2018 Luojilab

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

--------------------------------------------------------------------------------
*/

#include "SelectAnnotation.h"
#include "ui_SelectAnnotation.h"
#include "ViewEditors/CodeViewEditor.h" // QPlainTextEdit::insertPlainText()
#include "MainUI/BookBrowser.h"         // BookBrowser::Refresh()

#include <QSvgRenderer>                 // Render SVG graph
#include <QColorDialog>                 // QColorDialog::getColor()
#include <QFile>                        // Read SVG file
#include <QByteArray>                   // Store and modify SVG data
#include <QMessageBox>                  // QMessageBox::Warning()

const QString S_iconSvgSrc = ":icon/AnnoIcon.svg";
const QString S_iconSaveName = "AnnoIcon0.png";
const QString S_annotationStylesheetPath = ":icon/AnnotationStyles.css";
const QString S_srcBgColor = "#000000";
const QString S_srcFgColor = "#FFFFFF";
const QSize S_iconSize(100, 100);
const QString S_defaultIconSrc = "../Images/AnnoIcon0.png";
const QString S_annoPre = "<img class=\"epub-footnote\" src=\"";
const QString S_annoInf = "\" alt=\"";
const QString S_annoSuf = "\" />";
const QString S_annoStyleLink = "<link rel=\"stylesheet\" href=\"../Styles/AnnotationStyles.css\" />";

QString SelectAnnotation::S_lastBgColor = "#998181";
QString SelectAnnotation::S_lastFgColor = "#FFFFFF";
bool SelectAnnotation::S_annoIconAdded = false;
bool SelectAnnotation::S_annoStylesheetAdded = false;

SelectAnnotation::SelectAnnotation(/* QString href,
                                   HTMLResource *htmlResource,
                                   QList<Resource *> resources, */
                                   QSharedPointer<Book> book,
                                   BookBrowser *bookBrowser,
                                   CodeViewEditor *codeView,
                                   QWidget *parent)
    : QDialog(parent),
      m_iconSrc(S_defaultIconSrc),
      m_bgColor(S_lastBgColor),
      m_fgColor(S_lastFgColor),
      m_iconImg(S_iconSize, QImage::Format_ARGB32),
      m_painter(&m_iconImg),
      /* m_HTMLResource(htmlResource),
      m_Resources(resources), */
      m_book(book),
      m_bookBroswer(bookBrowser),
      m_codeView(codeView),
      ui(new Ui::SelectAnnotation)
{
    initSvg();
    initUI();
    
    connectSignalsSlots();
}

SelectAnnotation::~SelectAnnotation()
{
    delete ui;
}

int SelectAnnotation::insertAnnotation(const QString &annoText, const QString &annoIcon, CodeViewEditor *codeView)
{
    QString annotation = S_annoPre + annoIcon + S_annoInf + annoText + S_annoSuf;
    
    // Insert annotation text at the cursor in html using QPlainTextEdit::insertPlainText().
    codeView->insertPlainText(annotation);

    return 0;
}

void SelectAnnotation::initSvg()
{
    // Read SVG file and convert to QByteArray
    QFile file(S_iconSvgSrc);
    file.open(QIODevice::ReadOnly);
    m_svgBytes = file.readAll();
    file.close();
    m_svgBytes.replace(S_srcBgColor, m_bgColor.toUtf8());
    m_svgBytes.replace(S_srcFgColor, m_fgColor.toUtf8());
}

void SelectAnnotation::initUI()
{
    ui->setupUi(this);

    m_graphScene.setBackgroundBrush(Qt::white);
    ui->iconView->setScene(&m_graphScene);
    
    // Render default icon
    renderIcon();
}

void SelectAnnotation::getInput()
{
    m_annoText = ui->annoTextEdit->toPlainText();
    // TODO: delete tags in text
}

void SelectAnnotation::selectColor(QString &colorMember, QPushButton *colorButton)
{
    QColor temp = QColorDialog::getColor();
    if (temp.isValid()) {
        colorMember = temp.name();
        renderIcon();
    }
}

void SelectAnnotation::renderIcon()
{
    // Initiate image with transparent pixels
    m_iconImg.fill(0x00000000);
    
    // Replace color old colors with new colors
    if (S_lastBgColor != m_bgColor) {
        m_svgBytes.replace(S_lastBgColor, m_bgColor.toUtf8());
        S_lastBgColor = m_bgColor;
        S_annoIconAdded = false;
    }
    if (S_lastFgColor != m_fgColor) {
        m_svgBytes.replace(S_lastFgColor, m_fgColor.toUtf8());
        S_lastFgColor = m_fgColor;
        S_annoIconAdded = false;
    }
    
    // Render new graph
    QSvgRenderer renderer;
    renderer.load(m_svgBytes);
    renderer.render(&m_painter);
    m_graphScene.addPixmap(QPixmap::fromImage(m_iconImg));
}

void SelectAnnotation::addIconFile()
{
    if (!S_annoIconAdded) {
        // Save image, format based on file extension
        m_iconImg.save(S_iconSaveName);
        
        // If the file already exists, delete the old one.
        QStringList currentFilenames = m_book->GetFolderKeeper()->GetAllFilenames();
        if (currentFilenames.contains(S_iconSaveName, Qt::CaseInsensitive )) {
            QMessageBox::StandardButton buttonPressed;
            buttonPressed = QMessageBox::warning(this, tr("Magic"), tr("文件\"%1\"已存在，是否替换？\nThe file \"%1\" already exists in the book.\nOK to replace?").arg(S_iconSaveName), QMessageBox::Ok | QMessageBox::Cancel);
            if (buttonPressed == QMessageBox::Ok) {
                Resource *oldFile = m_book->GetFolderKeeper()->GetResourceByFilename(S_iconSaveName);
                if (oldFile) {
                    oldFile->Delete();
                } else {
                    QMessageBox::warning(this, tr("Magic"), tr("未找到文件"));
                }
            }
        }
        
        // Add icon and stylesheet file to epub
        Resource *iconImg = m_book->GetFolderKeeper()->AddContentFileToFolder(S_iconSaveName);
        if (!iconImg) {
            QMessageBox::warning(this, tr("Magic"), tr("添加图标文件失败。Adding Icon File Failed. (AnnoErr4)"));
            return;
        }
        S_annoIconAdded = true;
    }
    
    if (!S_annoStylesheetAdded) {
        Resource *annoStyle = m_book->GetFolderKeeper()->AddContentFileToFolder(S_annotationStylesheetPath);
        if (!annoStyle) {
            QMessageBox::warning(this, tr("Magic"), tr("添加样式文件失败。Adding CSS file failed. (AnnoErr5)"));
            return;
        }
        S_annoStylesheetAdded = true;
    }
    addStylesheetLink();
    
    // Refresh view to display newly added files
    m_bookBroswer->Refresh();
}

void SelectAnnotation::addStylesheetLink()
{
    QTextCursor initialCursor = m_codeView->textCursor();
    bool linkFound = m_codeView->find(S_annoStyleLink, QTextDocument::FindBackward);
    if (!linkFound) {
        bool headFound = m_codeView->find("</head>", QTextDocument::FindBackward);
        if (!headFound) {
            QMessageBox::warning(this, tr("Magic"), tr("未找到head标签。Tag head not found. (AnnoErr6)"));
            return;
        }
        
        m_codeView->textCursor().insertText(S_annoStyleLink + tr("\n</head>"));
    }
    m_codeView->setTextCursor(initialCursor);
}

void SelectAnnotation::connectSignalsSlots()
{
    connect(ui->backgroundColor, SIGNAL(clicked()), this, SLOT(selectBgColor()));
    connect(ui->foregroundColor, SIGNAL(clicked()), this, SLOT(selectFgColor()));
    connect(this, SIGNAL(accepted()), this, SLOT(getInput()));
    connect(this, SIGNAL(accepted()), this, SLOT(addIconFile()));
}
