/****************************************************************************
** Meta object code from reading C++ file 'PluginRunner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/PluginRunner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PluginRunner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PluginRunner_t {
    QByteArrayData data[15];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PluginRunner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PluginRunner_t qt_meta_stringdata_PluginRunner = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PluginRunner"
QT_MOC_LITERAL(1, 13, 4), // "exec"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 4), // "name"
QT_MOC_LITERAL(4, 24, 11), // "startPlugin"
QT_MOC_LITERAL(5, 36, 12), // "cancelPlugin"
QT_MOC_LITERAL(6, 49, 12), // "processError"
QT_MOC_LITERAL(7, 62, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(8, 85, 5), // "error"
QT_MOC_LITERAL(9, 91, 13), // "processOutput"
QT_MOC_LITERAL(10, 105, 14), // "pluginFinished"
QT_MOC_LITERAL(11, 120, 8), // "exitcode"
QT_MOC_LITERAL(12, 129, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(13, 150, 10), // "exitstatus"
QT_MOC_LITERAL(14, 161, 11) // "showConsole"

    },
    "PluginRunner\0exec\0\0name\0startPlugin\0"
    "cancelPlugin\0processError\0"
    "QProcess::ProcessError\0error\0processOutput\0"
    "pluginFinished\0exitcode\0QProcess::ExitStatus\0"
    "exitstatus\0showConsole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PluginRunner[] = {

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
       1,    1,   54,    2, 0x0a /* Public */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       6,    1,   60,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    2,   64,    2, 0x08 /* Private */,
      14,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Int, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12,   11,   13,
    QMetaType::Void,

       0        // eod
};

void PluginRunner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PluginRunner *_t = static_cast<PluginRunner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->exec((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->startPlugin(); break;
        case 2: _t->cancelPlugin(); break;
        case 3: _t->processError(); break;
        case 4: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 5: _t->processOutput(); break;
        case 6: _t->pluginFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 7: _t->showConsole(); break;
        default: ;
        }
    }
}

const QMetaObject PluginRunner::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PluginRunner.data,
      qt_meta_data_PluginRunner,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PluginRunner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PluginRunner::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PluginRunner.stringdata0))
        return static_cast<void*>(const_cast< PluginRunner*>(this));
    return QDialog::qt_metacast(_clname);
}

int PluginRunner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
