/****************************************************************************
** Meta object code from reading C++ file 'OPFModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MainUI/OPFModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OPFModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OPFModel_t {
    QByteArrayData data[11];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPFModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPFModel_t qt_meta_stringdata_OPFModel = {
    {
QT_MOC_LITERAL(0, 0, 8), // "OPFModel"
QT_MOC_LITERAL(1, 9, 19), // "BookContentModified"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "ResourceRenamed"
QT_MOC_LITERAL(4, 46, 18), // "RowsRemovedHandler"
QT_MOC_LITERAL(5, 65, 6), // "parent"
QT_MOC_LITERAL(6, 72, 5), // "start"
QT_MOC_LITERAL(7, 78, 3), // "end"
QT_MOC_LITERAL(8, 82, 18), // "ItemChangedHandler"
QT_MOC_LITERAL(9, 101, 14), // "QStandardItem*"
QT_MOC_LITERAL(10, 116, 4) // "item"

    },
    "OPFModel\0BookContentModified\0\0"
    "ResourceRenamed\0RowsRemovedHandler\0"
    "parent\0start\0end\0ItemChangedHandler\0"
    "QStandardItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPFModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   36,    2, 0x08 /* Private */,
       8,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void OPFModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OPFModel *_t = static_cast<OPFModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BookContentModified(); break;
        case 1: _t->ResourceRenamed(); break;
        case 2: _t->RowsRemovedHandler((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->ItemChangedHandler((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OPFModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OPFModel::BookContentModified)) {
                *result = 0;
            }
        }
        {
            typedef void (OPFModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OPFModel::ResourceRenamed)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OPFModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_OPFModel.data,
      qt_meta_data_OPFModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OPFModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPFModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OPFModel.stringdata0))
        return static_cast<void*>(const_cast< OPFModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int OPFModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OPFModel::BookContentModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OPFModel::ResourceRenamed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
