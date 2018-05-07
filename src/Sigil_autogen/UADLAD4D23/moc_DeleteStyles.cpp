/****************************************************************************
** Meta object code from reading C++ file 'DeleteStyles.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/DeleteStyles.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeleteStyles.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DeleteStyles_t {
    QByteArrayData data[7];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeleteStyles_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeleteStyles_t qt_meta_stringdata_DeleteStyles = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DeleteStyles"
QT_MOC_LITERAL(1, 13, 15), // "OpenFileRequest"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "SaveStylesToDelete"
QT_MOC_LITERAL(4, 49, 13), // "WriteSettings"
QT_MOC_LITERAL(5, 63, 11), // "DoubleClick"
QT_MOC_LITERAL(6, 75, 5) // "index"

    },
    "DeleteStyles\0OpenFileRequest\0\0"
    "SaveStylesToDelete\0WriteSettings\0"
    "DoubleClick\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeleteStyles[] = {

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
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   39,    2, 0x08 /* Private */,
       4,    0,   40,    2, 0x08 /* Private */,
       5,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,

       0        // eod
};

void DeleteStyles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeleteStyles *_t = static_cast<DeleteStyles *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OpenFileRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->SaveStylesToDelete(); break;
        case 2: _t->WriteSettings(); break;
        case 3: _t->DoubleClick((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DeleteStyles::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeleteStyles::OpenFileRequest)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject DeleteStyles::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DeleteStyles.data,
      qt_meta_data_DeleteStyles,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DeleteStyles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeleteStyles::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DeleteStyles.stringdata0))
        return static_cast<void*>(const_cast< DeleteStyles*>(this));
    return QDialog::qt_metacast(_clname);
}

int DeleteStyles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DeleteStyles::OpenFileRequest(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
