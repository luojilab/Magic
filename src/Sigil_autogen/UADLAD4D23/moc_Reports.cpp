/****************************************************************************
** Meta object code from reading C++ file 'Reports.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/Reports.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Reports.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Reports_t {
    QByteArrayData data[14];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Reports_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Reports_t qt_meta_stringdata_Reports = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Reports"
QT_MOC_LITERAL(1, 8, 7), // "Refresh"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 15), // "OpenFileRequest"
QT_MOC_LITERAL(4, 33, 18), // "DeleteFilesRequest"
QT_MOC_LITERAL(5, 52, 19), // "DeleteStylesRequest"
QT_MOC_LITERAL(6, 72, 30), // "QList<BookReports::StyleData*>"
QT_MOC_LITERAL(7, 103, 8), // "FindText"
QT_MOC_LITERAL(8, 112, 14), // "FindTextInTags"
QT_MOC_LITERAL(9, 127, 13), // "selectPWidget"
QT_MOC_LITERAL(10, 141, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(11, 158, 7), // "current"
QT_MOC_LITERAL(12, 166, 8), // "previous"
QT_MOC_LITERAL(13, 175, 12) // "saveSettings"

    },
    "Reports\0Refresh\0\0OpenFileRequest\0"
    "DeleteFilesRequest\0DeleteStylesRequest\0"
    "QList<BookReports::StyleData*>\0FindText\0"
    "FindTextInTags\0selectPWidget\0"
    "QListWidgetItem*\0current\0previous\0"
    "saveSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Reports[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    2,   60,    2, 0x06 /* Public */,
       4,    1,   65,    2, 0x06 /* Public */,
       5,    1,   68,    2, 0x06 /* Public */,
       7,    1,   71,    2, 0x06 /* Public */,
       8,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   77,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x28 /* Private | MethodCloned */,
      13,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void Reports::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Reports *_t = static_cast<Reports *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Refresh(); break;
        case 1: _t->OpenFileRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->DeleteFilesRequest((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->DeleteStylesRequest((*reinterpret_cast< QList<BookReports::StyleData*>(*)>(_a[1]))); break;
        case 4: _t->FindText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->FindTextInTags((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->selectPWidget((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 7: _t->selectPWidget((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->saveSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Reports::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Reports::Refresh)) {
                *result = 0;
            }
        }
        {
            typedef void (Reports::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Reports::OpenFileRequest)) {
                *result = 1;
            }
        }
        {
            typedef void (Reports::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Reports::DeleteFilesRequest)) {
                *result = 2;
            }
        }
        {
            typedef void (Reports::*_t)(QList<BookReports::StyleData*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Reports::DeleteStylesRequest)) {
                *result = 3;
            }
        }
        {
            typedef void (Reports::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Reports::FindText)) {
                *result = 4;
            }
        }
        {
            typedef void (Reports::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Reports::FindTextInTags)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject Reports::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Reports.data,
      qt_meta_data_Reports,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Reports::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Reports::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Reports.stringdata0))
        return static_cast<void*>(const_cast< Reports*>(this));
    return QDialog::qt_metacast(_clname);
}

int Reports::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void Reports::Refresh()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Reports::OpenFileRequest(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Reports::DeleteFilesRequest(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Reports::DeleteStylesRequest(QList<BookReports::StyleData*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Reports::FindText(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Reports::FindTextInTags(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
