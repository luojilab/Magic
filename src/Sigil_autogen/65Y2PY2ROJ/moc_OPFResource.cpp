/****************************************************************************
** Meta object code from reading C++ file 'OPFResource.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ResourceObjects/OPFResource.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OPFResource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OPFResource_t {
    QByteArrayData data[28];
    char stringdata0[437];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPFResource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPFResource_t qt_meta_stringdata_OPFResource = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OPFResource"
QT_MOC_LITERAL(1, 12, 13), // "SetDCMetadata"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "QList<MetaEntry>"
QT_MOC_LITERAL(4, 44, 8), // "metadata"
QT_MOC_LITERAL(5, 53, 11), // "AddResource"
QT_MOC_LITERAL(6, 65, 15), // "const Resource*"
QT_MOC_LITERAL(7, 81, 8), // "resource"
QT_MOC_LITERAL(8, 90, 14), // "RemoveResource"
QT_MOC_LITERAL(9, 105, 20), // "AddGuideSemanticCode"
QT_MOC_LITERAL(10, 126, 13), // "HTMLResource*"
QT_MOC_LITERAL(11, 140, 13), // "html_resource"
QT_MOC_LITERAL(12, 154, 4), // "code"
QT_MOC_LITERAL(13, 159, 6), // "toggle"
QT_MOC_LITERAL(14, 166, 23), // "SetResourceAsCoverImage"
QT_MOC_LITERAL(15, 190, 14), // "ImageResource*"
QT_MOC_LITERAL(16, 205, 14), // "image_resource"
QT_MOC_LITERAL(17, 220, 16), // "UpdateSpineOrder"
QT_MOC_LITERAL(18, 237, 20), // "QList<HTMLResource*>"
QT_MOC_LITERAL(19, 258, 10), // "html_files"
QT_MOC_LITERAL(20, 269, 15), // "ResourceRenamed"
QT_MOC_LITERAL(21, 285, 13), // "old_full_path"
QT_MOC_LITERAL(22, 299, 24), // "UpdateManifestProperties"
QT_MOC_LITERAL(23, 324, 16), // "QList<Resource*>"
QT_MOC_LITERAL(24, 341, 9), // "resources"
QT_MOC_LITERAL(25, 351, 32), // "GetManifestPropertiesForResource"
QT_MOC_LITERAL(26, 384, 29), // "GetManifestPropertiesForPaths"
QT_MOC_LITERAL(27, 414, 22) // "QHash<QString,QString>"

    },
    "OPFResource\0SetDCMetadata\0\0QList<MetaEntry>\0"
    "metadata\0AddResource\0const Resource*\0"
    "resource\0RemoveResource\0AddGuideSemanticCode\0"
    "HTMLResource*\0html_resource\0code\0"
    "toggle\0SetResourceAsCoverImage\0"
    "ImageResource*\0image_resource\0"
    "UpdateSpineOrder\0QList<HTMLResource*>\0"
    "html_files\0ResourceRenamed\0old_full_path\0"
    "UpdateManifestProperties\0QList<Resource*>\0"
    "resources\0GetManifestPropertiesForResource\0"
    "GetManifestPropertiesForPaths\0"
    "QHash<QString,QString>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPFResource[] = {

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
       1,    1,   69,    2, 0x0a /* Public */,
       5,    1,   72,    2, 0x0a /* Public */,
       8,    1,   75,    2, 0x0a /* Public */,
       9,    3,   78,    2, 0x0a /* Public */,
       9,    2,   85,    2, 0x2a /* Public | MethodCloned */,
      14,    1,   90,    2, 0x0a /* Public */,
      17,    1,   93,    2, 0x0a /* Public */,
      20,    2,   96,    2, 0x0a /* Public */,
      22,    1,  101,    2, 0x0a /* Public */,
      25,    1,  104,    2, 0x0a /* Public */,
      26,    0,  107,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString, QMetaType::Bool,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString,   11,   12,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::QString, 0x80000000 | 6,    7,
    0x80000000 | 27,

       0        // eod
};

void OPFResource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OPFResource *_t = static_cast<OPFResource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetDCMetadata((*reinterpret_cast< const QList<MetaEntry>(*)>(_a[1]))); break;
        case 1: _t->AddResource((*reinterpret_cast< const Resource*(*)>(_a[1]))); break;
        case 2: _t->RemoveResource((*reinterpret_cast< const Resource*(*)>(_a[1]))); break;
        case 3: _t->AddGuideSemanticCode((*reinterpret_cast< HTMLResource*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->AddGuideSemanticCode((*reinterpret_cast< HTMLResource*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->SetResourceAsCoverImage((*reinterpret_cast< ImageResource*(*)>(_a[1]))); break;
        case 6: _t->UpdateSpineOrder((*reinterpret_cast< const QList<HTMLResource*>(*)>(_a[1]))); break;
        case 7: _t->ResourceRenamed((*reinterpret_cast< const Resource*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->UpdateManifestProperties((*reinterpret_cast< const QList<Resource*>(*)>(_a[1]))); break;
        case 9: { QString _r = _t->GetManifestPropertiesForResource((*reinterpret_cast< const Resource*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QHash<QString,QString> _r = _t->GetManifestPropertiesForPaths();
            if (_a[0]) *reinterpret_cast< QHash<QString,QString>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Resource*> >(); break;
            }
            break;
        }
    }
}

const QMetaObject OPFResource::staticMetaObject = {
    { &XMLResource::staticMetaObject, qt_meta_stringdata_OPFResource.data,
      qt_meta_data_OPFResource,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OPFResource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPFResource::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OPFResource.stringdata0))
        return static_cast<void*>(const_cast< OPFResource*>(this));
    return XMLResource::qt_metacast(_clname);
}

int OPFResource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XMLResource::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
