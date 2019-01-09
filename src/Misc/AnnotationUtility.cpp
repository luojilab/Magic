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
#include <QMessageBox>          // QMessageBos::warning()
#include <iostream>             // std::cerr

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
    std::shared_ptr<QTextCursor> content_cursor = std::make_shared<QTextCursor>(code_view->textCursor());
    content_cursor->beginEditBlock();
    content_cursor->select(QTextCursor::BlockUnderCursor);
    QString block_text = content_cursor->selectedText().trimmed();
    if (block_text.isEmpty()) {
        QMessageBox::warning(nullptr, "", u8"未选择内容。\nEmpty Selection.");
        return;
    }
    
    // Parse the text using Gumbo to get element with tag <a>.
    std::shared_ptr<GumboInterface> content_gumbo = std::make_shared<GumboInterface>(block_text, "HTML2.0");
    
    QList<GumboNode *> content_a_nodes = content_gumbo->get_all_nodes_with_tag(GUMBO_TAG_A);
    if (content_a_nodes.isEmpty()) {
        QMessageBox::warning(nullptr, "", u8"选定段落不含链接。");
        return;
    } else if (content_a_nodes.size() > 1) {
        QMessageBox::warning(nullptr, "", u8"段落含有多个&lt;a&gt;标签。");
        return;
    }
    GumboNode *content_a_node = content_a_nodes[0];
    
    AnnoData content{content_cursor, content_gumbo, content_a_node};
    
    AnnoData reference;
    ErrorCode err = ErrorCode::NoError;
    std::tie(err, reference) = getLinkedTagA(content);
    if (err != ErrorCode::NoError) {
        QMessageBox::warning(nullptr, "", S_error_messages.at(err));
        return;
    }

    err = ErrorCode::NoError;
    err = selectInvisibleWrappingTags(&reference);
    if (err != ErrorCode::NoError) {
        QMessageBox::warning(nullptr, "", S_error_messages.at(err));
        return;
    }

    if (convertAnnotation(content, reference)) {
        return;
    }
}

void AnnotationUtility::convertFromReference(CodeViewEditor *code_view)
{
    AnnoData reference;
    ErrorCode err = ErrorCode::NoError;
    std::tie(err, reference) = getWrappingTagA(code_view);
    if (err != ErrorCode::NoError) {
        QMessageBox::warning(nullptr, "", S_error_messages.at(err));
        return;
    }
    
    AnnoData content;
    err = ErrorCode::NoError;
    std::tie(err, content) = getLinkedTagA(reference);
    if (err != ErrorCode::NoError) {
        QMessageBox::warning(nullptr, "", S_error_messages.at(err));
        return;
    }
    
    content.cursor->select(QTextCursor::BlockUnderCursor);
    err = ErrorCode::NoError;
    err = selectInvisibleWrappingTags(&reference);
    if (err != ErrorCode::NoError) {
        QMessageBox::warning(nullptr, "", S_error_messages.at(err));
        return;
    }
    
    if (convertAnnotation(content, reference)) {
        return;
    }
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
        QMessageBox::warning(nullptr, "", "注释含有&lt;符号，请手动处理。");
    }
    if (return_text.contains('"')) {
        QMessageBox::warning(nullptr, "", "注释含有\"符号，请手动处理。");
    }
    return return_text;
}

int AnnotationUtility::convertAnnotation(AnnoData &content, AnnoData &reference)
{
    // Check the doubly link valid.
    auto err = checkLink(content, reference);
    if (err != ErrorCode::NoError) {
        QMessageBox::warning(nullptr, "", S_error_messages.at(err));
        return 1;
    }
    
    // Check order: the content should be after reference.
    err = ErrorCode::NoError;
    err = checkOrder(content, reference);
    if (err != ErrorCode::NoError) {
        QMessageBox::warning(nullptr, "", S_error_messages.at(err));
        return 2;
    }
    
    QString content_text = content.gumbo->get_local_text_of_node(content.a_node->parent);
    QString reference_text = reference.gumbo->get_local_text_of_node(reference.a_node);
    content_text = content_text.remove(reference_text).trimmed();
    insertAnnotation(content_text, S_DefaultIconSrc, *reference.cursor);

    // Remove old code.
    content.cursor->removeSelectedText();
    reference.cursor->removeSelectedText();
    content.cursor->endEditBlock();
    reference.cursor->endEditBlock();
    
    return 0;
}

