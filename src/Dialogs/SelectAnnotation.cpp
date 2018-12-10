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

#define DEFAULT_ICON_SRC "../Images/AnnoIcon0.png"

SelectAnnotation::SelectAnnotation(QString href,
                                   HTMLResource *html_resource,
                                   QList<Resource *> resources,
                                   QSharedPointer<Book> book,
                                   QWidget *parent)
    : QDialog(parent),
      ui(new Ui::SelectAnnotation),
      _HTMLResource(html_resource),
      _Resources(resources),
      _Book(book),
      _annoText(QString()),
      _annoIcon(tr(DEFAULT_ICON_SRC))
{
    ui->setupUi(this);
}

SelectAnnotation::~SelectAnnotation()
{
    delete ui;
}

// get annotation text
QString SelectAnnotation::getText()
{
}

// get annotation icon src
QString SelectAnnotation::getIcon()
{
}

// insert annotation into html file
static int SelectAnnotation::insertAnnotation(const QString &annoText, const QString &annoIcon)
{
    // TODO...
    // QString annoIcon = tr("../Images/AnnoIcon0.png");
    QString annoPre = tr("<img class=\"epub-footnote\" src=\"");
    QString annoInf = tr("\" alt=\"");
    QString annoSuf = tr("\" />");
    QString annotation = annoPre + annoIcon + annoInf + annoText + annoSuf;
    
    // insert annotation text at the cursor in html using QPlainTextEdit::insertPlainText()
    codeView->insertPlainText(annotation);

    return 0;
}

// private slots:
void SelectAnnotation::writeSettings()
{
}

// private:
void SelectAnnotation::readSettings()
{
}

void SelectAnnotation::connectSignalsSlots()
{
}
