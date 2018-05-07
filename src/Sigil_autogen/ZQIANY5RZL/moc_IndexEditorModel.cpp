/****************************************************************************
** Meta object code from reading C++ file 'IndexEditorModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MiscEditors/IndexEditorModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IndexEditorModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IndexEditorModel_t {
    QByteArrayData data[12];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IndexEditorModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IndexEditorModel_t qt_meta_stringdata_IndexEditorModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "IndexEditorModel"
QT_MOC_LITERAL(1, 17, 19), // "SettingsFileUpdated"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 18), // "RowsRemovedHandler"
QT_MOC_LITERAL(4, 57, 6), // "parent"
QT_MOC_LITERAL(5, 64, 5), // "start"
QT_MOC_LITERAL(6, 70, 3), // "end"
QT_MOC_LITERAL(7, 74, 18), // "ItemChangedHandler"
QT_MOC_LITERAL(8, 93, 14), // "QStandardItem*"
QT_MOC_LITERAL(9, 108, 4), // "item"
QT_MOC_LITERAL(10, 113, 19), // "SettingsFileChanged"
QT_MOC_LITERAL(11, 133, 4) // "path"

    },
    "IndexEditorModel\0SettingsFileUpdated\0"
    "\0RowsRemovedHandler\0parent\0start\0end\0"
    "ItemChangedHandler\0QStandardItem*\0"
    "item\0SettingsFileChanged\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IndexEditorModel[] = {

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
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,   35,    2, 0x08 /* Private */,
       7,    1,   42,    2, 0x08 /* Private */,
      10,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void IndexEditorModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IndexEditorModel *_t = static_cast<IndexEditorModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SettingsFileUpdated(); break;
        case 1: _t->RowsRemovedHandler((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->ItemChangedHandler((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 3: _t->SettingsFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IndexEditorModel::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IndexEditorModel::SettingsFileUpdated)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject IndexEditorModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_IndexEditorModel.data,
      qt_meta_data_IndexEditorModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IndexEditorModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IndexEditorModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IndexEditorModel.stringdata0))
        return static_cast<void*>(const_cast< IndexEditorModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int IndexEditorModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void IndexEditorModel::SettingsFileUpdated()const
{
    QMetaObject::activate(const_cast< IndexEditorModel *>(this), &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
