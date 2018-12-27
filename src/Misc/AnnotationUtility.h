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

#ifndef ANNOTATIONUTILITIES_H
#define ANNOTATIONUTILITIES_H

#include "ViewEditors/CodeViewEditor.h"
#include "Tabs/FlowTab.h"

class AnnotationUtility : public QObject
{
    Q_OBJECT
    
public:
    explicit AnnotationUtility();
    ~AnnotationUtility();
    
    enum class ConvertMode { fromContent, fromReference };
    
    // Insert annotation code to html file.
    static void insertAnnotation(const QString &anno_text, const QString &anno_icon, QTextCursor cursor);
    
    // Convert doubly linked annotation to image annotation.
    static void convertAnnotation(ConvertMode mode, CodeViewEditor *code_view);
    
private:
    // Check order: the content should be after reference.
    static int checkOrder(QTextCursor &reference, QTextCursor &content);
};

#endif /* ANNOTATIONUTILITIES_H */
