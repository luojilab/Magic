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

namespace Ui
{
class SelectAnnotation;
}

class SelectAnnotation : public QDialog
{
    Q_OBJECT

  public:
    explicit SelectAnnotation(QString href,
                              HTMLResource *html_resource,
                              QList<Resource *> resources,
                              QSharedPointer<Book> book,
                              QWidget *parent = 0);
    ~SelectAnnotation();

    // get annotation text
    QString getText();
    // get annotation icon src
    QString getIcon();

    // insert annotation into html file
    static int insertAnnotation(const QString &annoText, const QString &annoIcon);

  private slots:
    void writeSettings();

  private:
    void readSettings();
    void connectSignalsSlots();

    // memeber data
    QString _annoText;
    QString _annoIcon;

    HTMLResource *_HTMLResource;
    QList<Resource *> _Resources;
    QSharedPointer<Book> _Book;

    Ui::SelectAnnotation *ui;
};

#endif // SELECTANNOTATION_H
