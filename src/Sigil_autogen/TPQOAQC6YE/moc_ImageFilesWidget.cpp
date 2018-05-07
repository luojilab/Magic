/****************************************************************************
** Meta object code from reading C++ file 'ImageFilesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/ReportsWidgets/ImageFilesWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageFilesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImageFilesWidget_t {
    QByteArrayData data[19];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageFilesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageFilesWidget_t qt_meta_stringdata_ImageFilesWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ImageFilesWidget"
QT_MOC_LITERAL(1, 17, 11), // "CloseDialog"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "DeleteFilesRequest"
QT_MOC_LITERAL(4, 49, 15), // "OpenFileRequest"
QT_MOC_LITERAL(5, 65, 14), // "FindTextInTags"
QT_MOC_LITERAL(6, 80, 15), // "OpenContextMenu"
QT_MOC_LITERAL(7, 96, 5), // "point"
QT_MOC_LITERAL(8, 102, 4), // "Sort"
QT_MOC_LITERAL(9, 107, 12), // "logicalindex"
QT_MOC_LITERAL(10, 120, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(11, 134, 5), // "order"
QT_MOC_LITERAL(12, 140, 25), // "FilterEditTextChangedSlot"
QT_MOC_LITERAL(13, 166, 4), // "text"
QT_MOC_LITERAL(14, 171, 21), // "IncreaseThumbnailSize"
QT_MOC_LITERAL(15, 193, 21), // "DecreaseThumbnailSize"
QT_MOC_LITERAL(16, 215, 6), // "Delete"
QT_MOC_LITERAL(17, 222, 11), // "DoubleClick"
QT_MOC_LITERAL(18, 234, 4) // "Save"

    },
    "ImageFilesWidget\0CloseDialog\0\0"
    "DeleteFilesRequest\0OpenFileRequest\0"
    "FindTextInTags\0OpenContextMenu\0point\0"
    "Sort\0logicalindex\0Qt::SortOrder\0order\0"
    "FilterEditTextChangedSlot\0text\0"
    "IncreaseThumbnailSize\0DecreaseThumbnailSize\0"
    "Delete\0DoubleClick\0Save"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageFilesWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       4,    2,   78,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   86,    2, 0x08 /* Private */,
       8,    2,   89,    2, 0x08 /* Private */,
      12,    1,   94,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,
      17,    0,  100,    2, 0x08 /* Private */,
      18,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ImageFilesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImageFilesWidget *_t = static_cast<ImageFilesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseDialog(); break;
        case 1: _t->DeleteFilesRequest((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->OpenFileRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->FindTextInTags((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->OpenContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->Sort((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 6: _t->FilterEditTextChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->IncreaseThumbnailSize(); break;
        case 8: _t->DecreaseThumbnailSize(); break;
        case 9: _t->Delete(); break;
        case 10: _t->DoubleClick(); break;
        case 11: _t->Save(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ImageFilesWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageFilesWidget::CloseDialog)) {
                *result = 0;
            }
        }
        {
            typedef void (ImageFilesWidget::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageFilesWidget::DeleteFilesRequest)) {
                *result = 1;
            }
        }
        {
            typedef void (ImageFilesWidget::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageFilesWidget::OpenFileRequest)) {
                *result = 2;
            }
        }
        {
            typedef void (ImageFilesWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageFilesWidget::FindTextInTags)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject ImageFilesWidget::staticMetaObject = {
    { &ReportsWidget::staticMetaObject, qt_meta_stringdata_ImageFilesWidget.data,
      qt_meta_data_ImageFilesWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImageFilesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageFilesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImageFilesWidget.stringdata0))
        return static_cast<void*>(const_cast< ImageFilesWidget*>(this));
    return ReportsWidget::qt_metacast(_clname);
}

int ImageFilesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReportsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ImageFilesWidget::CloseDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ImageFilesWidget::DeleteFilesRequest(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ImageFilesWidget::OpenFileRequest(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ImageFilesWidget::FindTextInTags(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
