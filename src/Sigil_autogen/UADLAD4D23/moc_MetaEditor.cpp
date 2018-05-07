/****************************************************************************
** Meta object code from reading C++ file 'MetaEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/MetaEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MetaEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MetaEditor_t {
    QByteArrayData data[17];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MetaEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MetaEditor_t qt_meta_stringdata_MetaEditor = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MetaEditor"
QT_MOC_LITERAL(1, 11, 13), // "updateActions"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "reject"
QT_MOC_LITERAL(4, 33, 11), // "insertChild"
QT_MOC_LITERAL(5, 45, 4), // "code"
QT_MOC_LITERAL(6, 50, 8), // "contents"
QT_MOC_LITERAL(7, 59, 9), // "insertRow"
QT_MOC_LITERAL(8, 69, 9), // "removeRow"
QT_MOC_LITERAL(9, 79, 9), // "moveRowUp"
QT_MOC_LITERAL(10, 89, 11), // "moveRowDown"
QT_MOC_LITERAL(11, 101, 13), // "WriteSettings"
QT_MOC_LITERAL(12, 115, 8), // "saveData"
QT_MOC_LITERAL(13, 124, 13), // "selectElement"
QT_MOC_LITERAL(14, 138, 14), // "selectProperty"
QT_MOC_LITERAL(15, 153, 15), // "selectE2Element"
QT_MOC_LITERAL(16, 169, 16) // "selectE2Property"

    },
    "MetaEditor\0updateActions\0\0reject\0"
    "insertChild\0code\0contents\0insertRow\0"
    "removeRow\0moveRowUp\0moveRowDown\0"
    "WriteSettings\0saveData\0selectElement\0"
    "selectProperty\0selectE2Element\0"
    "selectE2Property"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MetaEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x09 /* Protected */,
       4,    2,   91,    2, 0x08 /* Private */,
       4,    1,   96,    2, 0x28 /* Private | MethodCloned */,
       7,    2,   99,    2, 0x08 /* Private */,
       7,    1,  104,    2, 0x28 /* Private | MethodCloned */,
       8,    0,  107,    2, 0x08 /* Private */,
       9,    0,  108,    2, 0x08 /* Private */,
      10,    0,  109,    2, 0x08 /* Private */,
      11,    0,  110,    2, 0x08 /* Private */,
      12,    0,  111,    2, 0x08 /* Private */,
      13,    0,  112,    2, 0x08 /* Private */,
      14,    0,  113,    2, 0x08 /* Private */,
      15,    0,  114,    2, 0x08 /* Private */,
      16,    0,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,
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

void MetaEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MetaEditor *_t = static_cast<MetaEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateActions(); break;
        case 1: _t->reject(); break;
        case 2: _t->insertChild((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->insertChild((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->insertRow((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->insertRow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->removeRow(); break;
        case 7: _t->moveRowUp(); break;
        case 8: _t->moveRowDown(); break;
        case 9: _t->WriteSettings(); break;
        case 10: _t->saveData(); break;
        case 11: _t->selectElement(); break;
        case 12: _t->selectProperty(); break;
        case 13: _t->selectE2Element(); break;
        case 14: _t->selectE2Property(); break;
        default: ;
        }
    }
}

const QMetaObject MetaEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MetaEditor.data,
      qt_meta_data_MetaEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MetaEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MetaEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MetaEditor.stringdata0))
        return static_cast<void*>(const_cast< MetaEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int MetaEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
