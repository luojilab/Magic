/****************************************************************************
** Meta object code from reading C++ file 'BookBrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MainUI/BookBrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BookBrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BookBrowser_t {
    QByteArrayData data[69];
    char stringdata0[996];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookBrowser_t qt_meta_stringdata_BookBrowser = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BookBrowser"
QT_MOC_LITERAL(1, 12, 24), // "ShowStatusMessageRequest"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "message"
QT_MOC_LITERAL(4, 46, 8), // "duration"
QT_MOC_LITERAL(5, 55, 17), // "ResourceActivated"
QT_MOC_LITERAL(6, 73, 9), // "Resource*"
QT_MOC_LITERAL(7, 83, 8), // "resource"
QT_MOC_LITERAL(8, 92, 16), // "RemoveTabRequest"
QT_MOC_LITERAL(9, 109, 26), // "RenumberTOCContentsRequest"
QT_MOC_LITERAL(10, 136, 19), // "BookContentModified"
QT_MOC_LITERAL(11, 156, 14), // "ResourcesAdded"
QT_MOC_LITERAL(12, 171, 16), // "ResourcesDeleted"
QT_MOC_LITERAL(13, 188, 22), // "UpdateBrowserSelection"
QT_MOC_LITERAL(14, 211, 21), // "MergeResourcesRequest"
QT_MOC_LITERAL(15, 233, 16), // "QList<Resource*>"
QT_MOC_LITERAL(16, 250, 9), // "resources"
QT_MOC_LITERAL(17, 260, 33), // "LinkStylesheetsToResourcesReq..."
QT_MOC_LITERAL(18, 294, 22), // "RemoveResourcesRequest"
QT_MOC_LITERAL(19, 317, 15), // "OpenFileRequest"
QT_MOC_LITERAL(20, 333, 7), // "SetBook"
QT_MOC_LITERAL(21, 341, 20), // "QSharedPointer<Book>"
QT_MOC_LITERAL(22, 362, 4), // "book"
QT_MOC_LITERAL(23, 367, 7), // "Refresh"
QT_MOC_LITERAL(24, 375, 11), // "RenumberTOC"
QT_MOC_LITERAL(25, 387, 16), // "PreviousResource"
QT_MOC_LITERAL(26, 404, 12), // "NextResource"
QT_MOC_LITERAL(27, 417, 14), // "GetUrlResource"
QT_MOC_LITERAL(28, 432, 3), // "url"
QT_MOC_LITERAL(29, 436, 8), // "CopyHTML"
QT_MOC_LITERAL(30, 445, 7), // "CopyCSS"
QT_MOC_LITERAL(31, 453, 10), // "AddNewHTML"
QT_MOC_LITERAL(32, 464, 9), // "AddNewCSS"
QT_MOC_LITERAL(33, 474, 9), // "AddNewSVG"
QT_MOC_LITERAL(34, 484, 20), // "CreateHTMLTOCCSSFile"
QT_MOC_LITERAL(35, 505, 18), // "CreateIndexCSSFile"
QT_MOC_LITERAL(36, 524, 11), // "AddExisting"
QT_MOC_LITERAL(37, 536, 15), // "only_multimedia"
QT_MOC_LITERAL(38, 552, 11), // "only_images"
QT_MOC_LITERAL(39, 564, 8), // "SortHTML"
QT_MOC_LITERAL(40, 573, 9), // "SelectAll"
QT_MOC_LITERAL(41, 583, 21), // "SelectRenamedResource"
QT_MOC_LITERAL(42, 605, 9), // "SaveAsUrl"
QT_MOC_LITERAL(43, 615, 21), // "EmitResourceActivated"
QT_MOC_LITERAL(44, 637, 5), // "index"
QT_MOC_LITERAL(45, 643, 15), // "OpenContextMenu"
QT_MOC_LITERAL(46, 659, 5), // "point"
QT_MOC_LITERAL(47, 665, 6), // "AddNew"
QT_MOC_LITERAL(48, 672, 6), // "SaveAs"
QT_MOC_LITERAL(49, 679, 10), // "SaveAsFile"
QT_MOC_LITERAL(50, 690, 11), // "SaveAsFiles"
QT_MOC_LITERAL(51, 702, 8), // "OpenWith"
QT_MOC_LITERAL(52, 711, 14), // "OpenWithEditor"
QT_MOC_LITERAL(53, 726, 6), // "Rename"
QT_MOC_LITERAL(54, 733, 29), // "GetFirstAvailableTemplateName"
QT_MOC_LITERAL(55, 763, 4), // "base"
QT_MOC_LITERAL(56, 768, 13), // "number_string"
QT_MOC_LITERAL(57, 782, 14), // "RenameSelected"
QT_MOC_LITERAL(58, 797, 6), // "Delete"
QT_MOC_LITERAL(59, 804, 27), // "ResourceToSelectAfterRemove"
QT_MOC_LITERAL(60, 832, 18), // "selected_resources"
QT_MOC_LITERAL(61, 851, 13), // "SetCoverImage"
QT_MOC_LITERAL(62, 865, 15), // "AddSemanticCode"
QT_MOC_LITERAL(63, 881, 5), // "Merge"
QT_MOC_LITERAL(64, 887, 15), // "LinkStylesheets"
QT_MOC_LITERAL(65, 903, 19), // "NoObfuscationMethod"
QT_MOC_LITERAL(66, 923, 23), // "AdobesObfuscationMethod"
QT_MOC_LITERAL(67, 947, 22), // "IdpfsObfuscationMethod"
QT_MOC_LITERAL(68, 970, 25) // "ValidateStylesheetWithW3C"

    },
    "BookBrowser\0ShowStatusMessageRequest\0"
    "\0message\0duration\0ResourceActivated\0"
    "Resource*\0resource\0RemoveTabRequest\0"
    "RenumberTOCContentsRequest\0"
    "BookContentModified\0ResourcesAdded\0"
    "ResourcesDeleted\0UpdateBrowserSelection\0"
    "MergeResourcesRequest\0QList<Resource*>\0"
    "resources\0LinkStylesheetsToResourcesRequest\0"
    "RemoveResourcesRequest\0OpenFileRequest\0"
    "SetBook\0QSharedPointer<Book>\0book\0"
    "Refresh\0RenumberTOC\0PreviousResource\0"
    "NextResource\0GetUrlResource\0url\0"
    "CopyHTML\0CopyCSS\0AddNewHTML\0AddNewCSS\0"
    "AddNewSVG\0CreateHTMLTOCCSSFile\0"
    "CreateIndexCSSFile\0AddExisting\0"
    "only_multimedia\0only_images\0SortHTML\0"
    "SelectAll\0SelectRenamedResource\0"
    "SaveAsUrl\0EmitResourceActivated\0index\0"
    "OpenContextMenu\0point\0AddNew\0SaveAs\0"
    "SaveAsFile\0SaveAsFiles\0OpenWith\0"
    "OpenWithEditor\0Rename\0"
    "GetFirstAvailableTemplateName\0base\0"
    "number_string\0RenameSelected\0Delete\0"
    "ResourceToSelectAfterRemove\0"
    "selected_resources\0SetCoverImage\0"
    "AddSemanticCode\0Merge\0LinkStylesheets\0"
    "NoObfuscationMethod\0AdobesObfuscationMethod\0"
    "IdpfsObfuscationMethod\0ValidateStylesheetWithW3C"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookBrowser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  284,    2, 0x06 /* Public */,
       1,    1,  289,    2, 0x26 /* Public | MethodCloned */,
       5,    1,  292,    2, 0x06 /* Public */,
       8,    0,  295,    2, 0x06 /* Public */,
       9,    0,  296,    2, 0x06 /* Public */,
      10,    0,  297,    2, 0x06 /* Public */,
      11,    0,  298,    2, 0x06 /* Public */,
      12,    0,  299,    2, 0x06 /* Public */,
      13,    0,  300,    2, 0x06 /* Public */,
      14,    1,  301,    2, 0x06 /* Public */,
      17,    1,  304,    2, 0x06 /* Public */,
      18,    0,  307,    2, 0x06 /* Public */,
      19,    2,  308,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    1,  313,    2, 0x0a /* Public */,
      23,    0,  316,    2, 0x0a /* Public */,
      24,    0,  317,    2, 0x0a /* Public */,
      25,    0,  318,    2, 0x0a /* Public */,
      26,    0,  319,    2, 0x0a /* Public */,
      27,    1,  320,    2, 0x0a /* Public */,
      29,    0,  323,    2, 0x0a /* Public */,
      30,    0,  324,    2, 0x0a /* Public */,
      31,    0,  325,    2, 0x0a /* Public */,
      32,    0,  326,    2, 0x0a /* Public */,
      33,    0,  327,    2, 0x0a /* Public */,
      34,    0,  328,    2, 0x0a /* Public */,
      35,    0,  329,    2, 0x0a /* Public */,
      36,    2,  330,    2, 0x0a /* Public */,
      36,    1,  335,    2, 0x2a /* Public | MethodCloned */,
      36,    0,  338,    2, 0x2a /* Public | MethodCloned */,
      39,    0,  339,    2, 0x0a /* Public */,
      40,    0,  340,    2, 0x0a /* Public */,
      41,    0,  341,    2, 0x0a /* Public */,
      42,    1,  342,    2, 0x0a /* Public */,
      43,    1,  345,    2, 0x08 /* Private */,
      45,    1,  348,    2, 0x08 /* Private */,
      47,    0,  351,    2, 0x08 /* Private */,
      48,    0,  352,    2, 0x08 /* Private */,
      49,    1,  353,    2, 0x08 /* Private */,
      50,    0,  356,    2, 0x08 /* Private */,
      51,    0,  357,    2, 0x08 /* Private */,
      52,    0,  358,    2, 0x08 /* Private */,
      53,    0,  359,    2, 0x08 /* Private */,
      54,    2,  360,    2, 0x08 /* Private */,
      57,    0,  365,    2, 0x08 /* Private */,
      58,    0,  366,    2, 0x08 /* Private */,
      59,    1,  367,    2, 0x08 /* Private */,
      61,    0,  370,    2, 0x08 /* Private */,
      62,    0,  371,    2, 0x08 /* Private */,
      63,    0,  372,    2, 0x08 /* Private */,
      64,    0,  373,    2, 0x08 /* Private */,
      65,    0,  374,    2, 0x08 /* Private */,
      66,    0,  375,    2, 0x08 /* Private */,
      67,    0,  376,    2, 0x08 /* Private */,
      68,    0,  377,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 6, QMetaType::QUrl,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QStringList, QMetaType::Bool, QMetaType::Bool,   37,   38,
    QMetaType::QStringList, QMetaType::Bool,   37,
    QMetaType::QStringList,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   28,
    QMetaType::Void, QMetaType::QModelIndex,   44,
    QMetaType::Void, QMetaType::QPoint,   46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   55,   56,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 6, 0x80000000 | 15,   60,
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

void BookBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookBrowser *_t = static_cast<BookBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowStatusMessageRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->ShowStatusMessageRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->ResourceActivated((*reinterpret_cast< Resource*(*)>(_a[1]))); break;
        case 3: _t->RemoveTabRequest(); break;
        case 4: _t->RenumberTOCContentsRequest(); break;
        case 5: _t->BookContentModified(); break;
        case 6: _t->ResourcesAdded(); break;
        case 7: _t->ResourcesDeleted(); break;
        case 8: _t->UpdateBrowserSelection(); break;
        case 9: _t->MergeResourcesRequest((*reinterpret_cast< QList<Resource*>(*)>(_a[1]))); break;
        case 10: _t->LinkStylesheetsToResourcesRequest((*reinterpret_cast< QList<Resource*>(*)>(_a[1]))); break;
        case 11: _t->RemoveResourcesRequest(); break;
        case 12: _t->OpenFileRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->SetBook((*reinterpret_cast< QSharedPointer<Book>(*)>(_a[1]))); break;
        case 14: _t->Refresh(); break;
        case 15: _t->RenumberTOC(); break;
        case 16: _t->PreviousResource(); break;
        case 17: _t->NextResource(); break;
        case 18: { Resource* _r = _t->GetUrlResource((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Resource**>(_a[0]) = _r; }  break;
        case 19: _t->CopyHTML(); break;
        case 20: _t->CopyCSS(); break;
        case 21: _t->AddNewHTML(); break;
        case 22: _t->AddNewCSS(); break;
        case 23: _t->AddNewSVG(); break;
        case 24: _t->CreateHTMLTOCCSSFile(); break;
        case 25: _t->CreateIndexCSSFile(); break;
        case 26: { QStringList _r = _t->AddExisting((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 27: { QStringList _r = _t->AddExisting((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 28: { QStringList _r = _t->AddExisting();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 29: _t->SortHTML(); break;
        case 30: _t->SelectAll(); break;
        case 31: _t->SelectRenamedResource(); break;
        case 32: _t->SaveAsUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 33: _t->EmitResourceActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 34: _t->OpenContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 35: _t->AddNew(); break;
        case 36: _t->SaveAs(); break;
        case 37: _t->SaveAsFile((*reinterpret_cast< Resource*(*)>(_a[1]))); break;
        case 38: _t->SaveAsFiles(); break;
        case 39: _t->OpenWith(); break;
        case 40: _t->OpenWithEditor(); break;
        case 41: _t->Rename(); break;
        case 42: { QString _r = _t->GetFirstAvailableTemplateName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 43: _t->RenameSelected(); break;
        case 44: _t->Delete(); break;
        case 45: { Resource* _r = _t->ResourceToSelectAfterRemove((*reinterpret_cast< QList<Resource*>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Resource**>(_a[0]) = _r; }  break;
        case 46: _t->SetCoverImage(); break;
        case 47: _t->AddSemanticCode(); break;
        case 48: _t->Merge(); break;
        case 49: _t->LinkStylesheets(); break;
        case 50: _t->NoObfuscationMethod(); break;
        case 51: _t->AdobesObfuscationMethod(); break;
        case 52: _t->IdpfsObfuscationMethod(); break;
        case 53: _t->ValidateStylesheetWithW3C(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Resource* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Resource*> >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Resource*> >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<Book> >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Resource* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Resource*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BookBrowser::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookBrowser::ShowStatusMessageRequest)) {
                *result = 0;
            }
        }
        {
            typedef void (BookBrowser::*_t)(Resource * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookBrowser::ResourceActivated)) {
                *result = 2;
            }
        }
        {
            typedef void (BookBrowser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookBrowser::RemoveTabRequest)) {
                *result = 3;
            }
        }
        {
            typedef void (BookBrowser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookBrowser::RenumberTOCContentsRequest)) {
                *result = 4;
            }
        }
        {
            typedef void (BookBrowser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookBrowser::BookContentModified)) {
                *result = 5;
            }
        }
        {
            typedef void (BookBrowser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookBrowser::ResourcesAdded)) {
                *result = 6;
            }
        }
        {
            typedef void (BookBrowser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookBrowser::ResourcesDeleted)) {
                *result = 7;
            }
        }
        {
            typedef void (BookBrowser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookBrowser::UpdateBrowserSelection)) {
                *result = 8;
            }
        }
        {
            typedef void (BookBrowser::*_t)(QList<Resource*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookBrowser::MergeResourcesRequest)) {
                *result = 9;
            }
        }
        {
            typedef void (BookBrowser::*_t)(QList<Resource*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookBrowser::LinkStylesheetsToResourcesRequest)) {
                *result = 10;
            }
        }
        {
            typedef void (BookBrowser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookBrowser::RemoveResourcesRequest)) {
                *result = 11;
            }
        }
        {
            typedef void (BookBrowser::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookBrowser::OpenFileRequest)) {
                *result = 12;
            }
        }
    }
}

const QMetaObject BookBrowser::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_BookBrowser.data,
      qt_meta_data_BookBrowser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BookBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BookBrowser.stringdata0))
        return static_cast<void*>(const_cast< BookBrowser*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int BookBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void BookBrowser::ShowStatusMessageRequest(const QString & _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void BookBrowser::ResourceActivated(Resource * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BookBrowser::RemoveTabRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void BookBrowser::RenumberTOCContentsRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void BookBrowser::BookContentModified()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void BookBrowser::ResourcesAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void BookBrowser::ResourcesDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void BookBrowser::UpdateBrowserSelection()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void BookBrowser::MergeResourcesRequest(QList<Resource*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void BookBrowser::LinkStylesheetsToResourcesRequest(QList<Resource*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void BookBrowser::RemoveResourcesRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}

// SIGNAL 12
void BookBrowser::OpenFileRequest(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
