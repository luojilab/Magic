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

const QString S_AnnoPrefix = "<img class=\"epub-footnote\" src=\"";
const QString S_AnnoInfix = "\" alt=\"";
const QString S_AnnoSuffix = "\" />";
const QString S_DefaultIconSrc = "../Images/AnnoIcon0.png";
const QString S_TagARegex = "<a(\\s+\\w+=\"(\\w|-|#|\\.|\\/)+\"\\s*)+>.*</a>";

// Static function used in MainWindow::insertAnnotation.
void AnnotationUtility::insertAnnotation(const QString &anno_text, const QString &anno_icon, QTextCursor cursor)
{
    QString annotation_code = S_AnnoPrefix + anno_icon + S_AnnoInfix + anno_text + S_AnnoSuffix;
    
    // Insert annotation text at the cursor.
    cursor.insertText(annotation_code);
}

void AnnotationUtility::convertFromContent(CodeViewEditor *code_view)
{
    // Get block text under the cursor.
    QTextCursor content_cursor = code_view->textCursor();
    content_cursor.beginEditBlock();
    content_cursor.select(QTextCursor::BlockUnderCursor);
    QString block_text = content_cursor.selectedText().trimmed();
    if (block_text.isEmpty()) {
        QMessageBox::warning(nullptr, "", u8"未选择内容。\nEmpty Selection.");
        return;
    }
    
    // Parse the text using Gumbo to get element with tag <a>.
    std::shared_ptr<GumboInterface> content_gumbo = std::make_shared<GumboInterface>(block_text, "HTML2.0");
    GumboNode *content_a_node = getTagANode(content_gumbo);
    if (!content_a_node) {
        QMessageBox::warning(nullptr, "", u8"获取a节点错误。");
        return;
    }
    
    AnnoData content = {content_cursor, content_gumbo, content_a_node};
    
    AnnoData reference = getLinked(content);
    if (reference.cursor.isNull() || !reference.gumbo || !reference.a_node) {
        QMessageBox::warning(nullptr, "", "Invalid annotation data");
        return;
    }

    if (convertAnnotation(content, reference)) {
        return;
    }
    
    content.cursor.endEditBlock();
    reference.cursor.endEditBlock();
}

void AnnotationUtility::convertFromReference(CodeViewEditor *code_view)
{
    if (selectNearestTagA(code_view)) {
        return;
    }
    QTextCursor reference_cursor = code_view->textCursor();
    QString selected_text = reference_cursor.selectedText();
    if (selected_text.isEmpty()) {
        QMessageBox::warning(nullptr, "", u8"未选择内容。\nEmpty Selection.");
        return;
    }
    
    // Parse the text using Gumbo to get element with tag <a>.
    std::shared_ptr<GumboInterface> reference_gumbo = std::make_shared<GumboInterface>(selected_text, "HTML2.0");
    GumboNode *reference_a_node = getTagANode(reference_gumbo);
    if (!reference_a_node) {
        QMessageBox::warning(nullptr, "", u8"获取a节点错误。");
        return;
    }
    
    AnnoData reference = {reference_cursor, reference_gumbo, reference_a_node};
    
    AnnoData content = getLinked(reference);
    if (content.cursor.isNull() || !content.gumbo || !content.a_node) {
        QMessageBox::warning(nullptr, "", "Invalid annotation data");
    }
    
    if (convertAnnotation(content, reference)) {
        return;
    }
    
    content.cursor.endEditBlock();
    reference.cursor.endEditBlock();
}

