/****************************************************************************
** Meta object code from reading C++ file 'CharactersInHTMLFilesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/ReportsWidgets/CharactersInHTMLFilesWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CharactersInHTMLFilesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CharactersInHTMLFilesWidget_t {
    QByteArrayData data[10];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CharactersInHTMLFilesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CharactersInHTMLFilesWidget_t qt_meta_stringdata_CharactersInHTMLFilesWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "CharactersInHTMLFilesWidget"
QT_MOC_LITERAL(1, 28, 11), // "CloseDialog"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 15), // "OpenFileRequest"
QT_MOC_LITERAL(4, 57, 8), // "FindText"
QT_MOC_LITERAL(5, 66, 25), // "FilterEditTextChangedSlot"
QT_MOC_LITERAL(6, 92, 4), // "text"
QT_MOC_LITERAL(7, 97, 4), // "Save"
QT_MOC_LITERAL(8, 102, 11), // "DoubleClick"
QT_MOC_LITERAL(9, 114, 10) // "PageLoaded"

    },
    "CharactersInHTMLFilesWidget\0CloseDialog\0"
    "\0OpenFileRequest\0FindText\0"
    "FilterEditTextChangedSlot\0text\0Save\0"
    "DoubleClick\0PageLoaded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CharactersInHTMLFilesWidget[] = {

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
       3,    2,   50,    2, 0x06 /* Public */,
       4,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   58,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CharactersInHTMLFilesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CharactersInHTMLFilesWidget *_t = static_cast<CharactersInHTMLFilesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseDialog(); break;
        case 1: _t->OpenFileRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->FindText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->FilterEditTextChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->Save(); break;
        case 5: _t->DoubleClick(); break;
        case 6: _t->PageLoaded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CharactersInHTMLFilesWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CharactersInHTMLFilesWidget::CloseDialog)) {
                *result = 0;
            }
        }
        {
            typedef void (CharactersInHTMLFilesWidget::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CharactersInHTMLFilesWidget::OpenFileRequest)) {
                *result = 1;
            }
        }
        {
            typedef void (CharactersInHTMLFilesWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CharactersInHTMLFilesWidget::FindText)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject CharactersInHTMLFilesWidget::staticMetaObject = {
    { &ReportsWidget::staticMetaObject, qt_meta_stringdata_CharactersInHTMLFilesWidget.data,
      qt_meta_data_CharactersInHTMLFilesWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CharactersInHTMLFilesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CharactersInHTMLFilesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CharactersInHTMLFilesWidget.stringdata0))
        return static_cast<void*>(const_cast< CharactersInHTMLFilesWidget*>(this));
    return ReportsWidget::qt_metacast(_clname);
}

int CharactersInHTMLFilesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CharactersInHTMLFilesWidget::CloseDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CharactersInHTMLFilesWidget::OpenFileRequest(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CharactersInHTMLFilesWidget::FindText(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