std::pair<AnnotationUtility::ErrorCode, AnnotationUtility::AnnoData>
AnnotationUtility::getWrappingTagA(CodeViewEditor *code_view)
{
    const QTextCursor initial_cursor = code_view->textCursor();
    QTextCursor temp_cursor = code_view->textCursor();
    temp_cursor.beginEditBlock();
    
    // Find opening tag <a>.
    if (!code_view->find("<a", QTextDocument::FindBackward)) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::OpenTagANotFound, AnnoData());
    }
    temp_cursor = code_view->textCursor();
    temp_cursor.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor);
    code_view->setTextCursor(temp_cursor);
    
    // Find and select tag <a>...</a>.
    QRegExp tag_a_regex{S_TagARegex};
    tag_a_regex.setMinimal(true);
    if (!code_view->find(tag_a_regex)) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::TagANotFound, AnnoData());
    }
    
    temp_cursor = code_view->textCursor();
    if (temp_cursor.selectionStart() > initial_cursor.position() || temp_cursor.selectionEnd() < initial_cursor.position()) {
        code_view->setTextCursor(initial_cursor);
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::CursorOutOfRange, AnnoData());
    }
    
    // Parse the selected text to get node <a>...</a>.
    QString tag_a_text = code_view->textCursor().selectedText();
    GumboInterface temp_gumbo{tag_a_text, "HTML2.0"};
    QList<GumboNode *> temp_a_nodes = temp_gumbo.get_all_nodes_with_tag(GUMBO_TAG_A);
    if (temp_a_nodes.isEmpty()) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::NoLinkInSelectedBlock, AnnoData());
    }
    if (temp_a_nodes.size() > 1) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::MultipleLinksInSelectedBlock, AnnoData());
    }
    GumboNode *temp_a_node = temp_a_nodes[0];
    QHash<QString, QString> temp_a_node_attributes = temp_gumbo.get_attributes_of_node(temp_a_node);
    QString a_node_id = temp_a_node_attributes["id"];
    if (a_node_id.isEmpty()) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::AttributeIdNotFound, AnnoData());
    }
    
    // Parse the document and get the <a> node with the id.
    std::shared_ptr<GumboInterface> gumbo = std::make_shared<GumboInterface>(code_view->document()->toPlainText(), "HTML2.0");
    QList<GumboNode *> nodes_with_id = gumbo->get_all_nodes_with_attribute("id");
    GumboNode *a_node = nullptr;
    for (auto p : nodes_with_id) {
        auto attributes = gumbo->get_attributes_of_node(p);
        if (attributes["id"] == a_node_id) {
            a_node = p;
            break;
        }
    }
    if (!a_node) {
        throw std::logic_error("GumboNode parsed in block text not found in the document.");
    }
    
    std::shared_ptr<QTextCursor> cursor = std::make_shared<QTextCursor>(code_view->textCursor());
    return std::make_pair<ErrorCode, AnnoData>(ErrorCode::NoError, AnnoData{cursor, gumbo, a_node});
}