QString AnnotationUtility::getPlainText(const QString &origin_text)
{
    if (origin_text.isEmpty()) {
        QMessageBox::warning(nullptr, "", u8"无文本输入。\nInput text empty.");
        return QString();
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

int AnnotationUtility::convertAnnotation(AnnoData &content, AnnoData &reference)
{
    // Check the doubly link valid.
    if (checkLink(content, reference)) {
        QMessageBox::warning(nullptr, "", u8"双向链接错误。");
        return 1;
    }
    
    // Check order: the content should be after reference.
    if (checkOrder(content.cursor, reference.cursor)) {
        QMessageBox::warning(nullptr, "", u8"检测到注释内容在引用之前，请检查转换选项是否正确。");
        return 2;
    }
    
    QString content_text = content.gumbo->get_local_text_of_node(content.a_node->parent);
    content_text = getPlainText(content_text);
    QString reference_text = reference.gumbo->get_local_text_of_node(reference.a_node);
    reference_text = getPlainText(reference_text);
    content_text = content_text.remove(reference_text).trimmed();
    insertAnnotation(content_text, S_DefaultIconSrc, reference.cursor);

    // Remove old code.
    content.cursor.removeSelectedText();
    reference.cursor.removeSelectedText();
    
    return 0;
}

int AnnotationUtility::selectNearestTagA(CodeViewEditor *code_view)
{
    QTextCursor initial_cursor = code_view->textCursor();
    if (!code_view->find("<a", QTextDocument::FindBackward)) {
        QMessageBox::warning(nullptr, "", u8"未找到a前标签。");
        return 1;
    }
    QTextCursor cursor = code_view->textCursor();
    cursor.beginEditBlock();
    cursor.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor);
    code_view->setTextCursor(cursor);
    if (!code_view->find(QRegExp(S_TagARegex))) {
        QMessageBox::warning(nullptr, "", u8"未找到完整a../a标签。");
        return 2;
    }
    cursor = code_view->textCursor();
    if (cursor.selectionStart() > initial_cursor.position() || cursor.selectionEnd() < initial_cursor.position()) {
        std::cout << cursor.selectionStart() << ' ' << cursor.selectionEnd() << ' ' << initial_cursor.position() << std::endl;
        QMessageBox::warning(nullptr, "", u8"光标不位于a标签之间。");
        code_view->setTextCursor(initial_cursor);
        return 3;
    }
    
    return 0;
}

GumboNode *AnnotationUtility::getTagANode(const std::shared_ptr<GumboInterface> gumbo)
{
    QList<GumboNode *> a_nodes = gumbo->get_all_nodes_with_tag(GUMBO_TAG_A);
    if (a_nodes.isEmpty()) {
        QMessageBox::warning(nullptr, "", u8"选定段落不含链接。\nNo link found.");
        return nullptr;
    }
    if (a_nodes.size() > 1) {
        QMessageBox::warning(nullptr, "", u8"段落含有多个a标签，请手动处理。\nMultiple tag <a> found.");
        return nullptr;
    }
    return a_nodes[0];
}

AnnotationUtility::AnnoData AnnotationUtility::getLinked(const AnnoData &selected)
{
    QHash<QString, QString> selected_a_attributes = selected.gumbo->get_attributes_of_node(selected.a_node);
    QString &selected_href = selected_a_attributes["href"];
    if (selected_href.isEmpty()) {
        QMessageBox::warning(nullptr, "", u8"双向链接错误（空链接）。");
    }

    // Search the id corresponding to the href in the current file.
    std::shared_ptr<GumboInterface> linked_gumbo = std::make_shared<GumboInterface>(selected.cursor.document()->toPlainText(), "HTML2.0");
    QList<GumboNode *> nodes_with_id = linked_gumbo->get_all_nodes_with_attribute("id");
    GumboNode *linked_a_node = nullptr;
    for (auto p : nodes_with_id) {
        auto attributes = linked_gumbo->get_attributes_of_node(p);
        if ('#' + attributes["id"] == selected_href) {
            linked_a_node = p;
        }
    }
    if (!linked_a_node) {
        QMessageBox::warning(nullptr, "", u8"（在本文件中）未找到链接节点。\nLinked node not found.");
        return AnnoData();
    }
    // TODO: Search all html files if id not found in the current file.
    
    // Get the reference cursor with <a> tag selected.
    QTextCursor linked_cursor(selected.cursor.document());
    linked_cursor.beginEditBlock();
    size_t line = linked_a_node->v.element.start_pos.line;
    size_t column = linked_a_node->v.element.start_pos.column;
    size_t length = linked_a_node->v.element.end_pos.column - column;
    // Move the cursor to select <a> tag text.
    for (int i = 0; i < line; ++i) {
        linked_cursor.movePosition(QTextCursor::Down);
    }
    for (int i = 0; i < column - 1; ++i) {
        linked_cursor.movePosition(QTextCursor::Right);
    }
    for (int i = 0; i < length + 4 /* 4 is the length of closing tag </a> */; ++i) {
        linked_cursor.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor);
    }
    
    return AnnoData{linked_cursor, linked_gumbo, linked_a_node};
}

int AnnotationUtility::checkLink(const AnnoData &content, const AnnoData &reference)
{
    auto content_attributes = content.gumbo->get_attributes_of_node(content.a_node);
    auto content_href = content_attributes["href"];
    auto content_id = content_attributes["id"];
    auto reference_attributes = reference.gumbo->get_attributes_of_node(reference.a_node);
    auto reference_href = reference_attributes["href"];
    auto reference_id = reference_attributes["id"];

    if (content_href.isEmpty() || content_id.isEmpty() || reference_href.isEmpty() || reference_id.isEmpty()) {
        QMessageBox::warning(nullptr, "", u8"含有空链接。"); // repeat prompt
        return 1;
    }
    if ((content_href != '#' + reference_id) || (reference_href != '#' + content_id)) {
        QMessageBox::warning(nullptr, "", u8"双向链接存在错误。"); // repeat prompt
        return 2;
    }
    return 0;
}

int AnnotationUtility::checkOrder(const QTextCursor &content_cursor, const QTextCursor &reference_cursor)
{
    // TODO: some wrong, need fix
    // TEST >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//    std::cout << content_cursor.position() << ' ' << reference_cursor.position() << std::endl;
    // TEST <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    if (content_cursor.position() < reference_cursor.position()) {
        QMessageBox::warning(nullptr, "", u8"检测到注释内容在引用之前，请检查转换选项是否正确。"); // repeat prompt
        return 1;
    }
    // TODO: the reference and content are not in the same file.
    
    return 0;
}
