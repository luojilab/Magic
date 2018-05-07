/****************************************************************************
** Meta object code from reading C++ file 'CSSTab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Tabs/CSSTab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CSSTab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CSSTab_t {
    QByteArrayData data[15];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CSSTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CSSTab_t qt_meta_stringdata_CSSTab = {
    {
QT_MOC_LITERAL(0, 0, 6), // "CSSTab"
QT_MOC_LITERAL(1, 7, 10), // "CSSUpdated"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 4), // "Bold"
QT_MOC_LITERAL(4, 24, 6), // "Italic"
QT_MOC_LITERAL(5, 31, 9), // "Underline"
QT_MOC_LITERAL(6, 41, 13), // "Strikethrough"
QT_MOC_LITERAL(7, 55, 9), // "AlignLeft"
QT_MOC_LITERAL(8, 65, 11), // "AlignCenter"
QT_MOC_LITERAL(9, 77, 10), // "AlignRight"
QT_MOC_LITERAL(10, 88, 12), // "AlignJustify"
QT_MOC_LITERAL(11, 101, 24), // "TextDirectionLeftToRight"
QT_MOC_LITERAL(12, 126, 24), // "TextDirectionRightToLeft"
QT_MOC_LITERAL(13, 151, 20), // "TextDirectionDefault"
QT_MOC_LITERAL(14, 172, 14) // "EmitCSSUpdated"

    },
    "CSSTab\0CSSUpdated\0\0Bold\0Italic\0Underline\0"
    "Strikethrough\0AlignLeft\0AlignCenter\0"
    "AlignRight\0AlignJustify\0"
    "TextDirectionLeftToRight\0"
    "TextDirectionRightToLeft\0TextDirectionDefault\0"
    "EmitCSSUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CSSTab[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    0,   90,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CSSTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CSSTab *_t = static_cast<CSSTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CSSUpdated(); break;
        case 1: _t->Bold(); break;
        case 2: _t->Italic(); break;
        case 3: _t->Underline(); break;
        case 4: _t->Strikethrough(); break;
        case 5: _t->AlignLeft(); break;
        case 6: _t->AlignCenter(); break;
        case 7: _t->AlignRight(); break;
        case 8: _t->AlignJustify(); break;
        case 9: _t->TextDirectionLeftToRight(); break;
        case 10: _t->TextDirectionRightToLeft(); break;
        case 11: _t->TextDirectionDefault(); break;
        case 12: _t->EmitCSSUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CSSTab::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CSSTab::CSSUpdated)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CSSTab::staticMetaObject = {
    { &TextTab::staticMetaObject, qt_meta_stringdata_CSSTab.data,
      qt_meta_data_CSSTab,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CSSTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CSSTab::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CSSTab.stringdata0))
        return static_cast<void*>(const_cast< CSSTab*>(this));
    return TextTab::qt_metacast(_clname);
}

int CSSTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TextTab::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void CSSTab::CSSUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
