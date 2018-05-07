/****************************************************************************
** Meta object code from reading C++ file 'CodeViewEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ViewEditors/CodeViewEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CodeViewEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CodeViewEditor_t {
    QByteArrayData data[69];
    char stringdata0[1226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CodeViewEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CodeViewEditor_t qt_meta_stringdata_CodeViewEditor = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CodeViewEditor"
QT_MOC_LITERAL(1, 15, 17), // "ZoomFactorChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "new_zoom_factor"
QT_MOC_LITERAL(4, 50, 9), // "FocusLost"
QT_MOC_LITERAL(5, 60, 8), // "QWidget*"
QT_MOC_LITERAL(6, 69, 6), // "editor"
QT_MOC_LITERAL(7, 76, 11), // "FocusGained"
QT_MOC_LITERAL(8, 88, 19), // "FilteredCursorMoved"
QT_MOC_LITERAL(9, 108, 11), // "PageClicked"
QT_MOC_LITERAL(10, 120, 11), // "PageUpdated"
QT_MOC_LITERAL(11, 132, 19), // "FilteredTextChanged"
QT_MOC_LITERAL(12, 152, 21), // "OpenClipEditorRequest"
QT_MOC_LITERAL(13, 174, 27), // "ClipEditorModel::clipEntry*"
QT_MOC_LITERAL(14, 202, 22), // "OpenIndexEditorRequest"
QT_MOC_LITERAL(15, 225, 29), // "IndexEditorModel::indexEntry*"
QT_MOC_LITERAL(16, 255, 11), // "LinkClicked"
QT_MOC_LITERAL(17, 267, 3), // "url"
QT_MOC_LITERAL(18, 271, 9), // "ViewImage"
QT_MOC_LITERAL(19, 281, 32), // "GoToLinkedStyleDefinitionRequest"
QT_MOC_LITERAL(20, 314, 12), // "element_name"
QT_MOC_LITERAL(21, 327, 16), // "style_class_name"
QT_MOC_LITERAL(22, 344, 34), // "BookmarkLinkOrStyleLocationRe..."
QT_MOC_LITERAL(23, 379, 31), // "SpellingHighlightRefreshRequest"
QT_MOC_LITERAL(24, 411, 24), // "ShowStatusMessageRequest"
QT_MOC_LITERAL(25, 436, 7), // "message"
QT_MOC_LITERAL(26, 444, 11), // "DocumentSet"
QT_MOC_LITERAL(27, 456, 20), // "MarkSelectionRequest"
QT_MOC_LITERAL(28, 477, 22), // "ClearMarkedTextRequest"
QT_MOC_LITERAL(29, 500, 5), // "print"
QT_MOC_LITERAL(30, 506, 18), // "QPagedPaintDevice*"
QT_MOC_LITERAL(31, 525, 7), // "printer"
QT_MOC_LITERAL(32, 533, 9), // "PasteText"
QT_MOC_LITERAL(33, 543, 4), // "text"
QT_MOC_LITERAL(34, 548, 16), // "PasteClipEntries"
QT_MOC_LITERAL(35, 565, 34), // "QList<ClipEditorModel::clipEn..."
QT_MOC_LITERAL(36, 600, 5), // "clips"
QT_MOC_LITERAL(37, 606, 27), // "RefreshSpellingHighlighting"
QT_MOC_LITERAL(38, 634, 15), // "OpenImageAction"
QT_MOC_LITERAL(39, 650, 15), // "GoToLinkOrStyle"
QT_MOC_LITERAL(40, 666, 13), // "MarkSelection"
QT_MOC_LITERAL(41, 680, 15), // "ClearMarkedText"
QT_MOC_LITERAL(42, 696, 18), // "ResetLastFindMatch"
QT_MOC_LITERAL(43, 715, 23), // "EmitFilteredCursorMoved"
QT_MOC_LITERAL(44, 739, 17), // "TextChangedFilter"
QT_MOC_LITERAL(45, 757, 19), // "RehighlightDocument"
QT_MOC_LITERAL(46, 777, 22), // "PasteClipEntryFromName"
QT_MOC_LITERAL(47, 800, 4), // "name"
QT_MOC_LITERAL(48, 805, 19), // "UpdateUndoAvailable"
QT_MOC_LITERAL(49, 825, 9), // "available"
QT_MOC_LITERAL(50, 835, 26), // "UpdateLineNumberAreaMargin"
QT_MOC_LITERAL(51, 862, 20), // "UpdateLineNumberArea"
QT_MOC_LITERAL(52, 883, 9), // "rectangle"
QT_MOC_LITERAL(53, 893, 14), // "vertical_delta"
QT_MOC_LITERAL(54, 908, 20), // "HighlightCurrentLine"
QT_MOC_LITERAL(55, 929, 15), // "ScrollOneLineUp"
QT_MOC_LITERAL(56, 945, 17), // "ScrollOneLineDown"
QT_MOC_LITERAL(57, 963, 10), // "InsertText"
QT_MOC_LITERAL(58, 974, 19), // "addToUserDictionary"
QT_MOC_LITERAL(59, 994, 22), // "addToDefaultDictionary"
QT_MOC_LITERAL(60, 1017, 10), // "ignoreWord"
QT_MOC_LITERAL(61, 1028, 14), // "SaveClipAction"
QT_MOC_LITERAL(62, 1043, 21), // "GoToLinkOrStyleAction"
QT_MOC_LITERAL(63, 1065, 26), // "ReformatCSSMultiLineAction"
QT_MOC_LITERAL(64, 1092, 27), // "ReformatCSSSingleLineAction"
QT_MOC_LITERAL(65, 1120, 23), // "ReformatHTMLCleanAction"
QT_MOC_LITERAL(66, 1144, 26), // "ReformatHTMLCleanAllAction"
QT_MOC_LITERAL(67, 1171, 25), // "ReformatHTMLToValidAction"
QT_MOC_LITERAL(68, 1197, 28) // "ReformatHTMLToValidAllAction"

    },
    "CodeViewEditor\0ZoomFactorChanged\0\0"
    "new_zoom_factor\0FocusLost\0QWidget*\0"
    "editor\0FocusGained\0FilteredCursorMoved\0"
    "PageClicked\0PageUpdated\0FilteredTextChanged\0"
    "OpenClipEditorRequest\0ClipEditorModel::clipEntry*\0"
    "OpenIndexEditorRequest\0"
    "IndexEditorModel::indexEntry*\0LinkClicked\0"
    "url\0ViewImage\0GoToLinkedStyleDefinitionRequest\0"
    "element_name\0style_class_name\0"
    "BookmarkLinkOrStyleLocationRequest\0"
    "SpellingHighlightRefreshRequest\0"
    "ShowStatusMessageRequest\0message\0"
    "DocumentSet\0MarkSelectionRequest\0"
    "ClearMarkedTextRequest\0print\0"
    "QPagedPaintDevice*\0printer\0PasteText\0"
    "text\0PasteClipEntries\0"
    "QList<ClipEditorModel::clipEntry*>\0"
    "clips\0RefreshSpellingHighlighting\0"
    "OpenImageAction\0GoToLinkOrStyle\0"
    "MarkSelection\0ClearMarkedText\0"
    "ResetLastFindMatch\0EmitFilteredCursorMoved\0"
    "TextChangedFilter\0RehighlightDocument\0"
    "PasteClipEntryFromName\0name\0"
    "UpdateUndoAvailable\0available\0"
    "UpdateLineNumberAreaMargin\0"
    "UpdateLineNumberArea\0rectangle\0"
    "vertical_delta\0HighlightCurrentLine\0"
    "ScrollOneLineUp\0ScrollOneLineDown\0"
    "InsertText\0addToUserDictionary\0"
    "addToDefaultDictionary\0ignoreWord\0"
    "SaveClipAction\0GoToLinkOrStyleAction\0"
    "ReformatCSSMultiLineAction\0"
    "ReformatCSSSingleLineAction\0"
    "ReformatHTMLCleanAction\0"
    "ReformatHTMLCleanAllAction\0"
    "ReformatHTMLToValidAction\0"
    "ReformatHTMLToValidAllAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CodeViewEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  259,    2, 0x06 /* Public */,
       4,    1,  262,    2, 0x06 /* Public */,
       7,    1,  265,    2, 0x06 /* Public */,
       8,    0,  268,    2, 0x06 /* Public */,
       9,    0,  269,    2, 0x06 /* Public */,
      10,    0,  270,    2, 0x06 /* Public */,
      11,    0,  271,    2, 0x06 /* Public */,
      12,    1,  272,    2, 0x06 /* Public */,
      14,    1,  275,    2, 0x06 /* Public */,
      16,    1,  278,    2, 0x06 /* Public */,
      18,    1,  281,    2, 0x06 /* Public */,
      19,    2,  284,    2, 0x06 /* Public */,
      22,    0,  289,    2, 0x06 /* Public */,
      23,    0,  290,    2, 0x06 /* Public */,
      24,    1,  291,    2, 0x06 /* Public */,
      26,    0,  294,    2, 0x06 /* Public */,
      27,    0,  295,    2, 0x06 /* Public */,
      28,    0,  296,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      29,    1,  297,    2, 0x0a /* Public */,
      32,    1,  300,    2, 0x0a /* Public */,
      34,    1,  303,    2, 0x0a /* Public */,
      37,    0,  306,    2, 0x0a /* Public */,
      38,    0,  307,    2, 0x0a /* Public */,
      39,    0,  308,    2, 0x0a /* Public */,
      40,    0,  309,    2, 0x0a /* Public */,
      41,    0,  310,    2, 0x0a /* Public */,
      42,    0,  311,    2, 0x08 /* Private */,
      43,    0,  312,    2, 0x08 /* Private */,
      44,    0,  313,    2, 0x08 /* Private */,
      45,    0,  314,    2, 0x08 /* Private */,
      46,    1,  315,    2, 0x08 /* Private */,
      48,    1,  318,    2, 0x08 /* Private */,
      50,    0,  321,    2, 0x08 /* Private */,
      51,    2,  322,    2, 0x08 /* Private */,
      54,    0,  327,    2, 0x08 /* Private */,
      55,    0,  328,    2, 0x08 /* Private */,
      56,    0,  329,    2, 0x08 /* Private */,
      57,    1,  330,    2, 0x08 /* Private */,
      58,    1,  333,    2, 0x08 /* Private */,
      59,    1,  336,    2, 0x08 /* Private */,
      60,    1,  339,    2, 0x08 /* Private */,
      61,    0,  342,    2, 0x08 /* Private */,
      62,    0,  343,    2, 0x08 /* Private */,
      63,    0,  344,    2, 0x08 /* Private */,
      64,    0,  345,    2, 0x08 /* Private */,
      65,    0,  346,    2, 0x08 /* Private */,
      66,    0,  347,    2, 0x08 /* Private */,
      67,    0,  348,    2, 0x08 /* Private */,
      68,    0,  349,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, QMetaType::QUrl,   17,
    QMetaType::Void, QMetaType::QUrl,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Bool, 0x80000000 | 35,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void, QMetaType::Bool,   49,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect, QMetaType::Int,   52,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CodeViewEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CodeViewEditor *_t = static_cast<CodeViewEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ZoomFactorChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->FocusLost((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->FocusGained((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 3: _t->FilteredCursorMoved(); break;
        case 4: _t->PageClicked(); break;
        case 5: _t->PageUpdated(); break;
        case 6: _t->FilteredTextChanged(); break;
        case 7: _t->OpenClipEditorRequest((*reinterpret_cast< ClipEditorModel::clipEntry*(*)>(_a[1]))); break;
        case 8: _t->OpenIndexEditorRequest((*reinterpret_cast< IndexEditorModel::indexEntry*(*)>(_a[1]))); break;
        case 9: _t->LinkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 10: _t->ViewImage((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 11: _t->GoToLinkedStyleDefinitionRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->BookmarkLinkOrStyleLocationRequest(); break;
        case 13: _t->SpellingHighlightRefreshRequest(); break;
        case 14: _t->ShowStatusMessageRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->DocumentSet(); break;
        case 16: _t->MarkSelectionRequest(); break;
        case 17: _t->ClearMarkedTextRequest(); break;
        case 18: _t->print((*reinterpret_cast< QPagedPaintDevice*(*)>(_a[1]))); break;
        case 19: _t->PasteText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: { bool _r = _t->PasteClipEntries((*reinterpret_cast< const QList<ClipEditorModel::clipEntry*>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: _t->RefreshSpellingHighlighting(); break;
        case 22: _t->OpenImageAction(); break;
        case 23: _t->GoToLinkOrStyle(); break;
        case 24: { bool _r = _t->MarkSelection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->ClearMarkedText();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: _t->ResetLastFindMatch(); break;
        case 27: _t->EmitFilteredCursorMoved(); break;
        case 28: _t->TextChangedFilter(); break;
        case 29: _t->RehighlightDocument(); break;
        case 30: _t->PasteClipEntryFromName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->UpdateUndoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->UpdateLineNumberAreaMargin(); break;
        case 33: _t->UpdateLineNumberArea((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 34: _t->HighlightCurrentLine(); break;
        case 35: _t->ScrollOneLineUp(); break;
        case 36: _t->ScrollOneLineDown(); break;
        case 37: _t->InsertText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->addToUserDictionary((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: _t->addToDefaultDictionary((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->ignoreWord((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: _t->SaveClipAction(); break;
        case 42: _t->GoToLinkOrStyleAction(); break;
        case 43: _t->ReformatCSSMultiLineAction(); break;
        case 44: _t->ReformatCSSSingleLineAction(); break;
        case 45: _t->ReformatHTMLCleanAction(); break;
        case 46: _t->ReformatHTMLCleanAllAction(); break;
        case 47: _t->ReformatHTMLToValidAction(); break;
        case 48: _t->ReformatHTMLToValidAllAction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CodeViewEditor::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::ZoomFactorChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)(QWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::FocusLost)) {
                *result = 1;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)(QWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::FocusGained)) {
                *result = 2;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::FilteredCursorMoved)) {
                *result = 3;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::PageClicked)) {
                *result = 4;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::PageUpdated)) {
                *result = 5;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::FilteredTextChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)(ClipEditorModel::clipEntry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::OpenClipEditorRequest)) {
                *result = 7;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)(IndexEditorModel::indexEntry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::OpenIndexEditorRequest)) {
                *result = 8;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::LinkClicked)) {
                *result = 9;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::ViewImage)) {
                *result = 10;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::GoToLinkedStyleDefinitionRequest)) {
                *result = 11;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::BookmarkLinkOrStyleLocationRequest)) {
                *result = 12;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::SpellingHighlightRefreshRequest)) {
                *result = 13;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::ShowStatusMessageRequest)) {
                *result = 14;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::DocumentSet)) {
                *result = 15;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::MarkSelectionRequest)) {
                *result = 16;
            }
        }
        {
            typedef void (CodeViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeViewEditor::ClearMarkedTextRequest)) {
                *result = 17;
            }
        }
    }
}

