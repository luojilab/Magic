/****************************************************************************
** Meta object code from reading C++ file 'PreserveEntitiesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/PreferenceWidgets/PreserveEntitiesWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PreserveEntitiesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PreserveEntitiesWidget_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreserveEntitiesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreserveEntitiesWidget_t qt_meta_stringdata_PreserveEntitiesWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "PreserveEntitiesWidget"
QT_MOC_LITERAL(1, 23, 11), // "addEntities"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "removeEntity"
QT_MOC_LITERAL(4, 49, 9), // "removeAll"
QT_MOC_LITERAL(5, 59, 11), // "ItemChanged"
QT_MOC_LITERAL(6, 71, 14), // "QStandardItem*"
QT_MOC_LITERAL(7, 86, 4) // "item"

    },
    "PreserveEntitiesWidget\0addEntities\0\0"
    "removeEntity\0removeAll\0ItemChanged\0"
    "QStandardItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreserveEntitiesWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void PreserveEntitiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreserveEntitiesWidget *_t = static_cast<PreserveEntitiesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addEntities(); break;
        case 1: _t->removeEntity(); break;
        case 2: _t->removeAll(); break;
        case 3: _t->ItemChanged((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PreserveEntitiesWidget::staticMetaObject = {
    { &PreferencesWidget::staticMetaObject, qt_meta_stringdata_PreserveEntitiesWidget.data,
      qt_meta_data_PreserveEntitiesWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PreserveEntitiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreserveEntitiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PreserveEntitiesWidget.stringdata0))
        return static_cast<void*>(const_cast< PreserveEntitiesWidget*>(this));
    return PreferencesWidget::qt_metacast(_clname);
}

int PreserveEntitiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PreferencesWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
