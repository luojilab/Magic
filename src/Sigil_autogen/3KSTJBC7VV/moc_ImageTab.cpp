/****************************************************************************
** Meta object code from reading C++ file 'ImageTab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Tabs/ImageTab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageTab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImageTab_t {
    QByteArrayData data[11];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageTab_t qt_meta_stringdata_ImageTab = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ImageTab"
QT_MOC_LITERAL(1, 9, 14), // "RefreshContent"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "openWith"
QT_MOC_LITERAL(4, 34, 14), // "openWithEditor"
QT_MOC_LITERAL(5, 49, 6), // "saveAs"
QT_MOC_LITERAL(6, 56, 9), // "copyImage"
QT_MOC_LITERAL(7, 66, 5), // "Print"
QT_MOC_LITERAL(8, 72, 12), // "PrintPreview"
QT_MOC_LITERAL(9, 85, 15), // "OpenContextMenu"
QT_MOC_LITERAL(10, 101, 5) // "point"

    },
    "ImageTab\0RefreshContent\0\0openWith\0"
    "openWithEditor\0saveAs\0copyImage\0Print\0"
    "PrintPreview\0OpenContextMenu\0point"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageTab[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   10,

       0        // eod
};

void ImageTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImageTab *_t = static_cast<ImageTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RefreshContent(); break;
        case 1: _t->openWith(); break;
        case 2: _t->openWithEditor(); break;
        case 3: _t->saveAs(); break;
        case 4: _t->copyImage(); break;
        case 5: _t->Print(); break;
        case 6: _t->PrintPreview(); break;
        case 7: _t->OpenContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ImageTab::staticMetaObject = {
    { &ContentTab::staticMetaObject, qt_meta_stringdata_ImageTab.data,
      qt_meta_data_ImageTab,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImageTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageTab::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImageTab.stringdata0))
        return static_cast<void*>(const_cast< ImageTab*>(this));
    return ContentTab::qt_metacast(_clname);
}

int ImageTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ContentTab::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
