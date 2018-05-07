/****************************************************************************
** Meta object code from reading C++ file 'SearchEditorModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MiscEditors/SearchEditorModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SearchEditorModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SearchEditorModel_t {
    QByteArrayData data[13];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchEditorModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchEditorModel_t qt_meta_stringdata_SearchEditorModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SearchEditorModel"
QT_MOC_LITERAL(1, 18, 19), // "SettingsFileUpdated"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "ItemDropped"
QT_MOC_LITERAL(4, 51, 18), // "RowsRemovedHandler"
QT_MOC_LITERAL(5, 70, 6), // "parent"
QT_MOC_LITERAL(6, 77, 5), // "start"
QT_MOC_LITERAL(7, 83, 3), // "end"
QT_MOC_LITERAL(8, 87, 18), // "ItemChangedHandler"
QT_MOC_LITERAL(9, 106, 14), // "QStandardItem*"
QT_MOC_LITERAL(10, 121, 4), // "item"
QT_MOC_LITERAL(11, 126, 19), // "SettingsFileChanged"
QT_MOC_LITERAL(12, 146, 4) // "path"

    },
    "SearchEditorModel\0SettingsFileUpdated\0"
    "\0ItemDropped\0RowsRemovedHandler\0parent\0"
    "start\0end\0ItemChangedHandler\0"
    "QStandardItem*\0item\0SettingsFileChanged\0"
    "path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchEditorModel[] = {

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
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   43,    2, 0x08 /* Private */,
       8,    1,   50,    2, 0x08 /* Private */,
      11,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void SearchEditorModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchEditorModel *_t = static_cast<SearchEditorModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SettingsFileUpdated(); break;
        case 1: _t->ItemDropped((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->RowsRemovedHandler((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->ItemChangedHandler((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 4: _t->SettingsFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SearchEditorModel::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEditorModel::SettingsFileUpdated)) {
                *result = 0;
            }
        }
        {
            typedef void (SearchEditorModel::*_t)(const QModelIndex & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchEditorModel::ItemDropped)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject SearchEditorModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_SearchEditorModel.data,
      qt_meta_data_SearchEditorModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SearchEditorModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchEditorModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SearchEditorModel.stringdata0))
        return static_cast<void*>(const_cast< SearchEditorModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int SearchEditorModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
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
void SearchEditorModel::SettingsFileUpdated()const
{
    QMetaObject::activate(const_cast< SearchEditorModel *>(this), &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SearchEditorModel::ItemDropped(const QModelIndex & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< SearchEditorModel *>(this), &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
