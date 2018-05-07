/****************************************************************************
** Meta object code from reading C++ file 'EditTOC.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/EditTOC.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditTOC.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EditTOC_t {
    QByteArrayData data[16];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditTOC_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditTOC_t qt_meta_stringdata_EditTOC = {
    {
QT_MOC_LITERAL(0, 0, 7), // "EditTOC"
QT_MOC_LITERAL(1, 8, 4), // "Save"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 6), // "Rename"
QT_MOC_LITERAL(4, 21, 11), // "CollapseAll"
QT_MOC_LITERAL(5, 33, 9), // "ExpandAll"
QT_MOC_LITERAL(6, 43, 13), // "AddEntryAbove"
QT_MOC_LITERAL(7, 57, 13), // "AddEntryBelow"
QT_MOC_LITERAL(8, 71, 11), // "DeleteEntry"
QT_MOC_LITERAL(9, 83, 8), // "MoveLeft"
QT_MOC_LITERAL(10, 92, 9), // "MoveRight"
QT_MOC_LITERAL(11, 102, 6), // "MoveUp"
QT_MOC_LITERAL(12, 109, 8), // "MoveDown"
QT_MOC_LITERAL(13, 118, 12), // "SelectTarget"
QT_MOC_LITERAL(14, 131, 15), // "OpenContextMenu"
QT_MOC_LITERAL(15, 147, 5) // "point"

    },
    "EditTOC\0Save\0\0Rename\0CollapseAll\0"
    "ExpandAll\0AddEntryAbove\0AddEntryBelow\0"
    "DeleteEntry\0MoveLeft\0MoveRight\0MoveUp\0"
    "MoveDown\0SelectTarget\0OpenContextMenu\0"
    "point"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditTOC[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    1,   91,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::QPoint,   15,

       0        // eod
};

void EditTOC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EditTOC *_t = static_cast<EditTOC *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Save(); break;
        case 1: _t->Rename(); break;
        case 2: _t->CollapseAll(); break;
        case 3: _t->ExpandAll(); break;
        case 4: _t->AddEntryAbove(); break;
        case 5: _t->AddEntryBelow(); break;
        case 6: _t->DeleteEntry(); break;
        case 7: _t->MoveLeft(); break;
        case 8: _t->MoveRight(); break;
        case 9: _t->MoveUp(); break;
        case 10: _t->MoveDown(); break;
        case 11: _t->SelectTarget(); break;
        case 12: _t->OpenContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject EditTOC::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditTOC.data,
      qt_meta_data_EditTOC,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EditTOC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditTOC::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EditTOC.stringdata0))
        return static_cast<void*>(const_cast< EditTOC*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditTOC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
