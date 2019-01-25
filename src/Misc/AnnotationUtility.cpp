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
#include <QMessageBox>                  // QMessageBos::warning()
#include "MainUI/BookBrowser.h"         // Refresh()
#include "Misc/CSSSelectorJudge.hpp"    // CSSSelectorJudge::selectorExists()
#include <iostream>                     // std::cerr

const QString S_annoPrefix = "<img class=\"epub-footnote\" src=\"";
const QString S_annoInfix = "\" alt=\"";
const QString S_annoSuffix = "\" />";
const QString S_defaultIconSrc = "../Images/AnnoIcon0.png";
const QString S_tagARegex = "<a(\\s+\\w+=\"(\\w|-|#|\\.|\\/)+\"\\s*)+>.*</a>";
const QString S_iconFilename = "AnnoIcon0";
const QString S_iconFilePath = ":icon/AnnoIcon0.png";
const QString S_annoStylesheetFilename = "AnnotationStyles.css";
const QString S_annoStylesheetPath = ":icon/" + S_annoStylesheetFilename;
const QString S_annoStyleLink = "<link rel=\"stylesheet\" href=\"../Styles/AnnotationStyles.css\" />";
const char *S_annoSelector = "img.epub-footnote { }";
const char *S_annoStyle = "\n\nimg.epub-footnote {\n    width: .8em;\n    height: .8em;\n    vertical-align: super;\n    padding: 0 5px;\n}\n";
const QList<GumboTag> S_blockTags = {GUMBO_TAG_ADDRESS, GUMBO_TAG_ARTICLE, GUMBO_TAG_ASIDE, GUMBO_TAG_BLOCKQUOTE, GUMBO_TAG_DETAILS, GUMBO_TAG_DD, GUMBO_TAG_DIV, GUMBO_TAG_DL, GUMBO_TAG_DT, GUMBO_TAG_FIELDSET, GUMBO_TAG_FIGCAPTION, GUMBO_TAG_FIGURE, GUMBO_TAG_FOOTER, GUMBO_TAG_FORM, GUMBO_TAG_H1, GUMBO_TAG_H2, GUMBO_TAG_H3, GUMBO_TAG_H4, GUMBO_TAG_H5, GUMBO_TAG_H6, GUMBO_TAG_HEADER, GUMBO_TAG_HGROUP, GUMBO_TAG_HR, GUMBO_TAG_LI, GUMBO_TAG_MAIN, GUMBO_TAG_NAV, GUMBO_TAG_OL, GUMBO_TAG_P, GUMBO_TAG_PRE, GUMBO_TAG_SECTION, GUMBO_TAG_TABLE, GUMBO_TAG_UL};

void AnnotationUtility::convertAnnotationForContextMenu(CodeViewEditor *codeView, ConvertMode mode)
{
    if (!codeView) {
        return;
    }
    ErrorCode err = ErrorCode::NoError;
    if (mode == ConvertMode::FromContent) {
        err = convertFromContent(codeView);
    } else if (mode == ConvertMode::FromReference) {
        err = convertFromReference(codeView);
    } else {
        return;
    }
    if (err != ErrorCode::NoError) {
        QMessageBox::warning(nullptr, "", S_errorMessages.at(err));
        return;
    }
}

void AnnotationUtility::insertAnnotation(const QString &annoText, const QString &annoIcon, QTextCursor cursor)
{
    QString annotationCode = S_annoPrefix + annoIcon + S_annoInfix + annoText + S_annoSuffix;
    
    // Insert annotation text at the cursor.
    cursor.insertText(annotationCode);
}

AnnotationUtility::ErrorCode AnnotationUtility::convertFromContent(CodeViewEditor *codeView)
{
    AnnoData content;
    ErrorCode err = ErrorCode::NoError;
    std::tie(err, content) = getTagAInBlock(codeView);
    if (err != ErrorCode::NoError) {
        return err;
    }

    AnnoData reference;
    std::tie(err, reference) = getLinkedTagA(content);
    if (err != ErrorCode::NoError) {
        return err;
    }
    
    err = selectWrappingBlockTag(&content);
    if (err != ErrorCode::NoError) {
        return err;
    }

    err = selectInvisibleWrappingTags(&reference);
    if (err != ErrorCode::NoError) {
        return err;
    }

    err = convertAnnotation(content, reference);
    if (err != ErrorCode::NoError) {
        return err;
    }
    
    addIconResource();
    appendStyle(codeView);
    
    return ErrorCode::NoError;
}

