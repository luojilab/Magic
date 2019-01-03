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
        QMessageBox::warning(nullptr, "", u8"获取&lt;a&gt;节点错误。");
        return;
    }
    
    AnnoData content = {content_cursor, content_gumbo, content_a_node};
    
    AnnoData reference = getLinked(content);
    if (reference.cursor.isNull() || !reference.gumbo || !reference.a_node) {
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
        QMessageBox::warning(nullptr, "", u8"获取&lt;a&gt;节点错误。");
        return;
    }
    
    AnnoData reference = {reference_cursor, reference_gumbo, reference_a_node};
    
    AnnoData content = getLinked(reference);
    if (content.cursor.isNull() || !content.gumbo || !content.a_node) {
        return;
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
    if (auto err = checkLink(content, reference)) {
        QString msg;
        switch (err) {
            case 1:
                msg = u8"含有空链接。";
                break;
            case 2:
                msg = u8"双向链接未连通。";
                break;
        }
        QMessageBox::warning(nullptr, "", msg);
        return 1;
    }
    
    // Check order: the content should be after reference.
    if (auto err = checkOrder(content, reference)) {
        QString msg;
        switch (err) {
            case 1:
                msg = u8"检测到注释内容在引用之前，请检查转换选项是否正确。";
                break;
            case 2:
                msg = u8"获取MainWindow错误。";
                break;
            case 3:
                msg = u8"获取xhtml文件顺序发生错误。";
                break;
            case 4:
                msg = u8"检测到注释内容所在文档位于引用所在文档之前，请检查转换选项。";
                break;
        }
        QMessageBox::warning(nullptr, "", msg);
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
    // TODO: remove text surrounding tag a.
    
    return 0;
}

int AnnotationUtility::selectNearestTagA(CodeViewEditor *code_view)
{
    QTextCursor initial_cursor = code_view->textCursor();
    if (!code_view->find("<a", QTextDocument::FindBackward)) {
        QMessageBox::warning(nullptr, "", u8"未找到&lt;a&gt;前标签。");
        return 1;
    }
    QTextCursor cursor = code_view->textCursor();
    cursor.beginEditBlock();
    cursor.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor);
    code_view->setTextCursor(cursor);
    QRegExp tag_a_regex{S_TagARegex};
    tag_a_regex.setMinimal(true);
    if (!code_view->find(tag_a_regex)) {
        QMessageBox::warning(nullptr, "", u8"未找到完整&lt;a&gt;..&lt;/a&gt;标签。");
        return 2;
    }
    cursor = code_view->textCursor();
    if (cursor.selectionStart() > initial_cursor.position() || cursor.selectionEnd() < initial_cursor.position()) {
        QMessageBox::warning(nullptr, "", u8"光标不位于&lt;a&gt;标签之间。");
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
        QMessageBox::warning(nullptr, "", u8"段落含有多个&lt;a&gt;标签，请手动处理。\nMultiple tag <a> found.");
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
    
    // Parse the href to determine the target file.
    QTextDocument *linked_document = nullptr;
    QString linked_id;
    QStringList linked_path = selected_href.split('#', QString::SkipEmptyParts);
    if (linked_path.length() == 1) { // Linked node in the current file.
        linked_document = selected.cursor.document();
        linked_id = linked_path[0];
    } else if (linked_path.length() == 2) {
        auto [err, html] = getDocument(linked_path[0]);
        if (err) {
            QString msg;
            switch (err) {
                case 1:
                    msg = u8"无法找到主窗口。";
                    break;
                case 2:
                    msg = u8"未找到链接文件。";
                    break;
            }
            QMessageBox::warning(nullptr, "", msg);
            return AnnoData();
        }
        linked_document = &(html->GetTextDocumentForWriting());
        linked_id = linked_path[1];
    } else {
        QMessageBox::warning(nullptr, "", u8"无效链接。");
        return AnnoData();
    }
    
    // Search the id corresponding to the href.
    std::shared_ptr<GumboInterface> linked_gumbo = std::make_shared<GumboInterface>(linked_document->toPlainText(), "HTML2.0");
    QList<GumboNode *> nodes_with_id = linked_gumbo->get_all_nodes_with_attribute("id");
    GumboNode *linked_a_node = nullptr;
    for (auto p : nodes_with_id) {
        auto attributes = linked_gumbo->get_attributes_of_node(p);
        if (attributes["id"] == linked_id) {
            linked_a_node = p;
        }
    }
    if (!linked_a_node) {
        QMessageBox::warning(nullptr, "", u8"未找到链接节点。\nLinked node not found.");
        return AnnoData();
    }
    
    // Get the reference cursor with <a> tag selected.
    QTextCursor linked_cursor(linked_document);
    linked_cursor.beginEditBlock();
    size_t line = linked_a_node->v.element.start_pos.line;
    size_t column = linked_a_node->v.element.start_pos.column;
    size_t length = linked_a_node->v.element.end_pos.column - column;

    // Move the cursor to select <a> tag text.
    linked_cursor.movePosition(QTextCursor::NextBlock, QTextCursor::MoveAnchor, line);
    linked_cursor.movePosition(QTextCursor::Right, QTextCursor::MoveAnchor, column - 1);
    linked_cursor.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, length + 4);
    
    return AnnoData{linked_cursor, linked_gumbo, linked_a_node};
}

