/****************************************************************************
** Meta object code from reading C++ file 'ClipboardHistorySelector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/ClipboardHistorySelector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClipboardHistorySelector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClipboardHistorySelector_t {
    QByteArrayData data[20];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClipboardHistorySelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClipboardHistorySelector_t qt_meta_stringdata_ClipboardHistorySelector = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ClipboardHistorySelector"
QT_MOC_LITERAL(1, 25, 12), // "PasteRequest"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "SaveClipboardState"
QT_MOC_LITERAL(4, 58, 21), // "RestoreClipboardState"
QT_MOC_LITERAL(5, 80, 13), // "buttonClicked"
QT_MOC_LITERAL(6, 94, 16), // "QAbstractButton*"
QT_MOC_LITERAL(7, 111, 6), // "button"
QT_MOC_LITERAL(8, 118, 9), // "showEvent"
QT_MOC_LITERAL(9, 128, 11), // "QShowEvent*"
QT_MOC_LITERAL(10, 140, 5), // "event"
QT_MOC_LITERAL(11, 146, 6), // "accept"
QT_MOC_LITERAL(12, 153, 6), // "reject"
QT_MOC_LITERAL(13, 160, 20), // "ApplicationActivated"
QT_MOC_LITERAL(14, 181, 22), // "ApplicationDeactivated"
QT_MOC_LITERAL(15, 204, 26), // "ClipboardItemDoubleClicked"
QT_MOC_LITERAL(16, 231, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(17, 249, 4), // "item"
QT_MOC_LITERAL(18, 254, 16), // "ClipboardChanged"
QT_MOC_LITERAL(19, 271, 19) // "TakeOwnershipOfClip"

    },
    "ClipboardHistorySelector\0PasteRequest\0"
    "\0SaveClipboardState\0RestoreClipboardState\0"
    "buttonClicked\0QAbstractButton*\0button\0"
    "showEvent\0QShowEvent*\0event\0accept\0"
    "reject\0ApplicationActivated\0"
    "ApplicationDeactivated\0"
    "ClipboardItemDoubleClicked\0QTableWidgetItem*\0"
    "item\0ClipboardChanged\0TakeOwnershipOfClip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClipboardHistorySelector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   77,    2, 0x0a /* Public */,
       4,    0,   78,    2, 0x0a /* Public */,
       5,    1,   79,    2, 0x0a /* Public */,
       8,    1,   82,    2, 0x09 /* Protected */,
      11,    0,   85,    2, 0x09 /* Protected */,
      12,    0,   86,    2, 0x09 /* Protected */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    1,   89,    2, 0x08 /* Private */,
      18,    0,   92,    2, 0x08 /* Private */,
      19,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ClipboardHistorySelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClipboardHistorySelector *_t = static_cast<ClipboardHistorySelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PasteRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->SaveClipboardState(); break;
        case 2: _t->RestoreClipboardState(); break;
        case 3: _t->buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 4: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 5: _t->accept(); break;
        case 6: _t->reject(); break;
        case 7: _t->ApplicationActivated(); break;
        case 8: _t->ApplicationDeactivated(); break;
        case 9: _t->ClipboardItemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->ClipboardChanged(); break;
        case 11: _t->TakeOwnershipOfClip(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClipboardHistorySelector::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClipboardHistorySelector::PasteRequest)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ClipboardHistorySelector::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ClipboardHistorySelector.data,
      qt_meta_data_ClipboardHistorySelector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClipboardHistorySelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClipboardHistorySelector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClipboardHistorySelector.stringdata0))
        return static_cast<void*>(const_cast< ClipboardHistorySelector*>(this));
    return QDialog::qt_metacast(_clname);
}

int ClipboardHistorySelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void ClipboardHistorySelector::PasteRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
