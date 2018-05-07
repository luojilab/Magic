/****************************************************************************
** Meta object code from reading C++ file 'HTMLResource.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ResourceObjects/HTMLResource.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HTMLResource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HTMLResource_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HTMLResource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HTMLResource_t qt_meta_stringdata_HTMLResource = {
    {
QT_MOC_LITERAL(0, 0, 12), // "HTMLResource"
QT_MOC_LITERAL(1, 13, 21), // "LinkedResourceUpdated"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "TextChanging"
QT_MOC_LITERAL(4, 49, 14) // "LoadedFromDisk"

    },
    "HTMLResource\0LinkedResourceUpdated\0\0"
    "TextChanging\0LoadedFromDisk"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HTMLResource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HTMLResource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HTMLResource *_t = static_cast<HTMLResource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LinkedResourceUpdated(); break;
        case 1: _t->TextChanging(); break;
        case 2: _t->LoadedFromDisk(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HTMLResource::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HTMLResource::LinkedResourceUpdated)) {
                *result = 0;
            }
        }
        {
            typedef void (HTMLResource::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HTMLResource::TextChanging)) {
                *result = 1;
            }
        }
        {
            typedef void (HTMLResource::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HTMLResource::LoadedFromDisk)) {
                *result = 2;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject HTMLResource::staticMetaObject = {
    { &XMLResource::staticMetaObject, qt_meta_stringdata_HTMLResource.data,
      qt_meta_data_HTMLResource,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HTMLResource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HTMLResource::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HTMLResource.stringdata0))
        return static_cast<void*>(const_cast< HTMLResource*>(this));
    return XMLResource::qt_metacast(_clname);
}

int HTMLResource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XMLResource::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void HTMLResource::LinkedResourceUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void HTMLResource::TextChanging()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void HTMLResource::LoadedFromDisk()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
