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

// A utility class for annotation operations
// 1. insertAnnotation() to insert annotation text into html.
// 2. Convert existing doubly linked annotation to image annotation.
class AnnotationUtility : public QObject
{
    Q_OBJECT
    
public:
    explicit AnnotationUtility() = delete;
    ~AnnotationUtility();
    
    // Insert annotation code to html file.
    static void insertAnnotation(const QString &anno_text, const QString &anno_icon, QTextCursor cursor);
    
    // Convert doubly linked annotation to image annotation by selecting content.
    static void convertFromContent(CodeViewEditor *code_view);
    
    // Convert doubly linked annotation to image annotation by selecting reference.
    static void convertFromReference(CodeViewEditor *code_view);
    
    // Remove tags in text and deal special character like ", <.
    static QString getPlainText(const QString &origin_text);
    
private:
    // A struct to store neccesary data for parameter passing
    typedef struct AnnotationNodeData
    {
        AnnotationNodeData() : cursor(QTextCursor()), gumbo(nullptr), a_node(nullptr) {}
        AnnotationNodeData(const QTextCursor &_cursor,
                           const std::shared_ptr<GumboInterface> _gumbo,
                           GumboNode *_a_node)
        : cursor(_cursor), gumbo(_gumbo), a_node(_a_node) {}
        
        QTextCursor cursor;
        std::shared_ptr<GumboInterface> gumbo;
        GumboNode *a_node;
    } AnnoData;
    
    // Convert doubly linked annotation to image annotation.
    static void convertAnnotation(AnnoData &content, AnnoData &reference);
    
    // Get the node linked with the selected node.
    static AnnoData getLinked(const AnnoData &selected);
    
    // Check doubly link valid.
    static int checkLink(const AnnoData &content, const AnnoData &reference);
    
    // Check order: the content should be after reference.
    static int checkOrder(const QTextCursor &content_cursor, const QTextCursor &reference_cursor);
};

#endif /* ANNOTATIONUTILITIES_H */
