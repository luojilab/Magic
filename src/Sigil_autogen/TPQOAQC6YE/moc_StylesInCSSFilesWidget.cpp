/****************************************************************************
** Meta object code from reading C++ file 'StylesInCSSFilesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/ReportsWidgets/StylesInCSSFilesWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StylesInCSSFilesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StylesInCSSFilesWidget_t {
    QByteArrayData data[13];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StylesInCSSFilesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StylesInCSSFilesWidget_t qt_meta_stringdata_StylesInCSSFilesWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "StylesInCSSFilesWidget"
QT_MOC_LITERAL(1, 23, 11), // "CloseDialog"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "OpenFileRequest"
QT_MOC_LITERAL(4, 52, 19), // "DeleteStylesRequest"
QT_MOC_LITERAL(5, 72, 30), // "QList<BookReports::StyleData*>"
QT_MOC_LITERAL(6, 103, 15), // "OpenContextMenu"
QT_MOC_LITERAL(7, 119, 5), // "point"
QT_MOC_LITERAL(8, 125, 25), // "FilterEditTextChangedSlot"
QT_MOC_LITERAL(9, 151, 4), // "text"
QT_MOC_LITERAL(10, 156, 6), // "Delete"
QT_MOC_LITERAL(11, 163, 4), // "Save"
QT_MOC_LITERAL(12, 168, 11) // "DoubleClick"

    },
    "StylesInCSSFilesWidget\0CloseDialog\0\0"
    "OpenFileRequest\0DeleteStylesRequest\0"
    "QList<BookReports::StyleData*>\0"
    "OpenContextMenu\0point\0FilterEditTextChangedSlot\0"
    "text\0Delete\0Save\0DoubleClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StylesInCSSFilesWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    2,   55,    2, 0x06 /* Public */,
       4,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   63,    2, 0x08 /* Private */,
       8,    1,   66,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StylesInCSSFilesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StylesInCSSFilesWidget *_t = static_cast<StylesInCSSFilesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseDialog(); break;
        case 1: _t->OpenFileRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->DeleteStylesRequest((*reinterpret_cast< QList<BookReports::StyleData*>(*)>(_a[1]))); break;
        case 3: _t->OpenContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->FilterEditTextChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->Delete(); break;
        case 6: _t->Save(); break;
        case 7: _t->DoubleClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StylesInCSSFilesWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StylesInCSSFilesWidget::CloseDialog)) {
                *result = 0;
            }
        }
        {
            typedef void (StylesInCSSFilesWidget::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StylesInCSSFilesWidget::OpenFileRequest)) {
                *result = 1;
            }
        }
        {
            typedef void (StylesInCSSFilesWidget::*_t)(QList<BookReports::StyleData*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StylesInCSSFilesWidget::DeleteStylesRequest)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject StylesInCSSFilesWidget::staticMetaObject = {
    { &ReportsWidget::staticMetaObject, qt_meta_stringdata_StylesInCSSFilesWidget.data,
      qt_meta_data_StylesInCSSFilesWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StylesInCSSFilesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StylesInCSSFilesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StylesInCSSFilesWidget.stringdata0))
        return static_cast<void*>(const_cast< StylesInCSSFilesWidget*>(this));
    return ReportsWidget::qt_metacast(_clname);
}

int StylesInCSSFilesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReportsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void StylesInCSSFilesWidget::CloseDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void StylesInCSSFilesWidget::OpenFileRequest(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StylesInCSSFilesWidget::DeleteStylesRequest(QList<BookReports::StyleData*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
