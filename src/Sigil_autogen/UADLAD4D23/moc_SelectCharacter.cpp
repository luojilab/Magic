/****************************************************************************
** Meta object code from reading C++ file 'SelectCharacter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/SelectCharacter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SelectCharacter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SelectCharacter_t {
    QByteArrayData data[7];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectCharacter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectCharacter_t qt_meta_stringdata_SelectCharacter = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SelectCharacter"
QT_MOC_LITERAL(1, 16, 17), // "SelectedCharacter"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "text"
QT_MOC_LITERAL(4, 40, 4), // "show"
QT_MOC_LITERAL(5, 45, 13), // "WriteSettings"
QT_MOC_LITERAL(6, 59, 20) // "SetSelectedCharacter"

    },
    "SelectCharacter\0SelectedCharacter\0\0"
    "text\0show\0WriteSettings\0SetSelectedCharacter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectCharacter[] = {

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
       4,    0,   37,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void SelectCharacter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectCharacter *_t = static_cast<SelectCharacter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SelectedCharacter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->show(); break;
        case 2: _t->WriteSettings(); break;
        case 3: _t->SetSelectedCharacter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SelectCharacter::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SelectCharacter::SelectedCharacter)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SelectCharacter::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SelectCharacter.data,
      qt_meta_data_SelectCharacter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SelectCharacter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectCharacter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SelectCharacter.stringdata0))
        return static_cast<void*>(const_cast< SelectCharacter*>(this));
    return QDialog::qt_metacast(_clname);
}

int SelectCharacter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SelectCharacter::SelectedCharacter(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