AnnotationUtility::ErrorCode AnnotationUtility::convertFromReference(CodeViewEditor *codeView)
{
    AnnoData reference;
    ErrorCode err = ErrorCode::NoError;
    std::tie(err, reference) = getWrappingTagA(codeView);
    if (err != ErrorCode::NoError) {
        return err;
    }
    
    AnnoData content;
    std::tie(err, content) = getLinkedTagA(reference);
    if (err != ErrorCode::NoError) {
        return err;
    }
    
    err = selectWrappingBlockTag(&content);
    if (err != ErrorCode::NoError) {
        return err;
    }
    
    err = selectInvisibleWrappingTags(&reference);
    if (err != ErrorCode::NoError) {
        return err;
    }
    
    err = convertAnnotation(content, reference);
    if (err != ErrorCode::NoError) {
        return err;
    }
    
    addIconResource();
    appendStyle(codeView);
    
    return ErrorCode::NoError;
}

QString AnnotationUtility::getPlainText(const QString &originText)
{
    if (originText.isEmpty()) {
        QMessageBox::warning(nullptr, "", u8"无文本输入。\nInput text empty.");
        return QString();
    }
    GumboInterface gumbo {originText, "HTML2.0"};
    QString returnText = gumbo.get_local_text_of_node(gumbo.get_root_node());
    if (returnText.contains('<')) {
        QMessageBox::warning(nullptr, "", "注释含有&lt;符号，请手动处理。");
    }
    if (returnText.contains('"')) {
        QMessageBox::warning(nullptr, "", "注释含有\"符号，请手动处理。");
    }
    return returnText;
}

void AnnotationUtility::appendStyle(CodeViewEditor *codeView, MainWindow *mainWindow)
{
    if (!mainWindow) {
        mainWindow = dynamic_cast<MainWindow *>(Utility::GetMainWindow());
        if (!mainWindow) {
            QMessageBox::warning(nullptr, "", S_errorMessages.at(ErrorCode::GetMainWindowFailed));
            return;
        }
    }
    
    // Get html link nodes using Gumbo.
    GumboInterface gumbo(codeView->toPlainText(), "HTML2.0");
    const QList<GumboNode *> nodeList = gumbo.get_all_nodes_with_tag(GUMBO_TAG_LINK);
    if (nodeList.isEmpty()) {
        auto err = addStylesheet(codeView, mainWindow);
        if (err != ErrorCode::NoError) {
            QMessageBox::warning(nullptr, "", S_errorMessages.at(err));
        }
        return;
    }
    
    // Get filename of linked stylesheet
    QString cssFilename;
    bool hasCss = false;
    for (auto node : nodeList) {
        GumboVector attributes = node->v.element.attributes;
        const QString rel = gumbo_get_attribute(&attributes, "rel")->value;
        if (rel.isEmpty() || rel != "stylesheet") {
            continue;
        }
        const QString cssFilePath = gumbo_get_attribute(&attributes, "href")->value;
        if (cssFilePath.isEmpty()) {
            continue;
        }
        cssFilename = cssFilePath.split('/').back();
        const QStringList currentFilenames = mainWindow->GetCurrentBook()->GetFolderKeeper()->GetAllFilenames();
        if (currentFilenames.contains(cssFilename, Qt::CaseSensitive)) {
            hasCss = true;
            break;
        }
    }
    
    if (!hasCss) {
        auto err = addStylesheet(codeView, mainWindow);
        if (err != ErrorCode::NoError) {
            QMessageBox::warning(nullptr, "", S_errorMessages.at(err));
        }
        return;
    }
    
    // Get the stylesheet document.
    CSSResource *css = qobject_cast<CSSResource *>(mainWindow->GetCurrentBook()->GetFolderKeeper()->GetResourceByFilename(cssFilename));
    if (!css) {
        QMessageBox::warning(nullptr, "", "文档链接的css文件不存在。\nThe CSS file this HTML linked to does not exsist.");
    }
    QTextDocument &cssDoc = css->GetTextDocumentForWriting();
    if (cssDoc.isEmpty()) { // The CSS file is not open
        QFile cssFile(css->GetFullPath());
        cssFile.open(QIODevice::ReadWrite);
        
        // Check selector existence using CSS parser
        const QByteArray currentStyles = cssFile.readAll();
        if (CSSSelectorJudge::selectorExists(S_annoSelector, currentStyles)) {
            return;
        }
        
        // Append the style to the end of the file
        cssFile.write(S_annoStyle);
        cssFile.close();
        
    } else {
        // Check selector existence using CSS parser
        QString currentStyles = cssDoc.toPlainText();
        if (CSSSelectorJudge::selectorExists(S_annoSelector, currentStyles)) {
            return;
        }
        
        // Append the style to the end of the stylesheet.
        if (currentStyles.isEmpty()) {
            QMessageBox::warning(nullptr, "", "读取CSS失败。Read CSS file failed.");
            return;
        }
        cssDoc.setPlainText(currentStyles.append(S_annoStyle));
    }
    
    emit css->ResourceUpdatedOnDisk();
}

