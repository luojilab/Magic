/****************************************************************************
** Meta object code from reading C++ file 'ClipsWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MainUI/ClipsWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClipsWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClipsWindow_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClipsWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClipsWindow_t qt_meta_stringdata_ClipsWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ClipsWindow"
QT_MOC_LITERAL(1, 12, 10), // "PasteClips"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 34), // "QList<ClipEditorModel::clipEn..."
QT_MOC_LITERAL(4, 59, 5), // "clips"
QT_MOC_LITERAL(5, 65, 18), // "ItemClickedHandler"
QT_MOC_LITERAL(6, 84, 5) // "index"

    },
    "ClipsWindow\0PasteClips\0\0"
    "QList<ClipEditorModel::clipEntry*>\0"
    "clips\0ItemClickedHandler\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClipsWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    6,

       0        // eod
};

void ClipsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClipsWindow *_t = static_cast<ClipsWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PasteClips((*reinterpret_cast< QList<ClipEditorModel::clipEntry*>(*)>(_a[1]))); break;
        case 1: _t->ItemClickedHandler((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClipsWindow::*_t)(QList<ClipEditorModel::clipEntry*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClipsWindow::PasteClips)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ClipsWindow::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_ClipsWindow.data,
      qt_meta_data_ClipsWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClipsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClipsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClipsWindow.stringdata0))
        return static_cast<void*>(const_cast< ClipsWindow*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int ClipsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ClipsWindow::PasteClips(QList<ClipEditorModel::clipEntry*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
