/****************************************************************************
** Meta object code from reading C++ file 'HeadingSelector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/HeadingSelector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HeadingSelector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HeadingSelector_t {
    QByteArrayData data[15];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HeadingSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HeadingSelector_t qt_meta_stringdata_HeadingSelector = {
    {
QT_MOC_LITERAL(0, 0, 15), // "HeadingSelector"
QT_MOC_LITERAL(1, 16, 20), // "DecreaseHeadingLevel"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 20), // "IncreaseHeadingLevel"
QT_MOC_LITERAL(4, 59, 15), // "OpenContextMenu"
QT_MOC_LITERAL(5, 75, 5), // "point"
QT_MOC_LITERAL(6, 81, 6), // "Rename"
QT_MOC_LITERAL(7, 88, 15), // "ModelItemFilter"
QT_MOC_LITERAL(8, 104, 14), // "QStandardItem*"
QT_MOC_LITERAL(9, 119, 4), // "item"
QT_MOC_LITERAL(10, 124, 17), // "ChangeDisplayType"
QT_MOC_LITERAL(11, 142, 15), // "new_check_state"
QT_MOC_LITERAL(12, 158, 21), // "UpdateHeadingElements"
QT_MOC_LITERAL(13, 180, 27), // "SelectHeadingLevelInclusion"
QT_MOC_LITERAL(14, 208, 13) // "heading_level"

    },
    "HeadingSelector\0DecreaseHeadingLevel\0"
    "\0IncreaseHeadingLevel\0OpenContextMenu\0"
    "point\0Rename\0ModelItemFilter\0"
    "QStandardItem*\0item\0ChangeDisplayType\0"
    "new_check_state\0UpdateHeadingElements\0"
    "SelectHeadingLevelInclusion\0heading_level"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HeadingSelector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,
      12,    0,   66,    2, 0x08 /* Private */,
      13,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void HeadingSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HeadingSelector *_t = static_cast<HeadingSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DecreaseHeadingLevel(); break;
        case 1: _t->IncreaseHeadingLevel(); break;
        case 2: _t->OpenContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->Rename(); break;
        case 4: _t->ModelItemFilter((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 5: _t->ChangeDisplayType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->UpdateHeadingElements(); break;
        case 7: _t->SelectHeadingLevelInclusion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject HeadingSelector::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_HeadingSelector.data,
      qt_meta_data_HeadingSelector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HeadingSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HeadingSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HeadingSelector.stringdata0))
        return static_cast<void*>(const_cast< HeadingSelector*>(this));
    return QDialog::qt_metacast(_clname);
}

int HeadingSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