AnnotationUtility::ErrorCode AnnotationUtility::convertAnnotation(AnnoData &content, AnnoData &reference)
{
    // Check the doubly link valid.
    ErrorCode err = ErrorCode::NoError;
    err = checkLink(content, reference);
    if (err != ErrorCode::NoError) {
        return err;
    }
    
    // Check order: the content should be after reference.
    err = checkOrder(content, reference);
    if (err != ErrorCode::NoError) {
        return err;
    }
    
    QString contentText = content.gumbo->get_local_text_of_node(content.aNode->parent);
    QString referenceText = reference.gumbo->get_local_text_of_node(reference.aNode);
    contentText = contentText.remove(referenceText).trimmed();
    insertAnnotation(contentText, S_defaultIconSrc, *reference.cursor);

    content.cursor->removeSelectedText();
    reference.cursor->removeSelectedText();
    
    return ErrorCode::NoError;
}

std::pair<AnnotationUtility::ErrorCode, AnnotationUtility::AnnoData>
AnnotationUtility::getTagAInBlock(CodeViewEditor *codeView)
{
    // Get block text under the cursor.
    QTextCursor tempCursor = codeView->textCursor();
    tempCursor.select(QTextCursor::BlockUnderCursor);
    QString blockText = tempCursor.selectedText().trimmed();

    // Parse the text using Gumbo to check the number of <a> tag.
    GumboInterface tempGumbo = {blockText, "HTML2.0"};
    QList<GumboNode *> tempANodes = tempGumbo.get_all_nodes_with_tag(GUMBO_TAG_A);
    if (tempANodes.isEmpty()) {
        return std::make_pair(ErrorCode::TagANotFound, AnnoData());
    } else if (tempANodes.size() > 1) {
        return std::make_pair(ErrorCode::MultipleLinksInSelectedBlock, AnnoData());
    }
    GumboNode *tempANode = tempANodes[0];
    QHash<QString, QString> tempANodeAttributes = tempGumbo.get_attributes_of_node(tempANode);
    QString aNodeId = tempANodeAttributes["id"];
    if (aNodeId.isEmpty()) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::AttributeIdNotFound, AnnoData());
    }
    
    // Select the exact <a> tag for cursor.
    tempCursor.movePosition(QTextCursor::Right, QTextCursor::MoveAnchor);
    codeView->setTextCursor(tempCursor);
    
    if (!codeView->find("<a", QTextDocument::FindBackward)) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::OpenTagANotFound, AnnoData());
    }
    tempCursor = codeView->textCursor();
    tempCursor.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor);
    codeView->setTextCursor(tempCursor);
    
    QRegExp tagARegex{S_tagARegex};
    tagARegex.setMinimal(true);
    if (!codeView->find(tagARegex)) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::TagANotFound, AnnoData());
    }
    
    // Parse the document and get the <a> node with the id.
    std::shared_ptr<GumboInterface> returnGumbo = std::make_shared<GumboInterface>(codeView->document()->toPlainText(), "HTML2.0");
    QList<GumboNode *> nodesWithId = returnGumbo->get_all_nodes_with_attribute("id");
    GumboNode *returnANode = nullptr;
    for (auto p : nodesWithId) {
        auto attributes = returnGumbo->get_attributes_of_node(p);
        if (attributes["id"] == aNodeId) {
            returnANode = p;
            break;
        }
    }
    if (!returnANode) {
        throw std::logic_error("GumboNode parsed in block text not found in the document.");
    }
    
    std::shared_ptr<QTextCursor> returnCursor = std::make_shared<QTextCursor>(codeView->textCursor());
    return std::make_pair<ErrorCode, AnnoData>(ErrorCode::NoError, AnnoData{returnCursor, returnGumbo, returnANode});
}