std::pair<AnnotationUtility::ErrorCode, AnnotationUtility::AnnoData>
AnnotationUtility::getLinkedTagA(const AnnoData &selected)
{
    QHash<QString, QString> selected_a_attributes = selected.gumbo->get_attributes_of_node(selected.a_node);
    QString &selected_href = selected_a_attributes["href"];
    if (selected_href.isEmpty()) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::EmptyHref, AnnoData());
    }
    
    // Parse the href to determine the target file.
    QTextDocument *linked_document = nullptr;
    QString linked_id;
    QStringList linked_path = selected_href.split('#', QString::SkipEmptyParts);
    if (linked_path.length() == 1) { // Linked node in the current file.
        linked_document = selected.cursor->document();
        linked_id = linked_path[0];
    } else if (linked_path.length() == 2) { // Linked node in other file.
        HTMLResource *html;
        int err;
        std::tie(err, html) = getDocument(linked_path[0]);
        if (err) {
            return std::make_pair<ErrorCode, AnnoData>(ErrorCode::LinkedFileNotFound, AnnoData());
        }
        linked_document = &(html->GetTextDocumentForWriting());
        linked_id = linked_path[1];
    } else {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::InvalidHref, AnnoData());
    }
    
    // Search the id corresponding to the href.
    std::shared_ptr<GumboInterface> linked_gumbo = std::make_shared<GumboInterface>(linked_document->toPlainText(), "HTML2.0");
    QList<GumboNode *> nodes_with_id = linked_gumbo->get_all_nodes_with_attribute("id");
    GumboNode *linked_a_node = nullptr;
    for (auto p : nodes_with_id) {
        auto attributes = linked_gumbo->get_attributes_of_node(p);
        if (attributes["id"] == linked_id) {
            linked_a_node = p;
            break;
        }
    }
    if (!linked_a_node) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::LinkedNodeNotFound, AnnoData());
    }
    
    // Get the reference cursor with <a> tag selected.
    std::shared_ptr<QTextCursor> linked_cursor = std::make_shared<QTextCursor>(linked_document);
    linked_cursor->beginEditBlock();
    size_t line = linked_a_node->v.element.start_pos.line;
    size_t column = linked_a_node->v.element.start_pos.column;
    size_t length = linked_a_node->v.element.end_pos.column - column;

    // Move the cursor to select <a> tag text.
    linked_cursor->movePosition(QTextCursor::NextBlock, QTextCursor::MoveAnchor, line);
    linked_cursor->movePosition(QTextCursor::Right, QTextCursor::MoveAnchor, column - 1);
    linked_cursor->movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, length + 4);
    
    return std::make_pair<ErrorCode, AnnoData>(ErrorCode::NoError, AnnoData{linked_cursor, linked_gumbo, linked_a_node});
}

std::pair<int, HTMLResource *> AnnotationUtility::getDocument(const QString &file_path)
{
    QString file_name = file_path.split('/').back();
    QWidget *main_window_widget = Utility::GetMainWindow();
    MainWindow *main_window = dynamic_cast<MainWindow *>(main_window_widget);
    const QStringList current_filenames = main_window->GetCurrentBook()->GetFolderKeeper()->GetAllFilenames();
    if (!current_filenames.contains(file_name, Qt::CaseSensitive)) {
        return std::make_pair(1, nullptr);
    }
    Resource *resource = main_window->GetCurrentBook()->GetFolderKeeper()->GetResourceByFilename(file_name);
    HTMLResource *document = qobject_cast<HTMLResource *>(resource);
    return std::make_pair(0, document);
}

AnnotationUtility::ErrorCode AnnotationUtility::selectInvisibleWrappingTags(AnnoData *anno)
{
    QString anno_text = anno->gumbo->get_local_text_of_node(anno->a_node);
    if (anno_text.isEmpty()) {
        return ErrorCode::EmptyReferenceText;
    }
    GumboNode *child_node = anno->a_node;
    GumboNode *parent_node = child_node->parent;
    while (parent_node) {
        QString parent_text = anno->gumbo->get_local_text_of_node(parent_node);
    
        if (anno_text != parent_text) {
            return ErrorCode::NoError;
        }
        // Move cursor to select the wrapping tag.
        auto left_offset = child_node->v.element.start_pos.column - parent_node->v.element.start_pos.column + 1;
        auto total_length = (parent_node->v.element.end_pos.column + parent_node->v.element.original_end_tag.length) - parent_node->v.element.start_pos.column;
        anno->cursor->movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, left_offset);
        anno->cursor->movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, total_length);
        
        parent_node = parent_node->parent;
    }
    return ErrorCode::NullParentNode;
}

