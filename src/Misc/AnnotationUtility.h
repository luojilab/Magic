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

#ifndef ANNOTATION_UTILITIES_H
#define ANNOTATION_UTILITIES_H

#include "ViewEditors/CodeViewEditor.h"
#include "Tabs/FlowTab.h"

// A utility class for annotation operations
// 1. insertAnnotation() to insert annotation text into html.
// 2. Convert existing doubly linked annotation to image annotation.
class AnnotationUtility : public QObject
{
    Q_OBJECT
    
public:
    enum class ErrorCode
    {
        NoError,
        EmptyHref,
        LinkedFileNotFound,
        InvalidHref,
        LinkedNodeNotFound,
        OpenTagANotFound,
        TagANotFound,
        CursorOutOfRange,
        NoLinkInSelectedBlock,
        MultipleLinksInSelectedBlock,
        AttributeIdNotFound,
        EmptyReferenceText,
        NullParentNode,
        DoublyLinkDisconnected,
        ContentBeforeReference,
        DocumentOrderNotFound,
        ContentFileBeforeReferenceFile,
        AddIconFailed,
    };
    
    // Used to store error prompt message corresponding to the error code.
    static const std::map<AnnotationUtility::ErrorCode, QString> S_errorMessages;
    
    AnnotationUtility() = delete;
    
    // Insert annotation code to html file.
    static void insertAnnotation(const QString &anno_text, const QString &anno_icon, QTextCursor cursor);
    
    // Convert doubly linked annotation to image annotation by selecting content.
    static void convertFromContent(CodeViewEditor *code_view);
    
    // Convert doubly linked annotation to image annotation by selecting reference.
    static void convertFromReference(CodeViewEditor *code_view);
    
    // Remove tags in text and deal special character like ", <.
    static QString getPlainText(const QString &origin_text);
    
    // Append the icon style to the end of linked stylesheet file.
    static bool appendStyle(CodeViewEditor *code_view);
    
private:
    // A struct to store neccesary data for parameter passing
    typedef struct AnnotationNodeData
    {
        AnnotationNodeData() = default;
        AnnotationNodeData(const std::shared_ptr<QTextCursor> &param_cursor,
                           const std::shared_ptr<GumboInterface> &param_gumbo,
                           GumboNode *param_a_node)
        : cursor(param_cursor), gumbo(param_gumbo), a_node(param_a_node) {}
        
        std::shared_ptr<QTextCursor> cursor;
        std::shared_ptr<GumboInterface> gumbo;
        GumboNode *a_node;
    } AnnoData;
    
    // Convert doubly linked annotation to image annotation.
    static int convertAnnotation(AnnoData &content, AnnoData &reference);
    
    // Select the <a> tag in the block (there should be only one <a>).
    static std::pair<ErrorCode, AnnoData> getTagAInBlock(CodeViewEditor *code_view);
    
    // Select the nearest <a> tag to the cursor.
    static std::pair<ErrorCode, AnnoData> getWrappingTagA(CodeViewEditor *code_view);
    
    // Get the node linked with the selected node.
    static std::pair<ErrorCode, AnnoData> getLinkedTagA(const AnnoData &selected);
    
    static std::pair<int, HTMLResource *> getDocument(const QString &file_path);
    
    static ErrorCode selectWrappingBlockTag(AnnoData *anno);
    
    static ErrorCode selectInvisibleWrappingTags(AnnoData *anno);
    
    // Check doubly link valid.
    static ErrorCode checkLink(const AnnoData &content, const AnnoData &reference);
    
    // Check order: the content should be after reference.
    static ErrorCode checkOrder(const AnnoData &content, const AnnoData &reference);
    
    // Add the default annotation icon if the icon donot exist.
    static ErrorCode addIconResource();
    
    static bool addStylesheet(CodeViewEditor *code_view);
    
    static bool addStylesheetLink(CodeViewEditor *code_view);
};

#endif /* ANNOTATION_UTILITIES_H */