std::pair<AnnotationUtility::ErrorCode, AnnotationUtility::AnnoData>
AnnotationUtility::getWrappingTagA(CodeViewEditor *codeView)
{
    const QTextCursor initialCursor = codeView->textCursor();
    QTextCursor tempCursor = codeView->textCursor();
    
    // Find opening tag <a>.
    if (!codeView->find("<a", QTextDocument::FindBackward)) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::OpenTagANotFound, AnnoData());
    }
    tempCursor = codeView->textCursor();
    tempCursor.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor);
    codeView->setTextCursor(tempCursor);
    
    // Find and select tag <a>...</a>.
    QRegExp tagARegex{S_tagARegex};
    tagARegex.setMinimal(true);
    if (!codeView->find(tagARegex)) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::TagANotFound, AnnoData());
    }
    
    tempCursor = codeView->textCursor();
    if (tempCursor.selectionStart() > initialCursor.position() || tempCursor.selectionEnd() < initialCursor.position()) {
        codeView->setTextCursor(initialCursor);
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::CursorOutOfRange, AnnoData());
    }
    
    // Parse the selected text to get node <a>...</a>.
    QString tagAText = codeView->textCursor().selectedText();
    GumboInterface tempGumbo{tagAText, "HTML2.0"};
    QList<GumboNode *> tempANodes = tempGumbo.get_all_nodes_with_tag(GUMBO_TAG_A);
    if (tempANodes.isEmpty()) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::NoLinkInSelectedBlock, AnnoData());
    }
    if (tempANodes.size() > 1) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::MultipleLinksInSelectedBlock, AnnoData());
    }
    GumboNode *tempANode = tempANodes[0];
    QHash<QString, QString> tempANodeAttributes = tempGumbo.get_attributes_of_node(tempANode);
    QString aNodeId = tempANodeAttributes["id"];
    if (aNodeId.isEmpty()) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::AttributeIdNotFound, AnnoData());
    }
    
    // Parse the document and get the <a> node with the id.
    std::shared_ptr<GumboInterface> returnGumbo = std::make_shared<GumboInterface>(codeView->document()->toPlainText(), "HTML2.0");
    QList<GumboNode *> nodesWithId = returnGumbo->get_all_nodes_with_attribute("id");
    GumboNode *returnANode = nullptr;
    for (auto p : nodesWithId) {
        auto attributes = returnGumbo->get_attributes_of_node(p);
        if (attributes["id"] == aNodeId) {
            returnANode = p;
            break;
        }
    }
    if (!returnANode) {
        throw std::logic_error("GumboNode parsed in block text not found in the document.");
    }
    
    std::shared_ptr<QTextCursor> returnCursor = std::make_shared<QTextCursor>(codeView->textCursor());
    return std::make_pair<ErrorCode, AnnoData>(ErrorCode::NoError, AnnoData{returnCursor, returnGumbo, returnANode});
}

std::pair<AnnotationUtility::ErrorCode, AnnotationUtility::AnnoData>
AnnotationUtility::getLinkedTagA(const AnnoData &selected)
{
    QHash<QString, QString> selectedAAttributes = selected.gumbo->get_attributes_of_node(selected.aNode);
    QString &selectedHref = selectedAAttributes["href"];
    if (selectedHref.isEmpty()) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::EmptyHref, AnnoData());
    }
    
    // Parse the href to determine the target file.
    QTextDocument *linkedDocument = nullptr;
    QString linkedId;
    QStringList linked_path = selectedHref.split('#', QString::SkipEmptyParts);
    if (linked_path.length() == 1) { // Linked node in the current file.
        linkedDocument = selected.cursor->document();
        linkedId = linked_path[0];
    } else if (linked_path.length() == 2) { // Linked node in other file.
        HTMLResource *html;
        int err;
        std::tie(err, html) = getDocument(linked_path[0]);
        if (err) {
            return std::make_pair<ErrorCode, AnnoData>(ErrorCode::LinkedFileNotFound, AnnoData());
        }
        linkedDocument = &(html->GetTextDocumentForWriting());
        linkedId = linked_path[1];
    } else {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::InvalidHref, AnnoData());
    }
    
    // Search the id corresponding to the href.
    std::shared_ptr<GumboInterface> linkedGumbo = std::make_shared<GumboInterface>(linkedDocument->toPlainText(), "HTML2.0");
    QList<GumboNode *> nodesWithId = linkedGumbo->get_all_nodes_with_attribute("id");
    GumboNode *linkedANode = nullptr;
    for (auto p : nodesWithId) {
        auto attributes = linkedGumbo->get_attributes_of_node(p);
        if (attributes["id"] == linkedId) {
            linkedANode = p;
            break;
        }
    }
    if (!linkedANode) {
        return std::make_pair<ErrorCode, AnnoData>(ErrorCode::LinkedNodeNotFound, AnnoData());
    }
    
    // Get the reference cursor with <a> tag selected.
    std::shared_ptr<QTextCursor> linkedCursor = std::make_shared<QTextCursor>(linkedDocument);
    size_t line = linkedANode->v.element.start_pos.line;
    size_t column = linkedANode->v.element.start_pos.column;
    size_t length = linkedANode->v.element.end_pos.column - column;

    // Move the cursor to select <a> tag text.
    linkedCursor->movePosition(QTextCursor::NextBlock, QTextCursor::MoveAnchor, line);
    linkedCursor->movePosition(QTextCursor::Right, QTextCursor::MoveAnchor, column - 1);
    linkedCursor->movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, length + 4);
    
    return std::make_pair<ErrorCode, AnnoData>(ErrorCode::NoError, AnnoData{linkedCursor, linkedGumbo, linkedANode});
}

