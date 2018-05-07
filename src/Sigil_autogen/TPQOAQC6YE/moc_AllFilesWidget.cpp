/****************************************************************************
** Meta object code from reading C++ file 'AllFilesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/ReportsWidgets/AllFilesWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AllFilesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AllFilesWidget_t {
    QByteArrayData data[13];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AllFilesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AllFilesWidget_t qt_meta_stringdata_AllFilesWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AllFilesWidget"
QT_MOC_LITERAL(1, 15, 11), // "CloseDialog"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "DeleteFilesRequest"
QT_MOC_LITERAL(4, 47, 15), // "OpenFileRequest"
QT_MOC_LITERAL(5, 63, 4), // "Sort"
QT_MOC_LITERAL(6, 68, 12), // "logicalindex"
QT_MOC_LITERAL(7, 81, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(8, 95, 5), // "order"
QT_MOC_LITERAL(9, 101, 25), // "FilterEditTextChangedSlot"
QT_MOC_LITERAL(10, 127, 4), // "text"
QT_MOC_LITERAL(11, 132, 11), // "DoubleClick"
QT_MOC_LITERAL(12, 144, 4) // "Save"

    },
    "AllFilesWidget\0CloseDialog\0\0"
    "DeleteFilesRequest\0OpenFileRequest\0"
    "Sort\0logicalindex\0Qt::SortOrder\0order\0"
    "FilterEditTextChangedSlot\0text\0"
    "DoubleClick\0Save"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AllFilesWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       4,    2,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   58,    2, 0x08 /* Private */,
       9,    1,   63,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    6,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AllFilesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AllFilesWidget *_t = static_cast<AllFilesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseDialog(); break;
        case 1: _t->DeleteFilesRequest((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->OpenFileRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->Sort((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 4: _t->FilterEditTextChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->DoubleClick(); break;
        case 6: _t->Save(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AllFilesWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AllFilesWidget::CloseDialog)) {
                *result = 0;
            }
        }
        {
            typedef void (AllFilesWidget::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AllFilesWidget::DeleteFilesRequest)) {
                *result = 1;
            }
        }
        {
            typedef void (AllFilesWidget::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AllFilesWidget::OpenFileRequest)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject AllFilesWidget::staticMetaObject = {
    { &ReportsWidget::staticMetaObject, qt_meta_stringdata_AllFilesWidget.data,
      qt_meta_data_AllFilesWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AllFilesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AllFilesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AllFilesWidget.stringdata0))
        return static_cast<void*>(const_cast< AllFilesWidget*>(this));
    return ReportsWidget::qt_metacast(_clname);
}

int AllFilesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReportsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void AllFilesWidget::CloseDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void AllFilesWidget::DeleteFilesRequest(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AllFilesWidget::OpenFileRequest(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
