/****************************************************************************
** Meta object code from reading C++ file 'ClassesInHTMLFilesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/ReportsWidgets/ClassesInHTMLFilesWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClassesInHTMLFilesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClassesInHTMLFilesWidget_t {
    QByteArrayData data[8];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClassesInHTMLFilesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClassesInHTMLFilesWidget_t qt_meta_stringdata_ClassesInHTMLFilesWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ClassesInHTMLFilesWidget"
QT_MOC_LITERAL(1, 25, 11), // "CloseDialog"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 15), // "OpenFileRequest"
QT_MOC_LITERAL(4, 54, 25), // "FilterEditTextChangedSlot"
QT_MOC_LITERAL(5, 80, 4), // "text"
QT_MOC_LITERAL(6, 85, 4), // "Save"
QT_MOC_LITERAL(7, 90, 11) // "DoubleClick"

    },
    "ClassesInHTMLFilesWidget\0CloseDialog\0"
    "\0OpenFileRequest\0FilterEditTextChangedSlot\0"
    "text\0Save\0DoubleClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClassesInHTMLFilesWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    2,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   45,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ClassesInHTMLFilesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClassesInHTMLFilesWidget *_t = static_cast<ClassesInHTMLFilesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseDialog(); break;
        case 1: _t->OpenFileRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->FilterEditTextChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->Save(); break;
        case 4: _t->DoubleClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClassesInHTMLFilesWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClassesInHTMLFilesWidget::CloseDialog)) {
                *result = 0;
            }
        }
        {
            typedef void (ClassesInHTMLFilesWidget::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClassesInHTMLFilesWidget::OpenFileRequest)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ClassesInHTMLFilesWidget::staticMetaObject = {
    { &ReportsWidget::staticMetaObject, qt_meta_stringdata_ClassesInHTMLFilesWidget.data,
      qt_meta_data_ClassesInHTMLFilesWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClassesInHTMLFilesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClassesInHTMLFilesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClassesInHTMLFilesWidget.stringdata0))
        return static_cast<void*>(const_cast< ClassesInHTMLFilesWidget*>(this));
    return ReportsWidget::qt_metacast(_clname);
}

int ClassesInHTMLFilesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReportsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ClassesInHTMLFilesWidget::CloseDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ClassesInHTMLFilesWidget::OpenFileRequest(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
