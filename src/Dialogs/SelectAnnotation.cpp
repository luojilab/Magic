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

const QString S_iconSvgSrc = QString(":icon/AnnoIcon.svg");
const QString S_iconSavePath = QString("AnnoIcon0.png");
const QString S_srcBgColor = QString("#000000");
const QString S_srcFgColor = QString("#FFFFFF");
const QSize S_iconSize = QSize(100, 100);
const QString S_defaultIconSrc = QString("../Images/AnnoIcon0.png");
const QString S_annoPre = QString("<img class=\"epub-footnote\" src=\"");
const QString S_annoInf = QString("\" alt=\"");
const QString S_annoSuf = QString("\" />");

QString SelectAnnotation::S_lastBgColor = QString("#998181");
QString SelectAnnotation::S_lastFgColor = QString("#FFFFFF");
bool SelectAnnotation::annoIconAdded = false;

SelectAnnotation::SelectAnnotation(/* QString href,
                                   HTMLResource *htmlResource,
                                   QList<Resource *> resources, */
                                   QSharedPointer<Book> book,
                                   BookBrowser *bookBrowser,
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
}

void SelectAnnotation::selectColor(QString &colorMember, QPushButton *colorButton)
{
    QColor temp = QColorDialog::getColor();
    if (temp.isValid())
    {
        colorMember = temp.name();
        renderIcon();
    }
}

void SelectAnnotation::renderIcon()
{
    // Initiate image with transparent pixels
    m_iconImg.fill(0x00000000);
    
    // Replace color old colors with new colors
    m_svgBytes.replace(S_lastBgColor, m_bgColor.toUtf8());
    m_svgBytes.replace(S_lastFgColor, m_fgColor.toUtf8());
    S_lastBgColor = m_bgColor;
    S_lastFgColor = m_fgColor;
    
    // Render new graph
    m_renderer.load(m_svgBytes);
    m_renderer.render(&m_painter);
    m_graphScene.addPixmap(QPixmap::fromImage(m_iconImg));
}

void SelectAnnotation::addIconFile()
{
    // Save image, format based on file extension
    m_iconImg.save(S_iconSavePath);
    
    // Add icon file to epub
    if (!annoIconAdded)
    {
        Resource *iconImg = m_book->GetFolderKeeper()->AddContentFileToFolder(S_iconSavePath);
        if (!iconImg)
        {
            QMessageBox::warning(this, tr("Magic"), tr("添加文件失败。Adding File Failed. (AnnoErr4)"));
            return;
        }
        
        // Signals and function from BookBrowser
        //emit ResourcesAdded();
        //emit BookContentModified();
        m_bookBroswer->Refresh();
        annoIconAdded = true;
    }
}

void SelectAnnotation::connectSignalsSlots()
{
    connect(ui->backgroundColor, SIGNAL(clicked()), this, SLOT(selectBgColor()));
    connect(ui->foregroundColor, SIGNAL(clicked()), this, SLOT(selectFgColor()));
    connect(this, SIGNAL(accepted()), this, SLOT(getInput()));
    connect(this, SIGNAL(accepted()), this, SLOT(addIconFile()));
}
