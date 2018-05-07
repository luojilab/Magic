/****************************************************************************
** Meta object code from reading C++ file 'TableOfContents.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MainUI/TableOfContents.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TableOfContents.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TableOfContents_t {
    QByteArrayData data[21];
    char stringdata0[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TableOfContents_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TableOfContents_t qt_meta_stringdata_TableOfContents = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TableOfContents"
QT_MOC_LITERAL(1, 16, 19), // "OpenResourceRequest"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 9), // "Resource*"
QT_MOC_LITERAL(4, 47, 8), // "resource"
QT_MOC_LITERAL(5, 56, 17), // "line_to_scroll_to"
QT_MOC_LITERAL(6, 74, 21), // "position_to_scroll_to"
QT_MOC_LITERAL(7, 96, 27), // "caret_location_to_scroll_to"
QT_MOC_LITERAL(8, 124, 21), // "MainWindow::ViewState"
QT_MOC_LITERAL(9, 146, 10), // "view_state"
QT_MOC_LITERAL(10, 157, 8), // "fragment"
QT_MOC_LITERAL(11, 166, 7), // "SetBook"
QT_MOC_LITERAL(12, 174, 20), // "QSharedPointer<Book>"
QT_MOC_LITERAL(13, 195, 4), // "book"
QT_MOC_LITERAL(14, 200, 7), // "Refresh"
QT_MOC_LITERAL(15, 208, 17), // "StartRefreshDelay"
QT_MOC_LITERAL(16, 226, 19), // "RenumberTOCContents"
QT_MOC_LITERAL(17, 246, 12), // "GetRootEntry"
QT_MOC_LITERAL(18, 259, 18), // "TOCModel::TOCEntry"
QT_MOC_LITERAL(19, 278, 18), // "ItemClickedHandler"
QT_MOC_LITERAL(20, 297, 5) // "index"

    },
    "TableOfContents\0OpenResourceRequest\0"
    "\0Resource*\0resource\0line_to_scroll_to\0"
    "position_to_scroll_to\0caret_location_to_scroll_to\0"
    "MainWindow::ViewState\0view_state\0"
    "fragment\0SetBook\0QSharedPointer<Book>\0"
    "book\0Refresh\0StartRefreshDelay\0"
    "RenumberTOCContents\0GetRootEntry\0"
    "TOCModel::TOCEntry\0ItemClickedHandler\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TableOfContents[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   74,    2, 0x06 /* Public */,
       1,    5,   87,    2, 0x26 /* Public | MethodCloned */,
       1,    4,   98,    2, 0x26 /* Public | MethodCloned */,
       1,    3,  107,    2, 0x26 /* Public | MethodCloned */,
       1,    2,  114,    2, 0x26 /* Public | MethodCloned */,
       1,    1,  119,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  122,    2, 0x0a /* Public */,
      14,    0,  125,    2, 0x0a /* Public */,
      15,    0,  126,    2, 0x0a /* Public */,
      16,    0,  127,    2, 0x0a /* Public */,
      17,    0,  128,    2, 0x0a /* Public */,
      19,    1,  129,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::QString, 0x80000000 | 8, QMetaType::QUrl,    4,    5,    6,    7,    9,   10,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::QString, 0x80000000 | 8,    4,    5,    6,    7,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::QString,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 18,
    QMetaType::Void, QMetaType::QModelIndex,   20,

       0        // eod
};

void TableOfContents::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TableOfContents *_t = static_cast<TableOfContents *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OpenResourceRequest((*reinterpret_cast< Resource*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< MainWindow::ViewState(*)>(_a[5])),(*reinterpret_cast< const QUrl(*)>(_a[6]))); break;
        case 1: _t->OpenResourceRequest((*reinterpret_cast< Resource*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< MainWindow::ViewState(*)>(_a[5]))); break;
        case 2: _t->OpenResourceRequest((*reinterpret_cast< Resource*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 3: _t->OpenResourceRequest((*reinterpret_cast< Resource*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->OpenResourceRequest((*reinterpret_cast< Resource*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->OpenResourceRequest((*reinterpret_cast< Resource*(*)>(_a[1]))); break;
        case 6: _t->SetBook((*reinterpret_cast< QSharedPointer<Book>(*)>(_a[1]))); break;
        case 7: _t->Refresh(); break;
        case 8: _t->StartRefreshDelay(); break;
        case 9: _t->RenumberTOCContents(); break;
        case 10: { TOCModel::TOCEntry _r = _t->GetRootEntry();
            if (_a[0]) *reinterpret_cast< TOCModel::TOCEntry*>(_a[0]) = _r; }  break;
        case 11: _t->ItemClickedHandler((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Resource* >(); break;
            }
            break;
        case 6:
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
            typedef void (TableOfContents::*_t)(Resource * , int , int , const QString & , MainWindow::ViewState , const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TableOfContents::OpenResourceRequest)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject TableOfContents::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_TableOfContents.data,
      qt_meta_data_TableOfContents,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TableOfContents::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TableOfContents::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TableOfContents.stringdata0))
        return static_cast<void*>(const_cast< TableOfContents*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int TableOfContents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void TableOfContents::OpenResourceRequest(Resource * _t1, int _t2, int _t3, const QString & _t4, MainWindow::ViewState _t5, const QUrl & _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
