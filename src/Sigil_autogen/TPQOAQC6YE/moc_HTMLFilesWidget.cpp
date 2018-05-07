/****************************************************************************
** Meta object code from reading C++ file 'HTMLFilesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/ReportsWidgets/HTMLFilesWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HTMLFilesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HTMLFilesWidget_t {
    QByteArrayData data[16];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HTMLFilesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HTMLFilesWidget_t qt_meta_stringdata_HTMLFilesWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "HTMLFilesWidget"
QT_MOC_LITERAL(1, 16, 11), // "CloseDialog"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 18), // "DeleteFilesRequest"
QT_MOC_LITERAL(4, 48, 15), // "OpenFileRequest"
QT_MOC_LITERAL(5, 64, 15), // "OpenContextMenu"
QT_MOC_LITERAL(6, 80, 5), // "point"
QT_MOC_LITERAL(7, 86, 4), // "Sort"
QT_MOC_LITERAL(8, 91, 12), // "logicalindex"
QT_MOC_LITERAL(9, 104, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(10, 118, 5), // "order"
QT_MOC_LITERAL(11, 124, 25), // "FilterEditTextChangedSlot"
QT_MOC_LITERAL(12, 150, 4), // "text"
QT_MOC_LITERAL(13, 155, 6), // "Delete"
QT_MOC_LITERAL(14, 162, 11), // "DoubleClick"
QT_MOC_LITERAL(15, 174, 4) // "Save"

    },
    "HTMLFilesWidget\0CloseDialog\0\0"
    "DeleteFilesRequest\0OpenFileRequest\0"
    "OpenContextMenu\0point\0Sort\0logicalindex\0"
    "Qt::SortOrder\0order\0FilterEditTextChangedSlot\0"
    "text\0Delete\0DoubleClick\0Save"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HTMLFilesWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,
       4,    2,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   68,    2, 0x08 /* Private */,
       7,    2,   71,    2, 0x08 /* Private */,
      11,    1,   76,    2, 0x08 /* Private */,
      13,    0,   79,    2, 0x08 /* Private */,
      14,    0,   80,    2, 0x08 /* Private */,
      15,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    8,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HTMLFilesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HTMLFilesWidget *_t = static_cast<HTMLFilesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseDialog(); break;
        case 1: _t->DeleteFilesRequest((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->OpenFileRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->OpenContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->Sort((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 5: _t->FilterEditTextChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->Delete(); break;
        case 7: _t->DoubleClick(); break;
        case 8: _t->Save(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HTMLFilesWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HTMLFilesWidget::CloseDialog)) {
                *result = 0;
            }
        }
        {
            typedef void (HTMLFilesWidget::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HTMLFilesWidget::DeleteFilesRequest)) {
                *result = 1;
            }
        }
        {
            typedef void (HTMLFilesWidget::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HTMLFilesWidget::OpenFileRequest)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject HTMLFilesWidget::staticMetaObject = {
    { &ReportsWidget::staticMetaObject, qt_meta_stringdata_HTMLFilesWidget.data,
      qt_meta_data_HTMLFilesWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HTMLFilesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HTMLFilesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HTMLFilesWidget.stringdata0))
        return static_cast<void*>(const_cast< HTMLFilesWidget*>(this));
    return ReportsWidget::qt_metacast(_clname);
}

int HTMLFilesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReportsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void HTMLFilesWidget::CloseDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void HTMLFilesWidget::DeleteFilesRequest(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HTMLFilesWidget::OpenFileRequest(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