std::pair<int, HTMLResource *> AnnotationUtility::getDocument(const QString &filePath)
{
    QString filename = filePath.split('/').back();
    QWidget *mainWindowWidget = Utility::GetMainWindow();
    MainWindow *mainWindow = dynamic_cast<MainWindow *>(mainWindowWidget);
    if (!mainWindow) {
        return std::make_pair(-1, nullptr);
    }
    const QStringList currentFilenames = mainWindow->GetCurrentBook()->GetFolderKeeper()->GetAllFilenames();
    if (!currentFilenames.contains(filename, Qt::CaseSensitive)) {
        return std::make_pair(1, nullptr);
    }
    Resource *resource = mainWindow->GetCurrentBook()->GetFolderKeeper()->GetResourceByFilename(filename);
    HTMLResource *document = qobject_cast<HTMLResource *>(resource);
    return std::make_pair(0, document);
}

AnnotationUtility::ErrorCode AnnotationUtility::selectWrappingBlockTag(AnnoData *anno)
{
    GumboNode *parentNode = anno->aNode->parent;
    while (parentNode) {
        if (S_blockTags.contains(parentNode->v.element.tag)) {
            break;
        }
        parentNode = parentNode->parent;
    }
    if (parentNode == nullptr) {
        return ErrorCode::LinkedNodeNotFound;
    }
    
    // Move cursor to select the parent tag.
    auto leftOffset = anno->aNode->v.element.start_pos.column - parentNode->v.element.start_pos.column + 1;
    auto totalLength = parentNode->v.element.end_pos.column + parentNode->v.element.original_end_tag.length - parentNode->v.element.start_pos.column;
    anno->cursor->movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, leftOffset);
    anno->cursor->movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, totalLength);
    
    return ErrorCode::NoError;
}

AnnotationUtility::ErrorCode AnnotationUtility::selectInvisibleWrappingTags(AnnoData *anno)
{
    QString annoText = anno->gumbo->get_local_text_of_node(anno->aNode);
    if (annoText.isEmpty()) {
        return ErrorCode::EmptyReferenceText;
    }
    GumboNode *childNode = anno->aNode;
    GumboNode *parentNode = childNode->parent;
    while (parentNode) {
        QString parentText = anno->gumbo->get_local_text_of_node(parentNode);
    
        if (annoText != parentText) {
            return ErrorCode::NoError;
        }
        // Move cursor to select the wrapping tag.
        auto leftOffset = childNode->v.element.start_pos.column - parentNode->v.element.start_pos.column + 1;
        auto totalLength = (parentNode->v.element.end_pos.column + parentNode->v.element.original_end_tag.length) - parentNode->v.element.start_pos.column;
        anno->cursor->movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, leftOffset);
        anno->cursor->movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, totalLength);
        
        parentNode = parentNode->parent;
    }
    return ErrorCode::NullParentNode;
}

