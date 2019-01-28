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
// 3. Get foreground and background colors to generate icon.
class SelectAnnotation : public QDialog
{
    Q_OBJECT

public:
    /**
     Instantiate the class and open the dialog.

     @param book The opened book.
     @param bookBrowser The current BookBrowser.
     @param tabManager The current TagManager.
     @param codeView The current CodeViewEditor.
     @param parent The parent widget.
     */
    explicit SelectAnnotation(QSharedPointer<Book> book,
                              BookBrowser *bookBrowser,
                              TabManager *tabManager,
                              CodeViewEditor *codeView,
                              QWidget *parent = nullptr);
    
    ~SelectAnnotation();

    /**
     Get the annotation content text.

     @return The content text.
     */
    QString getText() { return m_annoText; }
    
    /**
     Get the generated icon resource path.

     @return Relative path to the icon file.
     */
    QString getIcon() { return m_iconSrc; }
   
private slots:
    /**
     The slot corresponding to the buttonBackgroundColor
     */
    void selectBgColor() { selectColor(ColorMember::bgColor); }
    
    /**
     The slot corresponding to the buttonForegroundColor.
     */
    void selectFgColor() { selectColor(ColorMember::fgColor); }
    
    /**
     The slot connected with buttonDefaultColor.
     */
    void restoreDefaultColor();
    
    /**
     The slot connected with buttonLastColor.
     */
    void restoreLastColor();
    
    /**
     Restore the initial color when the dialog opens.
     */
    void restoreInitialColor();
    
    /**
     Get the text in the input widget and remove HTML tags.
     */
    void inputText();
    
    /**
     Add the generated icon file to the book, prompt to replace if already exists.
     */
    void addIconFile();
    
    /**
     Append the annotation icon style to the CSS file.
     If the style already exists, then do nothing.
     Add a new file if there is no linked CSS file.
     */
    void appendStyle();

private:
    enum class ColorMember { bgColor, fgColor };
    
    /**
     Load SVG file and replace the original colors.
     */
    void initSvg();
    
    /**
     Initialize UI, render icon display.
     */
    void initUI();
    
    /**
     Open color selecting dialog, get the selected color.

     @param ColorMember Which member color variable to process (background/foreground).
     */
    void selectColor(const ColorMember);
    
    /**
     Render icon with selected colors using QSvgRenderer.
     */
    void renderIcon();
    
    /**
     Connect signals to slots.
     */
    void connectSignalsSlots();

    QString m_annoText;
    QString m_iconSrc;
    QString m_bgColor;
    QString m_fgColor;
    QString m_initialBgColor; // Used to restore when cancel selected
    QString m_initialFgColor;
    QImage m_iconImg;
    QByteArray m_svgBytes;
    QPainter m_painter;
    QGraphicsScene m_graphScene;
    QStack<QPair<ColorMember, QString>> m_iconColors;

    QSharedPointer<Book> m_book;
    BookBrowser *m_bookBroswer;
    TabManager *m_tabManager;
    CodeViewEditor *m_codeView;

    Ui::SelectAnnotation *ui;
    
    static QString S_lastBgColor;
    static QString S_lastFgColor;
};

#endif // SELECTANNOTATION_H
