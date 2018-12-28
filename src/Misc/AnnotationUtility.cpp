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

#include "AnnotationUtility.h"
#include <QMessageBox>
#include <iostream>

const QString S_anno_prefix = "<img class=\"epub-footnote\" src=\"";
const QString S_anno_infix = "\" alt=\"";
const QString S_anno_suffix = "\" />";
const QString S_default_icon_src = "../Images/AnnoIcon0.png";

// Static function used in MainWindow::insertAnnotation.
void AnnotationUtility::insertAnnotation(const QString &anno_text, const QString &anno_icon, QTextCursor cursor)
{
    QString annotation_code = S_anno_prefix + anno_icon + S_anno_infix + anno_text + S_anno_suffix;
    
    // Insert annotation text at the cursor in html using QPlainTextEdit::insertPlainText().
    cursor.insertText(annotation_code);
}

void AnnotationUtility::convertAnnotation(ConvertMode mode, CodeViewEditor *code_view)
{
    // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    if (mode == ConvertMode::fromReference) {
        QMessageBox::warning(nullptr, "", "This mode has not been tested yet.");
    } // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    
    // Get selected block text.
    QTextCursor this_cursor = code_view->textCursor();
    this_cursor.beginEditBlock();
    this_cursor.select(QTextCursor::BlockUnderCursor);
    QString this_text = this_cursor.selectedText().trimmed();
    if (this_text.isEmpty()) {
        QMessageBox::warning(nullptr, "", u8"未选择内容。\nEmpty Selection.");
        return;
    }
    
    // Parse the text using Gumbo to get content and tag attributes.
    GumboInterface this_gumbo = {this_text, "HTML2.0"};
    QList<GumboNode *> this_nodes_a = this_gumbo.get_all_nodes_with_tag(GUMBO_TAG_A);
    if (this_nodes_a.isEmpty()) {
        QMessageBox::warning(nullptr, "", u8"选定段落不含链接。\nNo link found.");
        return;
    }
    if (this_nodes_a.size() > 1) {
        QMessageBox::warning(nullptr, "", u8"段落含有多个<a>标签，请手动处理。\nMultiple tag <a> found.");
        return;
    }
    GumboNode *&this_node_a = this_nodes_a[0];
    QHash<QString, QString> this_a_attributes = this_gumbo.get_attributes_of_node(this_node_a);
    QString this_a_href = this_a_attributes["href"];
    QString this_a_id = this_a_attributes["id"];
    if (this_a_href.isEmpty() || this_a_id.isEmpty()) {
        QMessageBox::warning(nullptr, "", u8"双向链接错误。");
    }
    
    // Get and parse the linked node.
    GumboInterface this_doc_gumbo = {code_view->toPlainText(), "HTML2.0"};
    QList<GumboNode *> nodes_with_id = this_doc_gumbo.get_all_nodes_with_attribute("id");
    GumboNode *that_node_a = nullptr;
    for (auto p : nodes_with_id) {
        auto attributes = this_doc_gumbo.get_attributes_of_node(p);
        if ('#' + attributes["id"] == this_a_href) {
            that_node_a = p;
        }
    }
    if (!that_node_a) {
        QMessageBox::warning(nullptr, "", u8"（在本文件中）未找到链接节点。\nLinked node not found.");
        return;
    }
    QHash<QString, QString> that_a_attributes = this_doc_gumbo.get_attributes_of_node(that_node_a);
    QString that_a_href = that_a_attributes["href"];
    QString that_a_id = that_a_attributes["id"];

    // Check the doubly link valid.
    if ((this_a_href != '#' + that_a_id) || (that_a_href != '#' + this_a_id)) {
        QMessageBox::warning(nullptr, "", u8"双向链接错误，请检查。\nDoubly link error.");
        return;
    }
    
    // Check order: the content should be after reference.
    QTextCursor that_cursor(this_cursor.document());
    size_t that_line = that_node_a->v.element.start_pos.line;
    size_t that_column = that_node_a->v.element.start_pos.column;
    size_t that_size = that_node_a->v.element.end_pos.column - that_column; // Only for the reference code in the same line <<<<<<<
    for (int i = 0; i < that_line; ++i) {
        that_cursor.movePosition(QTextCursor::Down);
    }
    for (int i = 0; i < that_column - 1; ++i) {
        that_cursor.movePosition(QTextCursor::Right);
    }
    QTextCursor content_cusor, reference_cursor;
    QString content_text, reference_text;
    if (mode == ConvertMode::fromContent) {
        content_cusor = this_cursor;
        content_text = this_text;
        reference_cursor = that_cursor;
        //reference_text = that_text;
    } else if (mode == ConvertMode::fromReference) {
        content_cusor = that_cursor;
        //content_text = that_text;
        reference_cursor = this_cursor;
        reference_text = this_text;
    } else {
        QMessageBox::warning(nullptr, "", "ConvertMode Error.");
    }
    if (checkOrder(reference_cursor, content_cusor)) {
        QMessageBox::warning(nullptr, "", u8"检测到注释内容在引用之前，请检查转换选项是否正确。");
        return;
    }
    
    // Remove tags and deal special characters in content text.
    
    // Insert in-text annotation code.
    content_text = getPlainText(content_text);
    content_text = content_text.remove(reference_text);
    insertAnnotation(content_text, S_default_icon_src, reference_cursor);
    
    // Remove old reference code.
    size_t old_reference_size = that_size + 4/* the closing tag size */; // Need modify <<<<<<<
    for (int i = 0; i < old_reference_size; ++i) {
        reference_cursor.deleteChar();
    }
    
    // Remove old content code.
    content_cusor.removeSelectedText(); // Only for fromContent. <<<<<<<
    
    this_cursor.endEditBlock();
    that_cursor.endEditBlock();
}

QString AnnotationUtility::getPlainText(QString &origin_text)
{
    if (origin_text.isEmpty()) {
        QMessageBox::warning(nullptr, "", "Input text empty.");
    }
    GumboInterface gumbo{origin_text, "HTML2.0"};
    QString return_text = gumbo.get_local_text_of_node(gumbo.get_root_node());
    if (return_text.contains('<')) {
        QMessageBox::warning(nullptr, "", "注释含有<符号，请手动处理。");
    }
    if (return_text.contains('"')) {
        QMessageBox::warning(nullptr, "", "注释含有\"符号，请手动处理。");
    }
    return return_text;
}

int AnnotationUtility::checkOrder(QTextCursor &reference, QTextCursor &content)
{
    QMessageBox::information(nullptr, "", "checkOrder() developing...");
    
    return 0;
}
