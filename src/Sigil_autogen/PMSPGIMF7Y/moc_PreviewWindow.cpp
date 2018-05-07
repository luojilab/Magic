/****************************************************************************
** Meta object code from reading C++ file 'PreviewWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MainUI/PreviewWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PreviewWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PreviewWindow_t {
    QByteArrayData data[17];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreviewWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreviewWindow_t qt_meta_stringdata_PreviewWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PreviewWindow"
QT_MOC_LITERAL(1, 14, 5), // "Shown"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 17), // "ZoomFactorChanged"
QT_MOC_LITERAL(4, 39, 6), // "factor"
QT_MOC_LITERAL(5, 46, 14), // "OpenUrlRequest"
QT_MOC_LITERAL(6, 61, 3), // "url"
QT_MOC_LITERAL(7, 65, 10), // "UpdatePage"
QT_MOC_LITERAL(8, 76, 8), // "filename"
QT_MOC_LITERAL(9, 85, 4), // "text"
QT_MOC_LITERAL(10, 90, 31), // "QList<ViewEditor::ElementIndex>"
QT_MOC_LITERAL(11, 122, 8), // "location"
QT_MOC_LITERAL(12, 131, 13), // "SetZoomFactor"
QT_MOC_LITERAL(13, 145, 13), // "SplitterMoved"
QT_MOC_LITERAL(14, 159, 3), // "pos"
QT_MOC_LITERAL(15, 163, 5), // "index"
QT_MOC_LITERAL(16, 169, 11) // "LinkClicked"

    },
    "PreviewWindow\0Shown\0\0ZoomFactorChanged\0"
    "factor\0OpenUrlRequest\0url\0UpdatePage\0"
    "filename\0text\0QList<ViewEditor::ElementIndex>\0"
    "location\0SetZoomFactor\0SplitterMoved\0"
    "pos\0index\0LinkClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreviewWindow[] = {

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
       5,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    3,   56,    2, 0x0a /* Public */,
      12,    1,   63,    2, 0x0a /* Public */,
      13,    2,   66,    2, 0x0a /* Public */,
      16,    1,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::QUrl,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 10,    8,    9,   11,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::QUrl,    6,

       0        // eod
};

void PreviewWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreviewWindow *_t = static_cast<PreviewWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Shown(); break;
        case 1: _t->ZoomFactorChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->OpenUrlRequest((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->UpdatePage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QList<ViewEditor::ElementIndex>(*)>(_a[3]))); break;
        case 4: _t->SetZoomFactor((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->SplitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->LinkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PreviewWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreviewWindow::Shown)) {
                *result = 0;
            }
        }
        {
            typedef void (PreviewWindow::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreviewWindow::ZoomFactorChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (PreviewWindow::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreviewWindow::OpenUrlRequest)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject PreviewWindow::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_PreviewWindow.data,
      qt_meta_data_PreviewWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PreviewWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreviewWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PreviewWindow.stringdata0))
        return static_cast<void*>(const_cast< PreviewWindow*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int PreviewWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
void PreviewWindow::Shown()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void PreviewWindow::ZoomFactorChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PreviewWindow::OpenUrlRequest(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
