/****************************************************************************
** Meta object code from reading C++ file 'AddSemantics.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/AddSemantics.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddSemantics.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddSemantics_t {
    QByteArrayData data[9];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddSemantics_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddSemantics_t qt_meta_stringdata_AddSemantics = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AddSemantics"
QT_MOC_LITERAL(1, 13, 14), // "SemanticsToAdd"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "semantics"
QT_MOC_LITERAL(4, 39, 17), // "UpdateDescription"
QT_MOC_LITERAL(5, 57, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(6, 74, 7), // "current"
QT_MOC_LITERAL(7, 82, 13), // "SaveSelection"
QT_MOC_LITERAL(8, 96, 13) // "WriteSettings"

    },
    "AddSemantics\0SemanticsToAdd\0\0semantics\0"
    "UpdateDescription\0QListWidgetItem*\0"
    "current\0SaveSelection\0WriteSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddSemantics[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x08 /* Private */,
       7,    0,   40,    2, 0x08 /* Private */,
       8,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddSemantics::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddSemantics *_t = static_cast<AddSemantics *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SemanticsToAdd((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->UpdateDescription((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->SaveSelection(); break;
        case 3: _t->WriteSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddSemantics::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddSemantics::SemanticsToAdd)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject AddSemantics::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddSemantics.data,
      qt_meta_data_AddSemantics,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddSemantics::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddSemantics::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddSemantics.stringdata0))
        return static_cast<void*>(const_cast< AddSemantics*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddSemantics::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void AddSemantics::SemanticsToAdd(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
