/****************************************************************************
** Meta object code from reading C++ file 'ValidationResultsView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MainUI/ValidationResultsView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ValidationResultsView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ValidationResultsView_t {
    QByteArrayData data[16];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ValidationResultsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ValidationResultsView_t qt_meta_stringdata_ValidationResultsView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ValidationResultsView"
QT_MOC_LITERAL(1, 22, 19), // "OpenResourceRequest"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 9), // "Resource*"
QT_MOC_LITERAL(4, 53, 8), // "resource"
QT_MOC_LITERAL(5, 62, 17), // "line_to_scroll_to"
QT_MOC_LITERAL(6, 80, 21), // "position_to_scroll_to"
QT_MOC_LITERAL(7, 102, 27), // "caret_location_to_scroll_to"
QT_MOC_LITERAL(8, 130, 21), // "MainWindow::ViewState"
QT_MOC_LITERAL(9, 152, 10), // "view_state"
QT_MOC_LITERAL(10, 163, 7), // "SetBook"
QT_MOC_LITERAL(11, 171, 20), // "QSharedPointer<Book>"
QT_MOC_LITERAL(12, 192, 4), // "book"
QT_MOC_LITERAL(13, 197, 19), // "ResultDoubleClicked"
QT_MOC_LITERAL(14, 217, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(15, 235, 4) // "item"

    },
    "ValidationResultsView\0OpenResourceRequest\0"
    "\0Resource*\0resource\0line_to_scroll_to\0"
    "position_to_scroll_to\0caret_location_to_scroll_to\0"
    "MainWindow::ViewState\0view_state\0"
    "SetBook\0QSharedPointer<Book>\0book\0"
    "ResultDoubleClicked\0QTableWidgetItem*\0"
    "item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ValidationResultsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   49,    2, 0x06 /* Public */,
       1,    4,   60,    2, 0x26 /* Public | MethodCloned */,
       1,    3,   69,    2, 0x26 /* Public | MethodCloned */,
       1,    2,   76,    2, 0x26 /* Public | MethodCloned */,
       1,    1,   81,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   84,    2, 0x0a /* Public */,
      13,    1,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::QString, 0x80000000 | 8,    4,    5,    6,    7,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::QString,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void ValidationResultsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ValidationResultsView *_t = static_cast<ValidationResultsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OpenResourceRequest((*reinterpret_cast< Resource*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< MainWindow::ViewState(*)>(_a[5]))); break;
        case 1: _t->OpenResourceRequest((*reinterpret_cast< Resource*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 2: _t->OpenResourceRequest((*reinterpret_cast< Resource*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->OpenResourceRequest((*reinterpret_cast< Resource*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->OpenResourceRequest((*reinterpret_cast< Resource*(*)>(_a[1]))); break;
        case 5: _t->SetBook((*reinterpret_cast< QSharedPointer<Book>(*)>(_a[1]))); break;
        case 6: _t->ResultDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Resource* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Resource* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Resource* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Resource* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Resource* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<Book> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ValidationResultsView::*_t)(Resource * , int , int , const QString & , MainWindow::ViewState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ValidationResultsView::OpenResourceRequest)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ValidationResultsView::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_ValidationResultsView.data,
      qt_meta_data_ValidationResultsView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ValidationResultsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ValidationResultsView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ValidationResultsView.stringdata0))
        return static_cast<void*>(const_cast< ValidationResultsView*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int ValidationResultsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ValidationResultsView::OpenResourceRequest(Resource * _t1, int _t2, int _t3, const QString & _t4, MainWindow::ViewState _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
