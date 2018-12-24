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

#ifndef SELECTANNOTATION_H
#define SELECTANNOTATION_H

#include <QDialog>
#include <QGraphicsScene>
#include <QSvgRenderer>

#include "ui_SelectAnnotation.h"
#include "ResourceObjects/Resource.h"
#include "BookManipulation/Book.h"
#include "MainUI/MainWindow.h"
#include "ViewEditors/CodeViewEditor.h"
#include "Tabs/TabManager.h"

namespace Ui
{
class SelectAnnotation;
}

// SelectAnnotation functions:
// 1. Open a dialog to get annotation text.
// 2. A static function to insert annotation code.
// 3. get foreground and background colors to generate icon.
class SelectAnnotation : public QDialog
{
    Q_OBJECT

public:
    explicit SelectAnnotation(QSharedPointer<Book> book,
                              BookBrowser *bookBrowser,
                              TabManager *tabManager,
                              CodeViewEditor *codeView,
                              QWidget *parent = 0);
    ~SelectAnnotation();

    QString getText() { return m_annoText; }
    QString getIcon() { return m_iconSrc; }

    // Insert annotation code to html file.
    static int insertAnnotation(const QString &annoText, const QString &annoIcon, CodeViewEditor *codeView);
    
private slots:
    void selectBgColor() { selectColor(m_bgColor, ui->backgroundColor); }
    void selectFgColor() { selectColor(m_fgColor, ui->foregroundColor); }
    void inputText();
    void addIconFile();
    void appendStyle();

private:
    void initSvg();
    void initUI();
    void selectColor(QString &colorMemeber, QPushButton *colorButtion);
    void renderIcon();
    void addStylesheet();
    void addStylesheetLink();
    void connectSignalsSlots();

    QString m_annoText;
    QString m_iconSrc;
    QString m_bgColor;
    QString m_fgColor;
    QImage m_iconImg;
    QByteArray m_svgBytes;
    QPainter m_painter;
    QGraphicsScene m_graphScene;

    QSharedPointer<Book> m_book;
    BookBrowser *m_bookBroswer;
    TabManager *m_tabManager;
    CodeViewEditor *m_codeView;

    Ui::SelectAnnotation *ui;
    
    static QString S_lastBgColor;
    static QString S_lastFgColor;
};

#endif // SELECTANNOTATION_H
