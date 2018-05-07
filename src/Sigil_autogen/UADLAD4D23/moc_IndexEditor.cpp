/****************************************************************************
** Meta object code from reading C++ file 'IndexEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/IndexEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IndexEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IndexEditor_t {
    QByteArrayData data[30];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IndexEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IndexEditor_t qt_meta_stringdata_IndexEditor = {
    {
QT_MOC_LITERAL(0, 0, 11), // "IndexEditor"
QT_MOC_LITERAL(1, 12, 24), // "ShowStatusMessageRequest"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "message"
QT_MOC_LITERAL(4, 46, 8), // "AddEntry"
QT_MOC_LITERAL(5, 55, 14), // "QStandardItem*"
QT_MOC_LITERAL(6, 70, 8), // "is_group"
QT_MOC_LITERAL(7, 79, 29), // "IndexEditorModel::indexEntry*"
QT_MOC_LITERAL(8, 109, 11), // "index_entry"
QT_MOC_LITERAL(9, 121, 12), // "insert_after"
QT_MOC_LITERAL(10, 134, 6), // "reject"
QT_MOC_LITERAL(11, 141, 9), // "showEvent"
QT_MOC_LITERAL(12, 151, 11), // "QShowEvent*"
QT_MOC_LITERAL(13, 163, 5), // "event"
QT_MOC_LITERAL(14, 169, 4), // "Edit"
QT_MOC_LITERAL(15, 174, 3), // "Cut"
QT_MOC_LITERAL(16, 178, 4), // "Copy"
QT_MOC_LITERAL(17, 183, 5), // "Paste"
QT_MOC_LITERAL(18, 189, 6), // "Delete"
QT_MOC_LITERAL(19, 196, 8), // "AutoFill"
QT_MOC_LITERAL(20, 205, 4), // "Open"
QT_MOC_LITERAL(21, 210, 6), // "Reload"
QT_MOC_LITERAL(22, 217, 6), // "SaveAs"
QT_MOC_LITERAL(23, 224, 9), // "SelectAll"
QT_MOC_LITERAL(24, 234, 4), // "Save"
QT_MOC_LITERAL(25, 239, 25), // "FilterEditTextChangedSlot"
QT_MOC_LITERAL(26, 265, 4), // "text"
QT_MOC_LITERAL(27, 270, 15), // "OpenContextMenu"
QT_MOC_LITERAL(28, 286, 5), // "point"
QT_MOC_LITERAL(29, 292, 24) // "SettingsFileModelUpdated"

    },
    "IndexEditor\0ShowStatusMessageRequest\0"
    "\0message\0AddEntry\0QStandardItem*\0"
    "is_group\0IndexEditorModel::indexEntry*\0"
    "index_entry\0insert_after\0reject\0"
    "showEvent\0QShowEvent*\0event\0Edit\0Cut\0"
    "Copy\0Paste\0Delete\0AutoFill\0Open\0Reload\0"
    "SaveAs\0SelectAll\0Save\0FilterEditTextChangedSlot\0"
    "text\0OpenContextMenu\0point\0"
    "SettingsFileModelUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IndexEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,  122,    2, 0x0a /* Public */,
       4,    2,  129,    2, 0x2a /* Public | MethodCloned */,
       4,    1,  134,    2, 0x2a /* Public | MethodCloned */,
       4,    0,  137,    2, 0x2a /* Public | MethodCloned */,
      10,    0,  138,    2, 0x09 /* Protected */,
      11,    1,  139,    2, 0x09 /* Protected */,
      14,    0,  142,    2, 0x08 /* Private */,
      15,    0,  143,    2, 0x08 /* Private */,
      16,    0,  144,    2, 0x08 /* Private */,
      17,    0,  145,    2, 0x08 /* Private */,
      18,    0,  146,    2, 0x08 /* Private */,
      19,    0,  147,    2, 0x08 /* Private */,
      20,    0,  148,    2, 0x08 /* Private */,
      21,    0,  149,    2, 0x08 /* Private */,
      22,    0,  150,    2, 0x08 /* Private */,
      23,    0,  151,    2, 0x08 /* Private */,
      24,    0,  152,    2, 0x08 /* Private */,
      25,    1,  153,    2, 0x08 /* Private */,
      27,    1,  156,    2, 0x08 /* Private */,
      29,    0,  159,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    0x80000000 | 5, QMetaType::Bool, 0x80000000 | 7, QMetaType::Bool,    6,    8,    9,
    0x80000000 | 5, QMetaType::Bool, 0x80000000 | 7,    6,    8,
    0x80000000 | 5, QMetaType::Bool,    6,
    0x80000000 | 5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
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
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QPoint,   28,
    QMetaType::Void,

       0        // eod
};

void IndexEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IndexEditor *_t = static_cast<IndexEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowStatusMessageRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { QStandardItem* _r = _t->AddEntry((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< IndexEditorModel::indexEntry*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 2: { QStandardItem* _r = _t->AddEntry((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< IndexEditorModel::indexEntry*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 3: { QStandardItem* _r = _t->AddEntry((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 4: { QStandardItem* _r = _t->AddEntry();
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 5: _t->reject(); break;
        case 6: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 7: _t->Edit(); break;
        case 8: _t->Cut(); break;
        case 9: { bool _r = _t->Copy();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->Paste(); break;
        case 11: _t->Delete(); break;
        case 12: _t->AutoFill(); break;
        case 13: _t->Open(); break;
        case 14: _t->Reload(); break;
        case 15: _t->SaveAs(); break;
        case 16: _t->SelectAll(); break;
        case 17: { bool _r = _t->Save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->FilterEditTextChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->OpenContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 20: _t->SettingsFileModelUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IndexEditor::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IndexEditor::ShowStatusMessageRequest)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject IndexEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_IndexEditor.data,
      qt_meta_data_IndexEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IndexEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IndexEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IndexEditor.stringdata0))
        return static_cast<void*>(const_cast< IndexEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int IndexEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void IndexEditor::ShowStatusMessageRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