const QMetaObject CodeViewEditor::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_CodeViewEditor.data,
      qt_meta_data_CodeViewEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CodeViewEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CodeViewEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CodeViewEditor.stringdata0))
        return static_cast<void*>(const_cast< CodeViewEditor*>(this));
    if (!strcmp(_clname, "ViewEditor"))
        return static_cast< ViewEditor*>(const_cast< CodeViewEditor*>(this));
    if (!strcmp(_clname, "PasteTarget"))
        return static_cast< PasteTarget*>(const_cast< CodeViewEditor*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int CodeViewEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    return _id;
}

// SIGNAL 0
void CodeViewEditor::ZoomFactorChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CodeViewEditor::FocusLost(QWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CodeViewEditor::FocusGained(QWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CodeViewEditor::FilteredCursorMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void CodeViewEditor::PageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void CodeViewEditor::PageUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void CodeViewEditor::FilteredTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void CodeViewEditor::OpenClipEditorRequest(ClipEditorModel::clipEntry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CodeViewEditor::OpenIndexEditorRequest(IndexEditorModel::indexEntry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CodeViewEditor::LinkClicked(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CodeViewEditor::ViewImage(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void CodeViewEditor::GoToLinkedStyleDefinitionRequest(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CodeViewEditor::BookmarkLinkOrStyleLocationRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void CodeViewEditor::SpellingHighlightRefreshRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 13, Q_NULLPTR);
}

// SIGNAL 14
void CodeViewEditor::ShowStatusMessageRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void CodeViewEditor::DocumentSet()
{
    QMetaObject::activate(this, &staticMetaObject, 15, Q_NULLPTR);
}

// SIGNAL 16
void CodeViewEditor::MarkSelectionRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 16, Q_NULLPTR);
}

// SIGNAL 17
void CodeViewEditor::ClearMarkedTextRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
