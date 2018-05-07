/****************************************************************************
** Meta object code from reading C++ file 'SelectFiles.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/SelectFiles.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SelectFiles.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SelectFiles_t {
    QByteArrayData data[19];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectFiles_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectFiles_t qt_meta_stringdata_SelectFiles = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SelectFiles"
QT_MOC_LITERAL(1, 12, 9), // "SetImages"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 19), // "PreviewLoadComplete"
QT_MOC_LITERAL(4, 43, 21), // "IncreaseThumbnailSize"
QT_MOC_LITERAL(5, 65, 21), // "DecreaseThumbnailSize"
QT_MOC_LITERAL(6, 87, 13), // "ReloadPreview"
QT_MOC_LITERAL(7, 101, 16), // "SelectionChanged"
QT_MOC_LITERAL(8, 118, 14), // "QItemSelection"
QT_MOC_LITERAL(9, 133, 8), // "selected"
QT_MOC_LITERAL(10, 142, 10), // "deselected"
QT_MOC_LITERAL(11, 153, 18), // "SelectDefaultImage"
QT_MOC_LITERAL(12, 172, 25), // "FilterEditTextChangedSlot"
QT_MOC_LITERAL(13, 198, 4), // "text"
QT_MOC_LITERAL(14, 203, 13), // "WriteSettings"
QT_MOC_LITERAL(15, 217, 14), // "InsertFromDisk"
QT_MOC_LITERAL(16, 232, 13), // "SplitterMoved"
QT_MOC_LITERAL(17, 246, 3), // "pos"
QT_MOC_LITERAL(18, 250, 5) // "index"

    },
    "SelectFiles\0SetImages\0\0PreviewLoadComplete\0"
    "IncreaseThumbnailSize\0DecreaseThumbnailSize\0"
    "ReloadPreview\0SelectionChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "SelectDefaultImage\0FilterEditTextChangedSlot\0"
    "text\0WriteSettings\0InsertFromDisk\0"
    "SplitterMoved\0pos\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectFiles[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    1,   70,    2, 0x08 /* Private */,
       4,    0,   73,    2, 0x08 /* Private */,
       5,    0,   74,    2, 0x08 /* Private */,
       6,    0,   75,    2, 0x08 /* Private */,
       7,    2,   76,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    1,   82,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,
      15,    0,   86,    2, 0x08 /* Private */,
      16,    2,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,

       0        // eod
};

void SelectFiles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectFiles *_t = static_cast<SelectFiles *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetImages(); break;
        case 1: _t->PreviewLoadComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->IncreaseThumbnailSize(); break;
        case 3: _t->DecreaseThumbnailSize(); break;
        case 4: _t->ReloadPreview(); break;
        case 5: _t->SelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 6: _t->SelectDefaultImage(); break;
        case 7: _t->FilterEditTextChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->WriteSettings(); break;
        case 9: _t->InsertFromDisk(); break;
        case 10: _t->SplitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject SelectFiles::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SelectFiles.data,
      qt_meta_data_SelectFiles,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SelectFiles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectFiles::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SelectFiles.stringdata0))
        return static_cast<void*>(const_cast< SelectFiles*>(this));
    return QDialog::qt_metacast(_clname);
}

int SelectFiles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
