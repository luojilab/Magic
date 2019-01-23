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
#include "Misc/GumboInterface.h"        // gumbo::get_all_nodes_with_tag()
#include "gumbo.h"                      // gumbo_get_attribute()
#include "Misc/CSSSelectorJudge.hpp"    // CSSSelectorJudge::selectorExists()
#include "Misc/AnnotationUtility.h"

#include <utility>                      // pair<ColorMember, QString>
#include <QSvgRenderer>                 // Render SVG graph
#include <QColorDialog>                 // QColorDialog::getColor()
#include <QFile>                        // Read SVG file
#include <QByteArray>                   // Store and modify SVG data
#include <QMessageBox>                  // QMessageBox::Warning()

const QString S_iconSvgSrc = ":icon/AnnoIcon.svg";
const QString S_iconSaveName = "AnnoIcon0.png";
const QString S_srcBgColor = "#000000";
const QString S_srcFgColor = "#FFFFFF";
const QString S_defaultBgColor = "#998181";
const QString S_defaultFgColor = "#FFFFFF";
const QSize S_iconSize(72, 72);
const QString S_defaultIconSrc = "../Images/AnnoIcon0.png";

QString SelectAnnotation::S_lastBgColor = S_defaultBgColor;
QString SelectAnnotation::S_lastFgColor = S_defaultFgColor;

SelectAnnotation::SelectAnnotation(QSharedPointer<Book> book,
                                   BookBrowser *bookBrowser,
                                   TabManager *tabManager,
                                   CodeViewEditor *codeView,
                                   QWidget *parent)
    : QDialog(parent),
      m_iconSrc(S_defaultIconSrc),
      m_bgColor(S_lastBgColor),
      m_fgColor(S_lastFgColor),
      m_initialBgColor(S_lastBgColor),
      m_initialFgColor(S_lastFgColor),
      m_iconImg(S_iconSize, QImage::Format_ARGB32),
      m_painter(&m_iconImg),
      m_book(book),
      m_bookBroswer(bookBrowser),
      m_tabManager(tabManager),
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

// Read SVG resource to QByteArray.
void SelectAnnotation::initSvg()
{
    // Read SVG file and convert to QByteArray.
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
    
    // Render default icon.
    renderIcon();
}

void SelectAnnotation::inputText()
{
    m_annoText = ui->annoTextEdit->toPlainText().trimmed();
    if (m_annoText.isEmpty()) {
        return;
    }
    
    // Remove tags using AnnotationUtility::getPlainText()
    m_annoText = AnnotationUtility::getPlainText(m_annoText);
}

void SelectAnnotation::selectColor(const ColorMember cm)
{
    QColor temp = QColorDialog::getColor();
    if (!temp.isValid()) {
        QMessageBox::warning(this, "Magic", "Invalid color.");
        return;
    }
    
    if (cm == ColorMember::bgColor) {
        m_iconColors.push(qMakePair(ColorMember::bgColor, m_bgColor));
        m_bgColor = temp.name();
    } else if (cm == ColorMember::fgColor) {
        m_iconColors.push(qMakePair(ColorMember::fgColor, m_fgColor));
        m_fgColor = temp.name();
    } else {
        QMessageBox::warning(this, "Magic", "Invalid color member.");
    }
    
    renderIcon();
}

void SelectAnnotation::restoreDefaultColor()
{
    m_bgColor = S_defaultBgColor;
    m_fgColor = S_defaultFgColor;
    renderIcon();
}

void SelectAnnotation::restoreLastColor()
{
    if (m_iconColors.isEmpty()) {
        QMessageBox::warning(this, "Magic", "This is the first color.");
        return;
    }
    QPair<ColorMember, QString> lastColor = m_iconColors.pop();
    if (lastColor.first == ColorMember::bgColor) {
        m_bgColor = lastColor.second;
    } else if (lastColor.first == ColorMember::fgColor) {
        m_fgColor = lastColor.second;
    } else {
        QMessageBox::warning(this, "Magic", "Invalid color member.");
    }
    renderIcon();
}

