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
    
    // A map used to store error prompt message corresponding to the error code.
    static const std::map<AnnotationUtility::ErrorCode, QString> S_errorMessages;
    
    AnnotationUtility() = delete;
    
    /**
     Insert annotation code to the cursor position.

     @param annoText Annotation text.
     @param annoIcon Annotation icon location path.
     @param cursor The cursor position to be inserted.
     */
    static void insertAnnotation(const QString &annoText, const QString &annoIcon, QTextCursor cursor);
    
    /**
     Convert doubly linked annotation to image annotation by selecting content.

     @param codeView The current CodeViewEditor.
     */
    static void convertFromContent(CodeViewEditor *codeView);
    
    /**
     Convert doubly linked annotation to image annotation by selecting reference.

     @param codeView The current CodeViewEditor.
     */
    static void convertFromReference(CodeViewEditor *codeView);
    
    /**
     Remove HTML tags in text.

     @param originText The text to be processed.
     @return The processed text.
     */
    static QString getPlainText(const QString &originText);
    
    /**
     Append the icon style to the end of linked stylesheet file.

     @param codeView The current CodeViewEditor.
     @return Whether the process succeeded.
     */
    static bool appendStyle(CodeViewEditor *codeView);
    
private:
    // A struct to store neccesary data for parameter passing.
    typedef struct AnnotationNodeData
    {
        AnnotationNodeData() = default;
        AnnotationNodeData(const std::shared_ptr<QTextCursor> &paramCursor,
                           const std::shared_ptr<GumboInterface> &paramGumbo,
                           GumboNode *paramANode)
        : cursor(paramCursor), gumbo(paramGumbo), aNode(paramANode) {}
        
        std::shared_ptr<QTextCursor> cursor;
        std::shared_ptr<GumboInterface> gumbo;
        GumboNode *aNode;
    } AnnoData;
    
    /**
     Convert annotation to image annotation.

     @param content Prepared annotation content data.
     @param reference Prepared annotation reference data.
     @return The error code: 0 if succeeded, otherwise failed.
     */
    static int convertAnnotation(AnnoData &content, AnnoData &reference);
    
    /**
     Select the <a> tag in the block (there should be only one <a>).

     @param codeView The current CodeViewEditor.
     @return The pair of error code and processed data.
     */
    static std::pair<ErrorCode, AnnoData> getTagAInBlock(CodeViewEditor *codeView);
    
    /**
     Select the <a> tag around the cursor.

     @param codeView The current CodeViewEditor.
     @return The pair of error code and processed data.
     */
    static std::pair<ErrorCode, AnnoData> getWrappingTagA(CodeViewEditor *codeView);
    
    /**
     Get the node linked with the input node.

     @param codeView The current CodeViewEditor.
     @return The pair of error code and processed data.
     */
    static std::pair<ErrorCode, AnnoData> getLinkedTagA(const AnnoData &selected);
    
    /**
     Get HTML resource according to the input path

     @param filePath the document file path relative to the current file.
     @return The pair of error (0 if succeeded, otherwise failed) code and a pointer to the HTML resource.
     */
    static std::pair<int, HTMLResource *> getDocument(const QString &filePath);
    
    /**
     With the tag <a> selected, move the cursor to select the least parent block tag.

     @param anno The annotation data with tag <a> selected.
     @return Annotation data with wrapping block tag selected.
     */
    static ErrorCode selectWrappingBlockTag(AnnoData *anno);
    
    /**
     WIth the tag <a> selected, move the cursor to select the most user-invisible parent tags.

     @param anno The annotation data with tag <a> selected.
     @return Annotation data with invisible wrapping tag selected.
     */
    static ErrorCode selectInvisibleWrappingTags(AnnoData *anno);
    
    /**
     Check the doubly link valid.

     @param content The annotation content data.
     @param reference The annotation reference data.
     @return ErrorCode to show result.
     */
    static ErrorCode checkLink(const AnnoData &content, const AnnoData &reference);
    
    /**
     Check the order: the content should appear after the reference.

     @param content The annotation content data.
     @param reference The annotation reference data.
     @return ErrorCode to show result.
     */
    static ErrorCode checkOrder(const AnnoData &content, const AnnoData &reference);
    
    /**
     Add the default annotation icon if the icon does not exist.

     @return Error code.
     */
    static ErrorCode addIconResource();
    
    /**
     Add a new CSS file if there is no linked .css when inserting style.

     @param codeView The current CodeViewEditor.
     @return 0 if succeeded, otherwise failed.
     */
    static bool addStylesheet(CodeViewEditor *codeView);
    
    /**
     Add the link to the newly added CSS file in the HTML.

     @param codeView The current CodeViewEditor.
     @return 0 if succeeded, otherwise failed.
     */
    static bool addStylesheetLink(CodeViewEditor *codeView);
};

#endif /* ANNOTATION_UTILITIES_H */
