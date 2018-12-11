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

#include "ResourceObjects/Resource.h"
#include "BookManipulation/Book.h"
#include "MainUI/MainWindow.h"
#include "ViewEditors/CodeViewEditor.h"

namespace Ui
{
class SelectAnnotation;
}

// SelectAnnotation functions:
// 1. Open a dialog to get annotation text.
// 2. A static function to insert annotation code.
// TODO: 3. get foreground and background colors to generate icon.
// TODO: 4. Detect and replace selected superscript with corresponding footnote.
// TODO: 5. Automatically detect footnotes and replace in-text references.
class SelectAnnotation : public QDialog
{
    Q_OBJECT

  public:
    explicit SelectAnnotation(/* QString &href,
                              HTMLResource *htmlResource,
                              QList<Resource *> &resources,
                              QSharedPointer<Book> book, */
                              QWidget *parent = 0);
    ~SelectAnnotation();

    QString getText() { return m_AnnoText; }
    QString getIcon() { return m_AnnoIcon; }

    // Insert annotation code to html file.
    static int insertAnnotation(const QString &annoText, const QString &annoIcon, CodeViewEditor *codeView);

  private slots:
    void getInput();

  private:
    void connectSignalsSlots();

    QString m_AnnoText;
    QString m_AnnoIcon;

    // Resources for future work.
    /*
    HTMLResource *m_HTMLResource;
    QList<Resource *> &m_Resources;
    QSharedPointer<Book> m_Book;
    */

    Ui::SelectAnnotation *ui;
};

#endif // SELECTANNOTATION_H