AnnotationUtility::ErrorCode AnnotationUtility::checkLink(const AnnoData &content, const AnnoData &reference)
{
    auto content_attributes = content.gumbo->get_attributes_of_node(content.a_node);
    auto content_href = content_attributes["href"].split('#').back();
    auto content_id = content_attributes["id"];
    auto reference_attributes = reference.gumbo->get_attributes_of_node(reference.a_node);
    auto reference_href = reference_attributes["href"].split('#').back();
    auto reference_id = reference_attributes["id"];

    if (content_href.isEmpty() || content_id.isEmpty() || reference_href.isEmpty() || reference_id.isEmpty()) {
        return ErrorCode::EmptyHref;
    }
    if ((content_href != reference_id) || (reference_href != content_id)) {
        return ErrorCode::DoublyLinkDisconnected;
    }
    return ErrorCode::NoError;
}

AnnotationUtility::ErrorCode AnnotationUtility::checkOrder(const AnnoData &content, const AnnoData &reference)
{
    if (content.cursor->document() == reference.cursor->document()) {
        if (content.cursor->position() < reference.cursor->position()) {
            return ErrorCode::ContentBeforeReference;
        }
    } else {
        // Get filenames of content and reference.
        QString content_filename = reference.gumbo->get_attributes_of_node(reference.a_node)["href"].split('#').front().split('/').back();
        QString reference_filename = content.gumbo->get_attributes_of_node(content.a_node)["href"].split('#').front().split('/').back();
        
        // Get filenames in the book in order.
        QWidget *main_window_widget = Utility::GetMainWindow();
        MainWindow *main_window = dynamic_cast<MainWindow *>(main_window_widget);
        const QStringList filenames_in_order = main_window->GetCurrentBook()->GetOPF()->GetSpineOrderFilenames();
        if (filenames_in_order.isEmpty()) {
            return ErrorCode::DocumentOrderNotFound;
        }
        
        if (filenames_in_order.indexOf(content_filename) < filenames_in_order.indexOf(reference_filename)) {
            return ErrorCode::ContentFileBeforeReferenceFile;
        }
    }
    
    return ErrorCode::NoError;
}

const std::map<AnnotationUtility::ErrorCode, QString> AnnotationUtility::S_error_messages = {
    {ErrorCode::EmptyHref, u8"含有空链接。"},
    {ErrorCode::LinkedFileNotFound, u8"未找到链接文件。"},
    {ErrorCode::InvalidHref, u8"无效的href。"},
    {ErrorCode::LinkedNodeNotFound, u8"未找到链接节点。"},
    {ErrorCode::OpenTagANotFound, u8"未找到&lt;a&gt;前标签。"},
    {ErrorCode::TagANotFound, u8"未找到完整&lt;a&gt;..&lt;/a&gt;标签。"},
    {ErrorCode::CursorOutOfRange, u8"光标位于&lt;a&gt;标签之外。"},
    {ErrorCode::NoLinkInSelectedBlock, u8"选定段落不含链接。"},
    {ErrorCode::MultipleLinksInSelectedBlock, u8"段落含有多个&lt;a&gt;标签。"},
    {ErrorCode::AttributeIdNotFound, u8"选定标签不含id属性。"},
    {ErrorCode::EmptyReferenceText, u8"注释引用文本为空。"},
    {ErrorCode::NullParentNode, u8"Null parent GumboNode."},
    {ErrorCode::DoublyLinkDisconnected, u8"双向链接未连通。"},
    {ErrorCode::ContentBeforeReference, u8"检测到注释内容在引用之前，请检查转换选项是否正确。"},
    {ErrorCode::DocumentOrderNotFound, u8"未找到xhtml文件顺序。"},
    {ErrorCode::ContentFileBeforeReferenceFile, u8"检测到注释内容所在文档位于引用所在文档之前，请检查转换选项。"},
};
