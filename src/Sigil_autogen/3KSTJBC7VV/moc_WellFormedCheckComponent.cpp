/****************************************************************************
** Meta object code from reading C++ file 'WellFormedCheckComponent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Tabs/WellFormedCheckComponent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WellFormedCheckComponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WellFormedCheckComponent_t {
    QByteArrayData data[7];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WellFormedCheckComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WellFormedCheckComponent_t qt_meta_stringdata_WellFormedCheckComponent = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WellFormedCheckComponent"
QT_MOC_LITERAL(1, 25, 24), // "DemandAttentionIfAllowed"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 25), // "XhtmlDoc::WellFormedError"
QT_MOC_LITERAL(4, 77, 5), // "error"
QT_MOC_LITERAL(5, 83, 11), // "deleteLater"
QT_MOC_LITERAL(6, 95, 15) // "DemandAttention"

    },
    "WellFormedCheckComponent\0"
    "DemandAttentionIfAllowed\0\0"
    "XhtmlDoc::WellFormedError\0error\0"
    "deleteLater\0DemandAttention"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WellFormedCheckComponent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    0,   32,    2, 0x0a /* Public */,
       6,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WellFormedCheckComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WellFormedCheckComponent *_t = static_cast<WellFormedCheckComponent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DemandAttentionIfAllowed((*reinterpret_cast< const XhtmlDoc::WellFormedError(*)>(_a[1]))); break;
        case 1: _t->deleteLater(); break;
        case 2: _t->DemandAttention(); break;
        default: ;
        }
    }
}

const QMetaObject WellFormedCheckComponent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WellFormedCheckComponent.data,
      qt_meta_data_WellFormedCheckComponent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WellFormedCheckComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WellFormedCheckComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WellFormedCheckComponent.stringdata0))
        return static_cast<void*>(const_cast< WellFormedCheckComponent*>(this));
    return QObject::qt_metacast(_clname);
}

int WellFormedCheckComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
