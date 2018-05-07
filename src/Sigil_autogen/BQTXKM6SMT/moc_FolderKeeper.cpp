/****************************************************************************
** Meta object code from reading C++ file 'FolderKeeper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BookManipulation/FolderKeeper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FolderKeeper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FolderKeeper_t {
    QByteArrayData data[11];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FolderKeeper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FolderKeeper_t qt_meta_stringdata_FolderKeeper = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FolderKeeper"
QT_MOC_LITERAL(1, 13, 13), // "ResourceAdded"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "const Resource*"
QT_MOC_LITERAL(4, 44, 8), // "resource"
QT_MOC_LITERAL(5, 53, 15), // "ResourceRemoved"
QT_MOC_LITERAL(6, 69, 14), // "RemoveResource"
QT_MOC_LITERAL(7, 84, 15), // "ResourceRenamed"
QT_MOC_LITERAL(8, 100, 13), // "old_full_path"
QT_MOC_LITERAL(9, 114, 19), // "ResourceFileChanged"
QT_MOC_LITERAL(10, 134, 4) // "path"

    },
    "FolderKeeper\0ResourceAdded\0\0const Resource*\0"
    "resource\0ResourceRemoved\0RemoveResource\0"
    "ResourceRenamed\0old_full_path\0"
    "ResourceFileChanged\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FolderKeeper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   45,    2, 0x0a /* Public */,
       7,    2,   48,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    8,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void FolderKeeper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FolderKeeper *_t = static_cast<FolderKeeper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ResourceAdded((*reinterpret_cast< const Resource*(*)>(_a[1]))); break;
        case 1: _t->ResourceRemoved((*reinterpret_cast< const Resource*(*)>(_a[1]))); break;
        case 2: _t->RemoveResource((*reinterpret_cast< const Resource*(*)>(_a[1]))); break;
        case 3: _t->ResourceRenamed((*reinterpret_cast< const Resource*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->ResourceFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FolderKeeper::*_t)(const Resource * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FolderKeeper::ResourceAdded)) {
                *result = 0;
            }
        }
        {
            typedef void (FolderKeeper::*_t)(const Resource * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FolderKeeper::ResourceRemoved)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject FolderKeeper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FolderKeeper.data,
      qt_meta_data_FolderKeeper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FolderKeeper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FolderKeeper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FolderKeeper.stringdata0))
        return static_cast<void*>(const_cast< FolderKeeper*>(this));
    return QObject::qt_metacast(_clname);
}

int FolderKeeper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FolderKeeper::ResourceAdded(const Resource * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FolderKeeper::ResourceRemoved(const Resource * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