void SelectAnnotation::restoreInitialColor()
{
    S_lastBgColor = m_initialBgColor;
    S_lastFgColor = m_initialFgColor;
}

// Using QSvgRenderer to render icon when colors change.
void SelectAnnotation::renderIcon()
{
    // Initiate image with transparent pixels.
    m_iconImg.fill(0x00000000);
    
    // Replace old colors with new colors.
    if (S_lastBgColor != m_bgColor) {
        m_svgBytes.replace(S_lastBgColor, m_bgColor.toUtf8());
        S_lastBgColor = m_bgColor;
    }
    if (S_lastFgColor != m_fgColor) {
        m_svgBytes.replace(S_lastFgColor, m_fgColor.toUtf8());
        S_lastFgColor = m_fgColor;
    }
    
    // Render new graph.
    QSvgRenderer renderer;
    renderer.load(m_svgBytes);
    renderer.render(&m_painter);
    m_graphScene.addPixmap(QPixmap::fromImage(m_iconImg));
}

// Add icon to the book resources.
void SelectAnnotation::addIconFile()
{
    TempFolder annoIconFolder;
    QString savePath = annoIconFolder.GetPath() + '/' + S_iconSaveName;
    
    // Save image, format based on file extension.
    if (!m_iconImg.save(savePath)) {
        QMessageBox::warning(nullptr, "", "Save Icon File Failed.");
    }
    
    // If the file already exists, delete the old one.
    const QStringList currentFilenames = m_book->GetFolderKeeper()->GetAllFilenames();
    if (currentFilenames.contains(S_iconSaveName, Qt::CaseSensitive)) {
        if (m_bgColor == m_initialBgColor && m_fgColor == m_initialFgColor) {
            return;
        }
        QMessageBox::StandardButton buttonPressed = QMessageBox::warning(this, "Magic", tr(u8"同名文件\"%1\"已存在，是否替换？").arg(S_iconSaveName), QMessageBox::Ok | QMessageBox::Cancel);
        if (buttonPressed != QMessageBox::Ok) {
            restoreInitialColor();
            return;
        }
        Resource *oldFile = m_book->GetFolderKeeper()->GetResourceByFilename(S_iconSaveName);
        if (oldFile) {
            oldFile->Delete();
        } else {
            QMessageBox::warning(this, tr("Magic"), tr("未找到文件。\nFile not found."));
        }
    }
    
    // Add icon file to the book.
    Resource *iconImg = m_book->GetFolderKeeper()->AddContentFileToFolder(savePath);
    if (!iconImg) {
        QMessageBox::warning(this, tr("Magic"), tr("添加图标文件失败。\nAdding icon file failed."));
        return;
    }
    
    // Refresh view to display newly added file.
    m_bookBroswer->Refresh();
}

void SelectAnnotation::appendStyle()
{
    AnnotationUtility::appendStyle(m_codeView, dynamic_cast<MainWindow *>(parent()));
}

void SelectAnnotation::connectSignalsSlots()
{
    connect(ui->backgroundColor, SIGNAL(clicked()), this, SLOT(selectBgColor()));
    connect(ui->foregroundColor, SIGNAL(clicked()), this, SLOT(selectFgColor()));
    connect(ui->defaultColorButton, SIGNAL(clicked()), this, SLOT(restoreDefaultColor()));
    connect(ui->lastColorButton, SIGNAL(clicked()), this, SLOT(restoreLastColor()));
    connect(this, SIGNAL(accepted()), this, SLOT(inputText()));
    connect(this, SIGNAL(accepted()), this, SLOT(addIconFile()));
    connect(this, SIGNAL(accepted()), this, SLOT(appendStyle()));
    connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(restoreInitialColor()));
}
