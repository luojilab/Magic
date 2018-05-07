/****************************************************************************
** Meta object code from reading C++ file 'PasteTargetComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Misc/PasteTargetComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PasteTargetComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PasteTargetComboBox_t {
    QByteArrayData data[11];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PasteTargetComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PasteTargetComboBox_t qt_meta_stringdata_PasteTargetComboBox = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PasteTargetComboBox"
QT_MOC_LITERAL(1, 20, 20), // "ClipboardSaveRequest"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 23), // "ClipboardRestoreRequest"
QT_MOC_LITERAL(4, 66, 9), // "PasteText"
QT_MOC_LITERAL(5, 76, 4), // "text"
QT_MOC_LITERAL(6, 81, 16), // "PasteClipEntries"
QT_MOC_LITERAL(7, 98, 34), // "QList<ClipEditorModel::clipEn..."
QT_MOC_LITERAL(8, 133, 5), // "clips"
QT_MOC_LITERAL(9, 139, 15), // "PasteClipNumber"
QT_MOC_LITERAL(10, 155, 11) // "clip_number"

    },
    "PasteTargetComboBox\0ClipboardSaveRequest\0"
    "\0ClipboardRestoreRequest\0PasteText\0"
    "text\0PasteClipEntries\0"
    "QList<ClipEditorModel::clipEntry*>\0"
    "clips\0PasteClipNumber\0clip_number"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PasteTargetComboBox[] = {

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
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x0a /* Public */,
       6,    1,   44,    2, 0x0a /* Public */,
       9,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Bool, 0x80000000 | 7,    8,
    QMetaType::Bool, QMetaType::Int,   10,

       0        // eod
};

void PasteTargetComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PasteTargetComboBox *_t = static_cast<PasteTargetComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ClipboardSaveRequest(); break;
        case 1: _t->ClipboardRestoreRequest(); break;
        case 2: _t->PasteText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { bool _r = _t->PasteClipEntries((*reinterpret_cast< const QList<ClipEditorModel::clipEntry*>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->PasteClipNumber((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PasteTargetComboBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PasteTargetComboBox::ClipboardSaveRequest)) {
                *result = 0;
            }
        }
        {
            typedef void (PasteTargetComboBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PasteTargetComboBox::ClipboardRestoreRequest)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject PasteTargetComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_PasteTargetComboBox.data,
      qt_meta_data_PasteTargetComboBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PasteTargetComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PasteTargetComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PasteTargetComboBox.stringdata0))
        return static_cast<void*>(const_cast< PasteTargetComboBox*>(this));
    if (!strcmp(_clname, "PasteTarget"))
        return static_cast< PasteTarget*>(const_cast< PasteTargetComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int PasteTargetComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
void PasteTargetComboBox::ClipboardSaveRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void PasteTargetComboBox::ClipboardRestoreRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
