/****************************************************************************
** Meta object code from reading C++ file 'BookViewPreview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ViewEditors/BookViewPreview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BookViewPreview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BookViewPreview_t {
    QByteArrayData data[17];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookViewPreview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookViewPreview_t qt_meta_stringdata_BookViewPreview = {
    {
QT_MOC_LITERAL(0, 0, 15), // "BookViewPreview"
QT_MOC_LITERAL(1, 16, 17), // "ZoomFactorChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "new_zoom_factor"
QT_MOC_LITERAL(4, 51, 11), // "LinkClicked"
QT_MOC_LITERAL(5, 63, 3), // "url"
QT_MOC_LITERAL(6, 67, 24), // "ShowStatusMessageRequest"
QT_MOC_LITERAL(7, 92, 7), // "message"
QT_MOC_LITERAL(8, 100, 14), // "DocumentLoaded"
QT_MOC_LITERAL(9, 115, 4), // "copy"
QT_MOC_LITERAL(10, 120, 14), // "InspectElement"
QT_MOC_LITERAL(11, 135, 19), // "UpdateFinishedState"
QT_MOC_LITERAL(12, 155, 4), // "okay"
QT_MOC_LITERAL(13, 160, 15), // "OpenContextMenu"
QT_MOC_LITERAL(14, 176, 5), // "point"
QT_MOC_LITERAL(15, 182, 23), // "WebPageJavascriptOnLoad"
QT_MOC_LITERAL(16, 206, 26) // "executeCaretUpdateInternal"

    },
    "BookViewPreview\0ZoomFactorChanged\0\0"
    "new_zoom_factor\0LinkClicked\0url\0"
    "ShowStatusMessageRequest\0message\0"
    "DocumentLoaded\0copy\0InspectElement\0"
    "UpdateFinishedState\0okay\0OpenContextMenu\0"
    "point\0WebPageJavascriptOnLoad\0"
    "executeCaretUpdateInternal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookViewPreview[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       8,    0,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   74,    2, 0x0a /* Public */,
      10,    0,   75,    2, 0x0a /* Public */,
      11,    1,   76,    2, 0x09 /* Protected */,
      13,    1,   79,    2, 0x09 /* Protected */,
      15,    0,   82,    2, 0x08 /* Private */,
      16,    0,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::QUrl,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QPoint,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BookViewPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookViewPreview *_t = static_cast<BookViewPreview *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ZoomFactorChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->LinkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->ShowStatusMessageRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->DocumentLoaded(); break;
        case 4: _t->copy(); break;
        case 5: _t->InspectElement(); break;
        case 6: _t->UpdateFinishedState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->OpenContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 8: _t->WebPageJavascriptOnLoad(); break;
        case 9: _t->executeCaretUpdateInternal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BookViewPreview::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewPreview::ZoomFactorChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (BookViewPreview::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewPreview::LinkClicked)) {
                *result = 1;
            }
        }
        {
            typedef void (BookViewPreview::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewPreview::ShowStatusMessageRequest)) {
                *result = 2;
            }
        }
        {
            typedef void (BookViewPreview::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookViewPreview::DocumentLoaded)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject BookViewPreview::staticMetaObject = {
    { &QWebView::staticMetaObject, qt_meta_stringdata_BookViewPreview.data,
      qt_meta_data_BookViewPreview,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BookViewPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookViewPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BookViewPreview.stringdata0))
        return static_cast<void*>(const_cast< BookViewPreview*>(this));
    if (!strcmp(_clname, "ViewEditor"))
        return static_cast< ViewEditor*>(const_cast< BookViewPreview*>(this));
    return QWebView::qt_metacast(_clname);
}

int BookViewPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void BookViewPreview::ZoomFactorChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BookViewPreview::LinkClicked(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BookViewPreview::ShowStatusMessageRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BookViewPreview::DocumentLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
