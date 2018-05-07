/****************************************************************************
** Meta object code from reading C++ file 'BookViewEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ViewEditors/BookViewEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BookViewEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BookViewEditor_t {
    QByteArrayData data[53];
    char stringdata0[723];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookViewEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookViewEditor_t qt_meta_stringdata_BookViewEditor = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BookViewEditor"
QT_MOC_LITERAL(1, 15, 11), // "PageUpdated"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "PageClicked"
QT_MOC_LITERAL(4, 40, 10), // "PageOpened"
QT_MOC_LITERAL(5, 51, 11), // "textChanged"
QT_MOC_LITERAL(6, 63, 20), // "contentsChangedExtra"
QT_MOC_LITERAL(7, 84, 9), // "FocusLost"
QT_MOC_LITERAL(8, 94, 8), // "QWidget*"
QT_MOC_LITERAL(9, 103, 6), // "editor"
QT_MOC_LITERAL(10, 110, 10), // "InsertFile"
QT_MOC_LITERAL(11, 121, 28), // "InsertedFileOpenedExternally"
QT_MOC_LITERAL(12, 150, 8), // "pathname"
QT_MOC_LITERAL(13, 159, 18), // "InsertedFileSaveAs"
QT_MOC_LITERAL(14, 178, 3), // "url"
QT_MOC_LITERAL(15, 182, 20), // "ClipboardSaveRequest"
QT_MOC_LITERAL(16, 203, 23), // "ClipboardRestoreRequest"
QT_MOC_LITERAL(17, 227, 21), // "OpenClipEditorRequest"
QT_MOC_LITERAL(18, 249, 27), // "ClipEditorModel::clipEntry*"
QT_MOC_LITERAL(19, 277, 22), // "OpenIndexEditorRequest"
QT_MOC_LITERAL(20, 300, 29), // "IndexEditorModel::indexEntry*"
QT_MOC_LITERAL(21, 330, 16), // "BVInspectElement"
QT_MOC_LITERAL(22, 347, 17), // "TextChangedFilter"
QT_MOC_LITERAL(23, 365, 4), // "Undo"
QT_MOC_LITERAL(24, 370, 4), // "Redo"
QT_MOC_LITERAL(25, 375, 3), // "cut"
QT_MOC_LITERAL(26, 379, 5), // "paste"
QT_MOC_LITERAL(27, 385, 9), // "selectAll"
QT_MOC_LITERAL(28, 395, 10), // "insertFile"
QT_MOC_LITERAL(29, 406, 9), // "openImage"
QT_MOC_LITERAL(30, 416, 9), // "copyImage"
QT_MOC_LITERAL(31, 426, 8), // "openWith"
QT_MOC_LITERAL(32, 435, 14), // "openWithEditor"
QT_MOC_LITERAL(33, 450, 6), // "saveAs"
QT_MOC_LITERAL(34, 457, 18), // "EmitInspectElement"
QT_MOC_LITERAL(35, 476, 9), // "PasteText"
QT_MOC_LITERAL(36, 486, 4), // "text"
QT_MOC_LITERAL(37, 491, 16), // "PasteClipEntries"
QT_MOC_LITERAL(38, 508, 34), // "QList<ClipEditorModel::clipEn..."
QT_MOC_LITERAL(39, 543, 5), // "clips"
QT_MOC_LITERAL(40, 549, 15), // "EmitPageUpdated"
QT_MOC_LITERAL(41, 565, 6), // "PageUp"
QT_MOC_LITERAL(42, 572, 8), // "PageDown"
QT_MOC_LITERAL(43, 581, 14), // "ClickAtTopLeft"
QT_MOC_LITERAL(44, 596, 15), // "ScrollOneLineUp"
QT_MOC_LITERAL(45, 612, 17), // "ScrollOneLineDown"
QT_MOC_LITERAL(46, 630, 18), // "SetWebPageModified"
QT_MOC_LITERAL(47, 649, 8), // "modified"
QT_MOC_LITERAL(48, 658, 15), // "OpenContextMenu"
QT_MOC_LITERAL(49, 674, 5), // "point"
QT_MOC_LITERAL(50, 680, 22), // "PasteClipEntryFromName"
QT_MOC_LITERAL(51, 703, 4), // "name"
QT_MOC_LITERAL(52, 708, 14) // "SaveClipAction"

    },
    "BookViewEditor\0PageUpdated\0\0PageClicked\0"
    "PageOpened\0textChanged\0contentsChangedExtra\0"
    "FocusLost\0QWidget*\0editor\0InsertFile\0"
    "InsertedFileOpenedExternally\0pathname\0"
    "InsertedFileSaveAs\0url\0ClipboardSaveRequest\0"
    "ClipboardRestoreRequest\0OpenClipEditorRequest\0"
    "ClipEditorModel::clipEntry*\0"
    "OpenIndexEditorRequest\0"
    "IndexEditorModel::indexEntry*\0"
    "BVInspectElement\0TextChangedFilter\0"
    "Undo\0Redo\0cut\0paste\0selectAll\0insertFile\0"
    "openImage\0copyImage\0openWith\0"
    "openWithEditor\0saveAs\0EmitInspectElement\0"
    "PasteText\0text\0PasteClipEntries\0"
    "QList<ClipEditorModel::clipEntry*>\0"
    "clips\0EmitPageUpdated\0PageUp\0PageDown\0"
    "ClickAtTopLeft\0ScrollOneLineUp\0"
    "ScrollOneLineDown\0SetWebPageModified\0"
    "modified\0OpenContextMenu\0point\0"
    "PasteClipEntryFromName\0name\0SaveClipAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookViewEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  214,    2, 0x06 /* Public */,
       3,    0,  215,    2, 0x06 /* Public */,
       4,    0,  216,    2, 0x06 /* Public */,
       5,    0,  217,    2, 0x06 /* Public */,
       6,    0,  218,    2, 0x06 /* Public */,
       7,    1,  219,    2, 0x06 /* Public */,
      10,    0,  222,    2, 0x06 /* Public */,
      11,    1,  223,    2, 0x06 /* Public */,
      13,    1,  226,    2, 0x06 /* Public */,
      15,    0,  229,    2, 0x06 /* Public */,
      16,    0,  230,    2, 0x06 /* Public */,
      17,    1,  231,    2, 0x06 /* Public */,
      19,    1,  234,    2, 0x06 /* Public */,
      21,    0,  237,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    0,  238,    2, 0x0a /* Public */,
      23,    0,  239,    2, 0x0a /* Public */,
      24,    0,  240,    2, 0x0a /* Public */,
      25,    0,  241,    2, 0x0a /* Public */,
      26,    0,  242,    2, 0x0a /* Public */,
      27,    0,  243,    2, 0x0a /* Public */,
      28,    0,  244,    2, 0x0a /* Public */,
      29,    0,  245,    2, 0x0a /* Public */,
      30,    0,  246,    2, 0x0a /* Public */,
      31,    0,  247,    2, 0x0a /* Public */,
      32,    0,  248,    2, 0x0a /* Public */,
      33,    0,  249,    2, 0x0a /* Public */,
      34,    0,  250,    2, 0x0a /* Public */,
      35,    1,  251,    2, 0x0a /* Public */,
      37,    1,  254,    2, 0x0a /* Public */,
      40,    0,  257,    2, 0x08 /* Private */,
      41,    0,  258,    2, 0x08 /* Private */,
      42,    0,  259,    2, 0x08 /* Private */,
      43,    0,  260,    2, 0x08 /* Private */,
      44,    0,  261,    2, 0x08 /* Private */,
      45,    0,  262,    2, 0x08 /* Private */,
      46,    1,  263,    2, 0x08 /* Private */,
      46,    0,  266,    2, 0x28 /* Private | MethodCloned */,
      48,    1,  267,    2, 0x08 /* Private */,
      50,    1,  270,    2, 0x08 /* Private */,
      52,    0,  273,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QUrl,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Bool, 0x80000000 | 38,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   49,
    QMetaType::Void, QMetaType::QString,   51,
    QMetaType::Void,

       0        // eod
};

void BookViewEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookViewEditor *_t = static_cast<BookViewEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PageUpdated(); break;
        case 1: _t->PageClicked(); break;
        case 2: _t->PageOpened(); break;
        case 3: _t->textChanged(); break;
        case 4: _t->contentsChangedExtra(); break;
        case 5: _t->FocusLost((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 6: _t->InsertFile(); break;
        case 7: _t->InsertedFileOpenedExternally((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->InsertedFileSaveAs((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 9: _t->ClipboardSaveRequest(); break;
        case 10: _t->ClipboardRestoreRequest(); break;
        case 11: _t->OpenClipEditorRequest((*reinterpret_cast< ClipEditorModel::clipEntry*(*)>(_a[1]))); break;
        case 12: _t->OpenIndexEditorRequest((*reinterpret_cast< IndexEditorModel::indexEntry*(*)>(_a[1]))); break;
        case 13: _t->BVInspectElement(); break;
        case 14: _t->TextChangedFilter(); break;
        case 15: _t->Undo(); break;
        case 16: _t->Redo(); break;
        case 17: _t->cut(); break;
        case 18: _t->paste(); break;
        case 19: _t->selectAll(); break;
        case 20: _t->insertFile(); break;
        case 21: _t->openImage(); break;
        case 22: _t->copyImage(); break;
        case 23: _t->openWith(); break;
        case 24: _t->openWithEditor(); break;
        case 25: _t->saveAs(); break;
        case 26: _t->EmitInspectElement(); break;
        case 27: _t->PasteText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: { bool _r = _t->PasteClipEntries((*reinterpret_cast< const QList<ClipEditorModel::clipEntry*>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: _t->EmitPageUpdated(); break;
        case 30: _t->PageUp(); break;
        case 31: _t->PageDown(); break;
        case 32: _t->ClickAtTopLeft(); break;
        case 33: _t->ScrollOneLineUp(); break;
        case 34: _t->ScrollOneLineDown(); break;
        case 35: _t->SetWebPageModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->SetWebPageModified(); break;
        case 37: _t->OpenContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 38: _t->PasteClipEntryFromName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: _t->SaveClipAction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
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
            typedef void (BookViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewEditor::PageUpdated)) {
                *result = 0;
            }
        }
        {
            typedef void (BookViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewEditor::PageClicked)) {
                *result = 1;
            }
        }
        {
            typedef void (BookViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewEditor::PageOpened)) {
                *result = 2;
            }
        }
        {
            typedef void (BookViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewEditor::textChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (BookViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewEditor::contentsChangedExtra)) {
                *result = 4;
            }
        }
        {
            typedef void (BookViewEditor::*_t)(QWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewEditor::FocusLost)) {
                *result = 5;
            }
        }
        {
            typedef void (BookViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewEditor::InsertFile)) {
                *result = 6;
            }
        }
        {
            typedef void (BookViewEditor::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewEditor::InsertedFileOpenedExternally)) {
                *result = 7;
            }
        }
        {
            typedef void (BookViewEditor::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewEditor::InsertedFileSaveAs)) {
                *result = 8;
            }
        }
        {
            typedef void (BookViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewEditor::ClipboardSaveRequest)) {
                *result = 9;
            }
        }
        {
            typedef void (BookViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewEditor::ClipboardRestoreRequest)) {
                *result = 10;
            }
        }
        {
            typedef void (BookViewEditor::*_t)(ClipEditorModel::clipEntry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewEditor::OpenClipEditorRequest)) {
                *result = 11;
            }
        }
        {
            typedef void (BookViewEditor::*_t)(IndexEditorModel::indexEntry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewEditor::OpenIndexEditorRequest)) {
                *result = 12;
            }
        }
        {
            typedef void (BookViewEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewEditor::BVInspectElement)) {
                *result = 13;
            }
        }
    }
}

