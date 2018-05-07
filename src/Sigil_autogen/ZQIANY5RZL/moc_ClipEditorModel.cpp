/****************************************************************************
** Meta object code from reading C++ file 'ClipEditorModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MiscEditors/ClipEditorModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClipEditorModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClipEditorModel_t {
    QByteArrayData data[14];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClipEditorModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClipEditorModel_t qt_meta_stringdata_ClipEditorModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ClipEditorModel"
QT_MOC_LITERAL(1, 16, 19), // "SettingsFileUpdated"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "ItemDropped"
QT_MOC_LITERAL(4, 49, 12), // "ClipsUpdated"
QT_MOC_LITERAL(5, 62, 18), // "RowsRemovedHandler"
QT_MOC_LITERAL(6, 81, 6), // "parent"
QT_MOC_LITERAL(7, 88, 5), // "start"
QT_MOC_LITERAL(8, 94, 3), // "end"
QT_MOC_LITERAL(9, 98, 18), // "ItemChangedHandler"
QT_MOC_LITERAL(10, 117, 14), // "QStandardItem*"
QT_MOC_LITERAL(11, 132, 4), // "item"
QT_MOC_LITERAL(12, 137, 19), // "SettingsFileChanged"
QT_MOC_LITERAL(13, 157, 4) // "path"

    },
    "ClipEditorModel\0SettingsFileUpdated\0"
    "\0ItemDropped\0ClipsUpdated\0RowsRemovedHandler\0"
    "parent\0start\0end\0ItemChangedHandler\0"
    "QStandardItem*\0item\0SettingsFileChanged\0"
    "path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClipEditorModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       4,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   49,    2, 0x08 /* Private */,
       9,    1,   56,    2, 0x08 /* Private */,
      12,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void ClipEditorModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClipEditorModel *_t = static_cast<ClipEditorModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SettingsFileUpdated(); break;
        case 1: _t->ItemDropped((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->ClipsUpdated(); break;
        case 3: _t->RowsRemovedHandler((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->ItemChangedHandler((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 5: _t->SettingsFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClipEditorModel::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClipEditorModel::SettingsFileUpdated)) {
                *result = 0;
            }
        }
        {
            typedef void (ClipEditorModel::*_t)(const QModelIndex & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClipEditorModel::ItemDropped)) {
                *result = 1;
            }
        }
        {
            typedef void (ClipEditorModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClipEditorModel::ClipsUpdated)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ClipEditorModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_ClipEditorModel.data,
      qt_meta_data_ClipEditorModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClipEditorModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClipEditorModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClipEditorModel.stringdata0))
        return static_cast<void*>(const_cast< ClipEditorModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int ClipEditorModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ClipEditorModel::SettingsFileUpdated()const
{
    QMetaObject::activate(const_cast< ClipEditorModel *>(this), &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ClipEditorModel::ItemDropped(const QModelIndex & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ClipEditorModel *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClipEditorModel::ClipsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
