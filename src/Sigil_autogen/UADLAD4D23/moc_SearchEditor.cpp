/****************************************************************************
** Meta object code from reading C++ file 'SearchEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/SearchEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SearchEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SearchEditor_t {
    QByteArrayData data[54];
    char stringdata0[718];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchEditor_t qt_meta_stringdata_SearchEditor = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SearchEditor"
QT_MOC_LITERAL(1, 13, 25), // "LoadSelectedSearchRequest"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 31), // "SearchEditorModel::searchEntry*"
QT_MOC_LITERAL(4, 72, 12), // "search_entry"
QT_MOC_LITERAL(5, 85, 25), // "FindSelectedSearchRequest"
QT_MOC_LITERAL(6, 111, 38), // "QList<SearchEditorModel::sear..."
QT_MOC_LITERAL(7, 150, 14), // "search_entries"
QT_MOC_LITERAL(8, 165, 35), // "ReplaceCurrentSelectedSearchR..."
QT_MOC_LITERAL(9, 201, 28), // "ReplaceSelectedSearchRequest"
QT_MOC_LITERAL(10, 230, 29), // "CountAllSelectedSearchRequest"
QT_MOC_LITERAL(11, 260, 31), // "ReplaceAllSelectedSearchRequest"
QT_MOC_LITERAL(12, 292, 24), // "ShowStatusMessageRequest"
QT_MOC_LITERAL(13, 317, 7), // "message"
QT_MOC_LITERAL(14, 325, 8), // "AddEntry"
QT_MOC_LITERAL(15, 334, 14), // "QStandardItem*"
QT_MOC_LITERAL(16, 349, 8), // "is_group"
QT_MOC_LITERAL(17, 358, 12), // "insert_after"
QT_MOC_LITERAL(18, 371, 11), // "ShowMessage"
QT_MOC_LITERAL(19, 383, 6), // "reject"
QT_MOC_LITERAL(20, 390, 9), // "showEvent"
QT_MOC_LITERAL(21, 400, 11), // "QShowEvent*"
QT_MOC_LITERAL(22, 412, 5), // "event"
QT_MOC_LITERAL(23, 418, 8), // "AddGroup"
QT_MOC_LITERAL(24, 427, 4), // "Edit"
QT_MOC_LITERAL(25, 432, 3), // "Cut"
QT_MOC_LITERAL(26, 436, 4), // "Copy"
QT_MOC_LITERAL(27, 441, 5), // "Paste"
QT_MOC_LITERAL(28, 447, 6), // "Delete"
QT_MOC_LITERAL(29, 454, 6), // "Import"
QT_MOC_LITERAL(30, 461, 6), // "Reload"
QT_MOC_LITERAL(31, 468, 6), // "Export"
QT_MOC_LITERAL(32, 475, 9), // "ExportAll"
QT_MOC_LITERAL(33, 485, 11), // "CollapseAll"
QT_MOC_LITERAL(34, 497, 9), // "ExpandAll"
QT_MOC_LITERAL(35, 507, 5), // "Apply"
QT_MOC_LITERAL(36, 513, 4), // "Save"
QT_MOC_LITERAL(37, 518, 6), // "MoveUp"
QT_MOC_LITERAL(38, 525, 8), // "MoveDown"
QT_MOC_LITERAL(39, 534, 8), // "MoveLeft"
QT_MOC_LITERAL(40, 543, 9), // "MoveRight"
QT_MOC_LITERAL(41, 553, 15), // "LoadFindReplace"
QT_MOC_LITERAL(42, 569, 4), // "Find"
QT_MOC_LITERAL(43, 574, 14), // "ReplaceCurrent"
QT_MOC_LITERAL(44, 589, 7), // "Replace"
QT_MOC_LITERAL(45, 597, 8), // "CountAll"
QT_MOC_LITERAL(46, 606, 10), // "ReplaceAll"
QT_MOC_LITERAL(47, 617, 25), // "FilterEditTextChangedSlot"
QT_MOC_LITERAL(48, 643, 4), // "text"
QT_MOC_LITERAL(49, 648, 15), // "OpenContextMenu"
QT_MOC_LITERAL(50, 664, 5), // "point"
QT_MOC_LITERAL(51, 670, 24), // "SettingsFileModelUpdated"
QT_MOC_LITERAL(52, 695, 16), // "ModelItemDropped"
QT_MOC_LITERAL(53, 712, 5) // "index"

    },
    "SearchEditor\0LoadSelectedSearchRequest\0"
    "\0SearchEditorModel::searchEntry*\0"
    "search_entry\0FindSelectedSearchRequest\0"
    "QList<SearchEditorModel::searchEntry*>\0"
    "search_entries\0ReplaceCurrentSelectedSearchRequest\0"
    "ReplaceSelectedSearchRequest\0"
    "CountAllSelectedSearchRequest\0"
    "ReplaceAllSelectedSearchRequest\0"
    "ShowStatusMessageRequest\0message\0"
    "AddEntry\0QStandardItem*\0is_group\0"
    "insert_after\0ShowMessage\0reject\0"
    "showEvent\0QShowEvent*\0event\0AddGroup\0"
    "Edit\0Cut\0Copy\0Paste\0Delete\0Import\0"
    "Reload\0Export\0ExportAll\0CollapseAll\0"
    "ExpandAll\0Apply\0Save\0MoveUp\0MoveDown\0"
    "MoveLeft\0MoveRight\0LoadFindReplace\0"
    "Find\0ReplaceCurrent\0Replace\0CountAll\0"
    "ReplaceAll\0FilterEditTextChangedSlot\0"
    "text\0OpenContextMenu\0point\0"
    "SettingsFileModelUpdated\0ModelItemDropped\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  224,    2, 0x06 /* Public */,
       5,    1,  227,    2, 0x06 /* Public */,
       8,    1,  230,    2, 0x06 /* Public */,
       9,    1,  233,    2, 0x06 /* Public */,
      10,    1,  236,    2, 0x06 /* Public */,
      11,    1,  239,    2, 0x06 /* Public */,
      12,    1,  242,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    3,  245,    2, 0x0a /* Public */,
      14,    2,  252,    2, 0x2a /* Public | MethodCloned */,
      14,    1,  257,    2, 0x2a /* Public | MethodCloned */,
      14,    0,  260,    2, 0x2a /* Public | MethodCloned */,
      18,    1,  261,    2, 0x0a /* Public */,
      19,    0,  264,    2, 0x09 /* Protected */,
      20,    1,  265,    2, 0x09 /* Protected */,
      23,    0,  268,    2, 0x08 /* Private */,
      24,    0,  269,    2, 0x08 /* Private */,
      25,    0,  270,    2, 0x08 /* Private */,
      26,    0,  271,    2, 0x08 /* Private */,
      27,    0,  272,    2, 0x08 /* Private */,
      28,    0,  273,    2, 0x08 /* Private */,
      29,    0,  274,    2, 0x08 /* Private */,
      30,    0,  275,    2, 0x08 /* Private */,
      31,    0,  276,    2, 0x08 /* Private */,
      32,    0,  277,    2, 0x08 /* Private */,
      33,    0,  278,    2, 0x08 /* Private */,
      34,    0,  279,    2, 0x08 /* Private */,
      35,    0,  280,    2, 0x08 /* Private */,
      36,    0,  281,    2, 0x08 /* Private */,
      37,    0,  282,    2, 0x08 /* Private */,
      38,    0,  283,    2, 0x08 /* Private */,
      39,    0,  284,    2, 0x08 /* Private */,
      40,    0,  285,    2, 0x08 /* Private */,
      41,    0,  286,    2, 0x08 /* Private */,
      42,    0,  287,    2, 0x08 /* Private */,
      43,    0,  288,    2, 0x08 /* Private */,
      44,    0,  289,    2, 0x08 /* Private */,
      45,    0,  290,    2, 0x08 /* Private */,
      46,    0,  291,    2, 0x08 /* Private */,
      47,    1,  292,    2, 0x08 /* Private */,
      49,    1,  295,    2, 0x08 /* Private */,
      51,    0,  298,    2, 0x08 /* Private */,
      52,    1,  299,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,   13,

 // slots: parameters
    0x80000000 | 15, QMetaType::Bool, 0x80000000 | 3, QMetaType::Bool,   16,    4,   17,
    0x80000000 | 15, QMetaType::Bool, 0x80000000 | 3,   16,    4,
    0x80000000 | 15, QMetaType::Bool,   16,
    0x80000000 | 15,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    0x80000000 | 15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
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
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void, QMetaType::QPoint,   50,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   53,

       0        // eod
};

void SearchEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchEditor *_t = static_cast<SearchEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LoadSelectedSearchRequest((*reinterpret_cast< SearchEditorModel::searchEntry*(*)>(_a[1]))); break;
        case 1: _t->FindSelectedSearchRequest((*reinterpret_cast< QList<SearchEditorModel::searchEntry*>(*)>(_a[1]))); break;
        case 2: _t->ReplaceCurrentSelectedSearchRequest((*reinterpret_cast< QList<SearchEditorModel::searchEntry*>(*)>(_a[1]))); break;
        case 3: _t->ReplaceSelectedSearchRequest((*reinterpret_cast< QList<SearchEditorModel::searchEntry*>(*)>(_a[1]))); break;
        case 4: _t->CountAllSelectedSearchRequest((*reinterpret_cast< QList<SearchEditorModel::searchEntry*>(*)>(_a[1]))); break;
        case 5: _t->ReplaceAllSelectedSearchRequest((*reinterpret_cast< QList<SearchEditorModel::searchEntry*>(*)>(_a[1]))); break;
        case 6: _t->ShowStatusMessageRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: { QStandardItem* _r = _t->AddEntry((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< SearchEditorModel::searchEntry*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 8: { QStandardItem* _r = _t->AddEntry((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< SearchEditorModel::searchEntry*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 9: { QStandardItem* _r = _t->AddEntry((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 10: { QStandardItem* _r = _t->AddEntry();
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 11: _t->ShowMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->reject(); break;
        case 13: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 14: { QStandardItem* _r = _t->AddGroup();
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 15: _t->Edit(); break;
        case 16: _t->Cut(); break;
        case 17: { bool _r = _t->Copy();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->Paste(); break;
        case 19: _t->Delete(); break;
        case 20: _t->Import(); break;
        case 21: _t->Reload(); break;
        case 22: _t->Export(); break;
        case 23: _t->ExportAll(); break;
        case 24: _t->CollapseAll(); break;
        case 25: _t->ExpandAll(); break;
        case 26: _t->Apply(); break;
        case 27: { bool _r = _t->Save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: _t->MoveUp(); break;
        case 29: _t->MoveDown(); break;
        case 30: _t->MoveLeft(); break;
        case 31: _t->MoveRight(); break;
        case 32: _t->LoadFindReplace(); break;
        case 33: _t->Find(); break;
        case 34: _t->ReplaceCurrent(); break;
        case 35: _t->Replace(); break;
        case 36: _t->CountAll(); break;
        case 37: _t->ReplaceAll(); break;
        case 38: _t->FilterEditTextChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: _t->OpenContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 40: _t->SettingsFileModelUpdated(); break;
        case 41: _t->ModelItemDropped((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SearchEditor::*_t)(SearchEditorModel::searchEntry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEditor::LoadSelectedSearchRequest)) {
                *result = 0;
            }
        }
        {
            typedef void (SearchEditor::*_t)(QList<SearchEditorModel::searchEntry*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEditor::FindSelectedSearchRequest)) {
                *result = 1;
            }
        }
        {
            typedef void (SearchEditor::*_t)(QList<SearchEditorModel::searchEntry*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEditor::ReplaceCurrentSelectedSearchRequest)) {
                *result = 2;
            }
        }
        {
            typedef void (SearchEditor::*_t)(QList<SearchEditorModel::searchEntry*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEditor::ReplaceSelectedSearchRequest)) {
                *result = 3;
            }
        }
        {
            typedef void (SearchEditor::*_t)(QList<SearchEditorModel::searchEntry*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEditor::CountAllSelectedSearchRequest)) {
                *result = 4;
            }
        }
        {
            typedef void (SearchEditor::*_t)(QList<SearchEditorModel::searchEntry*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEditor::ReplaceAllSelectedSearchRequest)) {
                *result = 5;
            }
        }
        {
            typedef void (SearchEditor::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEditor::ShowStatusMessageRequest)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject SearchEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SearchEditor.data,
      qt_meta_data_SearchEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SearchEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SearchEditor.stringdata0))
        return static_cast<void*>(const_cast< SearchEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int SearchEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void SearchEditor::LoadSelectedSearchRequest(SearchEditorModel::searchEntry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SearchEditor::FindSelectedSearchRequest(QList<SearchEditorModel::searchEntry*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SearchEditor::ReplaceCurrentSelectedSearchRequest(QList<SearchEditorModel::searchEntry*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SearchEditor::ReplaceSelectedSearchRequest(QList<SearchEditorModel::searchEntry*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SearchEditor::CountAllSelectedSearchRequest(QList<SearchEditorModel::searchEntry*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SearchEditor::ReplaceAllSelectedSearchRequest(QList<SearchEditorModel::searchEntry*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SearchEditor::ShowStatusMessageRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