const QMetaObject BookViewEditor::staticMetaObject = {
    { &BookViewPreview::staticMetaObject, qt_meta_stringdata_BookViewEditor.data,
      qt_meta_data_BookViewEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BookViewEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookViewEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BookViewEditor.stringdata0))
        return static_cast<void*>(const_cast< BookViewEditor*>(this));
    if (!strcmp(_clname, "PasteTarget"))
        return static_cast< PasteTarget*>(const_cast< BookViewEditor*>(this));
    return BookViewPreview::qt_metacast(_clname);
}

int BookViewEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BookViewPreview::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void BookViewEditor::PageUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void BookViewEditor::PageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void BookViewEditor::PageOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void BookViewEditor::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void BookViewEditor::contentsChangedExtra()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void BookViewEditor::FocusLost(QWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void BookViewEditor::InsertFile()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void BookViewEditor::InsertedFileOpenedExternally(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void BookViewEditor::InsertedFileSaveAs(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void BookViewEditor::ClipboardSaveRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void BookViewEditor::ClipboardRestoreRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void BookViewEditor::OpenClipEditorRequest(ClipEditorModel::clipEntry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void BookViewEditor::OpenIndexEditorRequest(IndexEditorModel::indexEntry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void BookViewEditor::BVInspectElement()
{
    QMetaObject::activate(this, &staticMetaObject, 13, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
