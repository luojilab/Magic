/****************************************************************************
** Meta object code from reading C++ file 'ClipEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/ClipEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClipEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClipEditor_t {
    QByteArrayData data[45];
    char stringdata0[514];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClipEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClipEditor_t qt_meta_stringdata_ClipEditor = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ClipEditor"
QT_MOC_LITERAL(1, 11, 24), // "PasteSelectedClipRequest"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 34), // "QList<ClipEditorModel::clipEn..."
QT_MOC_LITERAL(4, 72, 12), // "clip_entries"
QT_MOC_LITERAL(5, 85, 24), // "ShowStatusMessageRequest"
QT_MOC_LITERAL(6, 110, 7), // "message"
QT_MOC_LITERAL(7, 118, 12), // "ClipsUpdated"
QT_MOC_LITERAL(8, 131, 8), // "AddEntry"
QT_MOC_LITERAL(9, 140, 14), // "QStandardItem*"
QT_MOC_LITERAL(10, 155, 8), // "is_group"
QT_MOC_LITERAL(11, 164, 27), // "ClipEditorModel::clipEntry*"
QT_MOC_LITERAL(12, 192, 10), // "clip_entry"
QT_MOC_LITERAL(13, 203, 12), // "insert_after"
QT_MOC_LITERAL(14, 216, 6), // "reject"
QT_MOC_LITERAL(15, 223, 9), // "showEvent"
QT_MOC_LITERAL(16, 233, 11), // "QShowEvent*"
QT_MOC_LITERAL(17, 245, 5), // "event"
QT_MOC_LITERAL(18, 251, 8), // "AddGroup"
QT_MOC_LITERAL(19, 260, 4), // "Edit"
QT_MOC_LITERAL(20, 265, 3), // "Cut"
QT_MOC_LITERAL(21, 269, 4), // "Copy"
QT_MOC_LITERAL(22, 274, 5), // "Paste"
QT_MOC_LITERAL(23, 280, 6), // "Delete"
QT_MOC_LITERAL(24, 287, 6), // "Import"
QT_MOC_LITERAL(25, 294, 6), // "Reload"
QT_MOC_LITERAL(26, 301, 6), // "Export"
QT_MOC_LITERAL(27, 308, 9), // "ExportAll"
QT_MOC_LITERAL(28, 318, 11), // "CollapseAll"
QT_MOC_LITERAL(29, 330, 9), // "ExpandAll"
QT_MOC_LITERAL(30, 340, 8), // "AutoFill"
QT_MOC_LITERAL(31, 349, 5), // "Apply"
QT_MOC_LITERAL(32, 355, 4), // "Save"
QT_MOC_LITERAL(33, 360, 6), // "MoveUp"
QT_MOC_LITERAL(34, 367, 8), // "MoveDown"
QT_MOC_LITERAL(35, 376, 8), // "MoveLeft"
QT_MOC_LITERAL(36, 385, 9), // "MoveRight"
QT_MOC_LITERAL(37, 395, 17), // "PasteIntoDocument"
QT_MOC_LITERAL(38, 413, 25), // "FilterEditTextChangedSlot"
QT_MOC_LITERAL(39, 439, 4), // "text"
QT_MOC_LITERAL(40, 444, 15), // "OpenContextMenu"
QT_MOC_LITERAL(41, 460, 5), // "point"
QT_MOC_LITERAL(42, 466, 24), // "SettingsFileModelUpdated"
QT_MOC_LITERAL(43, 491, 16), // "ModelItemDropped"
QT_MOC_LITERAL(44, 508, 5) // "index"

    },
    "ClipEditor\0PasteSelectedClipRequest\0"
    "\0QList<ClipEditorModel::clipEntry*>\0"
    "clip_entries\0ShowStatusMessageRequest\0"
    "message\0ClipsUpdated\0AddEntry\0"
    "QStandardItem*\0is_group\0"
    "ClipEditorModel::clipEntry*\0clip_entry\0"
    "insert_after\0reject\0showEvent\0QShowEvent*\0"
    "event\0AddGroup\0Edit\0Cut\0Copy\0Paste\0"
    "Delete\0Import\0Reload\0Export\0ExportAll\0"
    "CollapseAll\0ExpandAll\0AutoFill\0Apply\0"
    "Save\0MoveUp\0MoveDown\0MoveLeft\0MoveRight\0"
    "PasteIntoDocument\0FilterEditTextChangedSlot\0"
    "text\0OpenContextMenu\0point\0"
    "SettingsFileModelUpdated\0ModelItemDropped\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClipEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  179,    2, 0x06 /* Public */,
       5,    1,  182,    2, 0x06 /* Public */,
       7,    0,  185,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    3,  186,    2, 0x0a /* Public */,
       8,    2,  193,    2, 0x2a /* Public | MethodCloned */,
       8,    1,  198,    2, 0x2a /* Public | MethodCloned */,
       8,    0,  201,    2, 0x2a /* Public | MethodCloned */,
      14,    0,  202,    2, 0x09 /* Protected */,
      15,    1,  203,    2, 0x09 /* Protected */,
      18,    0,  206,    2, 0x08 /* Private */,
      19,    0,  207,    2, 0x08 /* Private */,
      20,    0,  208,    2, 0x08 /* Private */,
      21,    0,  209,    2, 0x08 /* Private */,
      22,    0,  210,    2, 0x08 /* Private */,
      23,    0,  211,    2, 0x08 /* Private */,
      24,    0,  212,    2, 0x08 /* Private */,
      25,    0,  213,    2, 0x08 /* Private */,
      26,    0,  214,    2, 0x08 /* Private */,
      27,    0,  215,    2, 0x08 /* Private */,
      28,    0,  216,    2, 0x08 /* Private */,
      29,    0,  217,    2, 0x08 /* Private */,
      30,    0,  218,    2, 0x08 /* Private */,
      31,    0,  219,    2, 0x08 /* Private */,
      32,    0,  220,    2, 0x08 /* Private */,
      33,    0,  221,    2, 0x08 /* Private */,
      34,    0,  222,    2, 0x08 /* Private */,
      35,    0,  223,    2, 0x08 /* Private */,
      36,    0,  224,    2, 0x08 /* Private */,
      37,    0,  225,    2, 0x08 /* Private */,
      38,    1,  226,    2, 0x08 /* Private */,
      40,    1,  229,    2, 0x08 /* Private */,
      42,    0,  232,    2, 0x08 /* Private */,
      43,    1,  233,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 9, QMetaType::Bool, 0x80000000 | 11, QMetaType::Bool,   10,   12,   13,
    0x80000000 | 9, QMetaType::Bool, 0x80000000 | 11,   10,   12,
    0x80000000 | 9, QMetaType::Bool,   10,
    0x80000000 | 9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    0x80000000 | 9,
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
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::QPoint,   41,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   44,

       0        // eod
};

void ClipEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClipEditor *_t = static_cast<ClipEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PasteSelectedClipRequest((*reinterpret_cast< QList<ClipEditorModel::clipEntry*>(*)>(_a[1]))); break;
        case 1: _t->ShowStatusMessageRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->ClipsUpdated(); break;
        case 3: { QStandardItem* _r = _t->AddEntry((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< ClipEditorModel::clipEntry*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 4: { QStandardItem* _r = _t->AddEntry((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< ClipEditorModel::clipEntry*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 5: { QStandardItem* _r = _t->AddEntry((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 6: { QStandardItem* _r = _t->AddEntry();
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 7: _t->reject(); break;
        case 8: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 9: { QStandardItem* _r = _t->AddGroup();
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 10: _t->Edit(); break;
        case 11: _t->Cut(); break;
        case 12: { bool _r = _t->Copy();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->Paste(); break;
        case 14: _t->Delete(); break;
        case 15: _t->Import(); break;
        case 16: _t->Reload(); break;
        case 17: _t->Export(); break;
        case 18: _t->ExportAll(); break;
        case 19: _t->CollapseAll(); break;
        case 20: _t->ExpandAll(); break;
        case 21: _t->AutoFill(); break;
        case 22: _t->Apply(); break;
        case 23: { bool _r = _t->Save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: _t->MoveUp(); break;
        case 25: _t->MoveDown(); break;
        case 26: _t->MoveLeft(); break;
        case 27: _t->MoveRight(); break;
        case 28: _t->PasteIntoDocument(); break;
        case 29: _t->FilterEditTextChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->OpenContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 31: _t->SettingsFileModelUpdated(); break;
        case 32: _t->ModelItemDropped((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClipEditor::*_t)(QList<ClipEditorModel::clipEntry*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClipEditor::PasteSelectedClipRequest)) {
                *result = 0;
            }
        }
        {
            typedef void (ClipEditor::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClipEditor::ShowStatusMessageRequest)) {
                *result = 1;
            }
        }
        {
            typedef void (ClipEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClipEditor::ClipsUpdated)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ClipEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ClipEditor.data,
      qt_meta_data_ClipEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClipEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClipEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClipEditor.stringdata0))
        return static_cast<void*>(const_cast< ClipEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int ClipEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void ClipEditor::PasteSelectedClipRequest(QList<ClipEditorModel::clipEntry*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClipEditor::ShowStatusMessageRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClipEditor::ClipsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
