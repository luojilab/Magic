/****************************************************************************
** Meta object code from reading C++ file 'PluginWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/PreferenceWidgets/PluginWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PluginWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PluginWidget_t {
    QByteArrayData data[15];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PluginWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PluginWidget_t qt_meta_stringdata_PluginWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PluginWidget"
QT_MOC_LITERAL(1, 13, 9), // "addPlugin"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 18), // "bundledInterpReady"
QT_MOC_LITERAL(4, 43, 11), // "AutoFindPy3"
QT_MOC_LITERAL(5, 55, 6), // "SetPy3"
QT_MOC_LITERAL(6, 62, 20), // "enginePy3PathChanged"
QT_MOC_LITERAL(7, 83, 23), // "enable_disable_controls"
QT_MOC_LITERAL(8, 107, 20), // "useBundledPy3Changed"
QT_MOC_LITERAL(9, 128, 12), // "removePlugin"
QT_MOC_LITERAL(10, 141, 16), // "removeAllPlugins"
QT_MOC_LITERAL(11, 158, 14), // "pluginSelected"
QT_MOC_LITERAL(12, 173, 3), // "row"
QT_MOC_LITERAL(13, 177, 3), // "col"
QT_MOC_LITERAL(14, 181, 16) // "pluginMapChanged"

    },
    "PluginWidget\0addPlugin\0\0bundledInterpReady\0"
    "AutoFindPy3\0SetPy3\0enginePy3PathChanged\0"
    "enable_disable_controls\0useBundledPy3Changed\0"
    "removePlugin\0removeAllPlugins\0"
    "pluginSelected\0row\0col\0pluginMapChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PluginWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    1,   75,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,
      11,    2,   80,    2, 0x08 /* Private */,
      14,    1,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void PluginWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PluginWidget *_t = static_cast<PluginWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addPlugin(); break;
        case 1: { bool _r = _t->bundledInterpReady();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->AutoFindPy3(); break;
        case 3: _t->SetPy3(); break;
        case 4: _t->enginePy3PathChanged(); break;
        case 5: _t->enable_disable_controls(); break;
        case 6: _t->useBundledPy3Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->removePlugin(); break;
        case 8: _t->removeAllPlugins(); break;
        case 9: _t->pluginSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->pluginMapChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PluginWidget::staticMetaObject = {
    { &PreferencesWidget::staticMetaObject, qt_meta_stringdata_PluginWidget.data,
      qt_meta_data_PluginWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PluginWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PluginWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PluginWidget.stringdata0))
        return static_cast<void*>(const_cast< PluginWidget*>(this));
    return PreferencesWidget::qt_metacast(_clname);
}

int PluginWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PreferencesWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
