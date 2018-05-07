/****************************************************************************
** Meta object code from reading C++ file 'Resource.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ResourceObjects/Resource.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Resource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Resource_t {
    QByteArrayData data[12];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Resource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Resource_t qt_meta_stringdata_Resource = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Resource"
QT_MOC_LITERAL(1, 9, 7), // "Renamed"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 15), // "const Resource*"
QT_MOC_LITERAL(4, 34, 8), // "resource"
QT_MOC_LITERAL(5, 43, 13), // "old_full_path"
QT_MOC_LITERAL(6, 57, 7), // "Deleted"
QT_MOC_LITERAL(7, 65, 21), // "ResourceUpdatedOnDisk"
QT_MOC_LITERAL(8, 87, 23), // "ResourceUpdatedFromDisk"
QT_MOC_LITERAL(9, 111, 9), // "Resource*"
QT_MOC_LITERAL(10, 121, 8), // "Modified"
QT_MOC_LITERAL(11, 130, 20) // "ResourceFileModified"

    },
    "Resource\0Renamed\0\0const Resource*\0"
    "resource\0old_full_path\0Deleted\0"
    "ResourceUpdatedOnDisk\0ResourceUpdatedFromDisk\0"
    "Resource*\0Modified\0ResourceFileModified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Resource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,
       7,    0,   52,    2, 0x06 /* Public */,
       8,    1,   53,    2, 0x06 /* Public */,
      10,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Resource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Resource *_t = static_cast<Resource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Renamed((*reinterpret_cast< const Resource*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->Deleted((*reinterpret_cast< const Resource*(*)>(_a[1]))); break;
        case 2: _t->ResourceUpdatedOnDisk(); break;
        case 3: _t->ResourceUpdatedFromDisk((*reinterpret_cast< Resource*(*)>(_a[1]))); break;
        case 4: _t->Modified(); break;
        case 5: _t->ResourceFileModified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Resource* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Resource::*_t)(const Resource * , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Resource::Renamed)) {
                *result = 0;
            }
        }
        {
            typedef void (Resource::*_t)(const Resource * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Resource::Deleted)) {
                *result = 1;
            }
        }
        {
            typedef void (Resource::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Resource::ResourceUpdatedOnDisk)) {
                *result = 2;
            }
        }
        {
            typedef void (Resource::*_t)(Resource * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Resource::ResourceUpdatedFromDisk)) {
                *result = 3;
            }
        }
        {
            typedef void (Resource::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Resource::Modified)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject Resource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Resource.data,
      qt_meta_data_Resource,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Resource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Resource::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Resource.stringdata0))
        return static_cast<void*>(const_cast< Resource*>(this));
    return QObject::qt_metacast(_clname);
}

int Resource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Resource::Renamed(const Resource * _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Resource::Deleted(const Resource * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Resource::ResourceUpdatedOnDisk()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Resource::ResourceUpdatedFromDisk(Resource * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Resource::Modified()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
