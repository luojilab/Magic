/****************************************************************************
** Meta object code from reading C++ file 'CSSFilesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/ReportsWidgets/CSSFilesWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CSSFilesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CSSFilesWidget_t {
    QByteArrayData data[18];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CSSFilesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CSSFilesWidget_t qt_meta_stringdata_CSSFilesWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CSSFilesWidget"
QT_MOC_LITERAL(1, 15, 11), // "CloseDialog"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "DeleteFilesRequest"
QT_MOC_LITERAL(4, 47, 15), // "OpenFileRequest"
QT_MOC_LITERAL(5, 63, 12), // "ReadSettings"
QT_MOC_LITERAL(6, 76, 13), // "WriteSettings"
QT_MOC_LITERAL(7, 90, 15), // "OpenContextMenu"
QT_MOC_LITERAL(8, 106, 5), // "point"
QT_MOC_LITERAL(9, 112, 4), // "Sort"
QT_MOC_LITERAL(10, 117, 12), // "logicalindex"
QT_MOC_LITERAL(11, 130, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(12, 144, 5), // "order"
QT_MOC_LITERAL(13, 150, 25), // "FilterEditTextChangedSlot"
QT_MOC_LITERAL(14, 176, 4), // "text"
QT_MOC_LITERAL(15, 181, 6), // "Delete"
QT_MOC_LITERAL(16, 188, 4), // "Save"
QT_MOC_LITERAL(17, 193, 11) // "DoubleClick"

    },
    "CSSFilesWidget\0CloseDialog\0\0"
    "DeleteFilesRequest\0OpenFileRequest\0"
    "ReadSettings\0WriteSettings\0OpenContextMenu\0"
    "point\0Sort\0logicalindex\0Qt::SortOrder\0"
    "order\0FilterEditTextChangedSlot\0text\0"
    "Delete\0Save\0DoubleClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CSSFilesWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,
       4,    2,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    1,   80,    2, 0x08 /* Private */,
       9,    2,   83,    2, 0x08 /* Private */,
      13,    1,   88,    2, 0x08 /* Private */,
      15,    0,   91,    2, 0x08 /* Private */,
      16,    0,   92,    2, 0x08 /* Private */,
      17,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11,   10,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CSSFilesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CSSFilesWidget *_t = static_cast<CSSFilesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseDialog(); break;
        case 1: _t->DeleteFilesRequest((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->OpenFileRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->ReadSettings(); break;
        case 4: _t->WriteSettings(); break;
        case 5: _t->OpenContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->Sort((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 7: _t->FilterEditTextChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->Delete(); break;
        case 9: _t->Save(); break;
        case 10: _t->DoubleClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CSSFilesWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CSSFilesWidget::CloseDialog)) {
                *result = 0;
            }
        }
        {
            typedef void (CSSFilesWidget::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CSSFilesWidget::DeleteFilesRequest)) {
                *result = 1;
            }
        }
        {
            typedef void (CSSFilesWidget::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CSSFilesWidget::OpenFileRequest)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject CSSFilesWidget::staticMetaObject = {
    { &ReportsWidget::staticMetaObject, qt_meta_stringdata_CSSFilesWidget.data,
      qt_meta_data_CSSFilesWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CSSFilesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CSSFilesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CSSFilesWidget.stringdata0))
        return static_cast<void*>(const_cast< CSSFilesWidget*>(this));
    return ReportsWidget::qt_metacast(_clname);
}

int CSSFilesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReportsWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CSSFilesWidget::CloseDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CSSFilesWidget::DeleteFilesRequest(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CSSFilesWidget::OpenFileRequest(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
