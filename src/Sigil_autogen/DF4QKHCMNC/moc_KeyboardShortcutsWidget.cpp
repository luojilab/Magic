/****************************************************************************
** Meta object code from reading C++ file 'KeyboardShortcutsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/PreferenceWidgets/KeyboardShortcutsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KeyboardShortcutsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KeyboardShortcutsWidget_t {
    QByteArrayData data[12];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeyboardShortcutsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeyboardShortcutsWidget_t qt_meta_stringdata_KeyboardShortcutsWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "KeyboardShortcutsWidget"
QT_MOC_LITERAL(1, 24, 25), // "treeWidgetItemChangedSlot"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 68, 7), // "current"
QT_MOC_LITERAL(5, 76, 8), // "previous"
QT_MOC_LITERAL(6, 85, 19), // "removeButtonClicked"
QT_MOC_LITERAL(7, 105, 25), // "filterEditTextChangedSlot"
QT_MOC_LITERAL(8, 131, 4), // "text"
QT_MOC_LITERAL(9, 136, 25), // "targetEditTextChangedSlot"
QT_MOC_LITERAL(10, 162, 23), // "assignButtonClickedSlot"
QT_MOC_LITERAL(11, 186, 25) // "resetAllButtonClickedSlot"

    },
    "KeyboardShortcutsWidget\0"
    "treeWidgetItemChangedSlot\0\0QTreeWidgetItem*\0"
    "current\0previous\0removeButtonClicked\0"
    "filterEditTextChangedSlot\0text\0"
    "targetEditTextChangedSlot\0"
    "assignButtonClickedSlot\0"
    "resetAllButtonClickedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeyboardShortcutsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,
      10,    0,   56,    2, 0x08 /* Private */,
      11,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KeyboardShortcutsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KeyboardShortcutsWidget *_t = static_cast<KeyboardShortcutsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->treeWidgetItemChangedSlot((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->removeButtonClicked(); break;
        case 2: _t->filterEditTextChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->targetEditTextChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->assignButtonClickedSlot(); break;
        case 5: _t->resetAllButtonClickedSlot(); break;
        default: ;
        }
    }
}

const QMetaObject KeyboardShortcutsWidget::staticMetaObject = {
    { &PreferencesWidget::staticMetaObject, qt_meta_stringdata_KeyboardShortcutsWidget.data,
      qt_meta_data_KeyboardShortcutsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KeyboardShortcutsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeyboardShortcutsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KeyboardShortcutsWidget.stringdata0))
        return static_cast<void*>(const_cast< KeyboardShortcutsWidget*>(this));
    return PreferencesWidget::qt_metacast(_clname);
}

int KeyboardShortcutsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PreferencesWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