std::pair<int, HTMLResource *> AnnotationUtility::getDocument(const QString file_path)
{
    QString file_name = file_path.split('/').back();
    QWidget *main_window_widget = Utility::GetMainWindow();
    MainWindow *main_window = dynamic_cast<MainWindow *>(main_window_widget);
    if (!main_window) {
        return std::make_pair(1, nullptr);
    }
    const QStringList current_filenames = main_window->GetCurrentBook()->GetFolderKeeper()->GetAllFilenames();
    if (!current_filenames.contains(file_name, Qt::CaseSensitive)) {
        return std::make_pair(2, nullptr);
    }
    Resource *resource = main_window->GetCurrentBook()->GetFolderKeeper()->GetResourceByFilename(file_name);
    HTMLResource *document = qobject_cast<HTMLResource *>(resource);
    return std::make_pair(0, document);
}

int AnnotationUtility::checkLink(const AnnoData &content, const AnnoData &reference)
{
    auto content_attributes = content.gumbo->get_attributes_of_node(content.a_node);
    auto content_href = content_attributes["href"].split('#').back();
    auto content_id = content_attributes["id"];
    auto reference_attributes = reference.gumbo->get_attributes_of_node(reference.a_node);
    auto reference_href = reference_attributes["href"].split('#').back();
    auto reference_id = reference_attributes["id"];

    if (content_href.isEmpty() || content_id.isEmpty() || reference_href.isEmpty() || reference_id.isEmpty()) {
        return 1;
    }
    if ((content_href != reference_id) || (reference_href != content_id)) {
        return 2;
    }
    return 0;
}

int AnnotationUtility::checkOrder(const AnnoData &content, const AnnoData &reference)
{
    if (content.cursor.document() == reference.cursor.document()) {
        if (content.cursor.position() < reference.cursor.position()) {
            return 1;
        }
    } else {
        // Get filenames of content and reference.
        QString content_filename = reference.gumbo->get_attributes_of_node(reference.a_node)["href"].split('#').front().split('/').back();
        QString reference_filename = content.gumbo->get_attributes_of_node(content.a_node)["href"].split('#').front().split('/').back();
        
        // Get filenames in the book in order.
        QWidget *main_window_widget = Utility::GetMainWindow();
        MainWindow *main_window = dynamic_cast<MainWindow *>(main_window_widget);
        if (!main_window) {
            return 2;
        }
        const QStringList filenames_in_order = main_window->GetCurrentBook()->GetOPF()->GetSpineOrderFilenames();
        if (filenames_in_order.isEmpty()) {
            return 3;
        }
        
        if (filenames_in_order.indexOf(content_filename) < filenames_in_order.indexOf(reference_filename)) {
            return 4;
        }
    }
    
    return 0;
}