AnnotationUtility::ErrorCode AnnotationUtility::checkLink(const AnnoData &content, const AnnoData &reference)
{
    auto contentAttributes = content.gumbo->get_attributes_of_node(content.aNode);
    auto contentHref = contentAttributes["href"].split('#').back();
    auto contentId = contentAttributes["id"];
    auto referenceAttributes = reference.gumbo->get_attributes_of_node(reference.aNode);
    auto referenceHref = referenceAttributes["href"].split('#').back();
    auto referenceId = referenceAttributes["id"];

    if (contentHref.isEmpty() || contentId.isEmpty() || referenceHref.isEmpty() || referenceId.isEmpty()) {
        return ErrorCode::EmptyHref;
    }
    if ((contentHref != referenceId) || (referenceHref != contentId)) {
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
        QString contentFilename = reference.gumbo->get_attributes_of_node(reference.aNode)["href"].split('#').front().split('/').back();
        QString referenceFilename = content.gumbo->get_attributes_of_node(content.aNode)["href"].split('#').front().split('/').back();
        
        // Get filenames in the book in order.
        QWidget *mainWindowWidget = Utility::GetMainWindow();
        MainWindow *mainWindow = dynamic_cast<MainWindow *>(mainWindowWidget);
        if (!mainWindow) {
            return ErrorCode::GetMainWindowFailed;
        }
        const QStringList filenamesInOrder = mainWindow->GetCurrentBook()->GetOPF()->GetSpineOrderFilenames();
        if (filenamesInOrder.isEmpty()) {
            return ErrorCode::DocumentOrderNotFound;
        }
        
        if (filenamesInOrder.indexOf(contentFilename) < filenamesInOrder.indexOf(referenceFilename)) {
            return ErrorCode::ContentFileBeforeReferenceFile;
        }
    }
    
    return ErrorCode::NoError;
}

AnnotationUtility::ErrorCode AnnotationUtility::addIconResource()
{
    MainWindow *mainWindow = dynamic_cast<MainWindow *>(Utility::GetMainWindow());
    if (!mainWindow) {
        return ErrorCode::GetMainWindowFailed;
    }
    const QStringList currentFilenames = mainWindow->GetCurrentBook()->GetFolderKeeper()->GetAllFilenames();
    if (!currentFilenames.contains(S_iconFilename)) {
        Resource *icon = mainWindow->GetCurrentBook()->GetFolderKeeper()->AddContentFileToFolder(S_iconFilePath);
        if (!icon) {
            return ErrorCode::AddIconFailed;
        }
    }
    mainWindow->GetBookBrowser()->Refresh();
    
    return ErrorCode::NoError;
}

AnnotationUtility::ErrorCode AnnotationUtility::addStylesheet(CodeViewEditor *codeView, MainWindow *mainWindow)
{
    if (!mainWindow) {
        return ErrorCode::GetMainWindowFailed;
    }
    Resource *annoStylesheet = mainWindow->GetCurrentBook()->GetFolderKeeper()->AddContentFileToFolder(S_annoStylesheetPath);
    if (!annoStylesheet) {
        return ErrorCode::AddStylesheetFailed;
    }
    addStylesheetLink(codeView);
    
    // Refresh view to display newly added file.
    mainWindow->GetBookBrowser()->Refresh();
    
    return ErrorCode::NoError;
}

AnnotationUtility::ErrorCode AnnotationUtility::addStylesheetLink(CodeViewEditor *codeView)
{
    // Store the initial cursor position to recover later.
    const QTextCursor initialCursor = codeView->textCursor();
    
    // Determine whether the stylesheet link is already added.
    bool linkFound = codeView->find(S_annoStyleLink, QTextDocument::FindBackward);
    if (!linkFound) {
        bool headFound = codeView->find("</head>", QTextDocument::FindBackward);
        if (!headFound) {
            return ErrorCode::TagHeadNotFound;
        }
        
        codeView->textCursor().insertText(S_annoStyleLink + tr("\n</head>"));
    }
    
    // Recover the cursor position.
    codeView->setTextCursor(initialCursor);
    
    return ErrorCode::NoError;
}

const std::map<AnnotationUtility::ErrorCode, QString> AnnotationUtility::S_errorMessages = {
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
    {ErrorCode::AddIconFailed, u8"添加图标文件失败。"},
    {ErrorCode::GetMainWindowFailed, u8"获取主窗口失败。"},
    {ErrorCode::AddStylesheetFailed, u8"添加样式文件失败。\nAdding CSS file failed."},
    {ErrorCode::TagHeadNotFound, u8"未找到head标签。"},
};
