/****************************************************************************
** Meta object code from reading C++ file 'SpellcheckEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialogs/SpellcheckEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpellcheckEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SpellcheckEditor_t {
    QByteArrayData data[40];
    char stringdata0[500];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpellcheckEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpellcheckEditor_t qt_meta_stringdata_SpellcheckEditor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SpellcheckEditor"
QT_MOC_LITERAL(1, 17, 24), // "ShowStatusMessageRequest"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 7), // "message"
QT_MOC_LITERAL(4, 51, 31), // "SpellingHighlightRefreshRequest"
QT_MOC_LITERAL(5, 83, 15), // "FindWordRequest"
QT_MOC_LITERAL(6, 99, 4), // "word"
QT_MOC_LITERAL(7, 104, 17), // "UpdateWordRequest"
QT_MOC_LITERAL(8, 122, 8), // "old_word"
QT_MOC_LITERAL(9, 131, 8), // "new_word"
QT_MOC_LITERAL(10, 140, 7), // "Refresh"
QT_MOC_LITERAL(11, 148, 11), // "sort_column"
QT_MOC_LITERAL(12, 160, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(13, 174, 10), // "sort_order"
QT_MOC_LITERAL(14, 185, 9), // "showEvent"
QT_MOC_LITERAL(15, 195, 11), // "QShowEvent*"
QT_MOC_LITERAL(16, 207, 5), // "event"
QT_MOC_LITERAL(17, 213, 16), // "FindSelectedWord"
QT_MOC_LITERAL(18, 230, 16), // "SelectionChanged"
QT_MOC_LITERAL(19, 247, 14), // "QItemSelection"
QT_MOC_LITERAL(20, 262, 8), // "selected"
QT_MOC_LITERAL(21, 271, 10), // "deselected"
QT_MOC_LITERAL(22, 282, 17), // "UpdateSuggestions"
QT_MOC_LITERAL(23, 300, 17), // "DictionaryChanged"
QT_MOC_LITERAL(24, 318, 10), // "dictionary"
QT_MOC_LITERAL(25, 329, 11), // "ChangeState"
QT_MOC_LITERAL(26, 341, 5), // "state"
QT_MOC_LITERAL(27, 347, 6), // "Ignore"
QT_MOC_LITERAL(28, 354, 3), // "Add"
QT_MOC_LITERAL(29, 358, 9), // "SelectAll"
QT_MOC_LITERAL(30, 368, 9), // "ChangeAll"
QT_MOC_LITERAL(31, 378, 18), // "toggleShowAllWords"
QT_MOC_LITERAL(32, 397, 25), // "toggleCaseInsensitiveSort"
QT_MOC_LITERAL(33, 423, 25), // "FilterEditTextChangedSlot"
QT_MOC_LITERAL(34, 449, 4), // "text"
QT_MOC_LITERAL(35, 454, 15), // "OpenContextMenu"
QT_MOC_LITERAL(36, 470, 5), // "point"
QT_MOC_LITERAL(37, 476, 4), // "Sort"
QT_MOC_LITERAL(38, 481, 12), // "logicalindex"
QT_MOC_LITERAL(39, 494, 5) // "order"

    },
    "SpellcheckEditor\0ShowStatusMessageRequest\0"
    "\0message\0SpellingHighlightRefreshRequest\0"
    "FindWordRequest\0word\0UpdateWordRequest\0"
    "old_word\0new_word\0Refresh\0sort_column\0"
    "Qt::SortOrder\0sort_order\0showEvent\0"
    "QShowEvent*\0event\0FindSelectedWord\0"
    "SelectionChanged\0QItemSelection\0"
    "selected\0deselected\0UpdateSuggestions\0"
    "DictionaryChanged\0dictionary\0ChangeState\0"
    "state\0Ignore\0Add\0SelectAll\0ChangeAll\0"
    "toggleShowAllWords\0toggleCaseInsensitiveSort\0"
    "FilterEditTextChangedSlot\0text\0"
    "OpenContextMenu\0point\0Sort\0logicalindex\0"
    "order"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpellcheckEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06 /* Public */,
       4,    0,  127,    2, 0x06 /* Public */,
       5,    1,  128,    2, 0x06 /* Public */,
       7,    2,  131,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,  136,    2, 0x0a /* Public */,
      10,    1,  141,    2, 0x2a /* Public | MethodCloned */,
      10,    0,  144,    2, 0x2a /* Public | MethodCloned */,
      14,    1,  145,    2, 0x09 /* Protected */,
      17,    0,  148,    2, 0x08 /* Private */,
      18,    2,  149,    2, 0x08 /* Private */,
      22,    0,  154,    2, 0x08 /* Private */,
      23,    1,  155,    2, 0x08 /* Private */,
      25,    1,  158,    2, 0x08 /* Private */,
      27,    0,  161,    2, 0x08 /* Private */,
      28,    0,  162,    2, 0x08 /* Private */,
      29,    0,  163,    2, 0x08 /* Private */,
      30,    0,  164,    2, 0x08 /* Private */,
      31,    0,  165,    2, 0x08 /* Private */,
      32,    0,  166,    2, 0x08 /* Private */,
      33,    1,  167,    2, 0x08 /* Private */,
      35,    1,  170,    2, 0x08 /* Private */,
      37,    2,  173,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12,   11,   13,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 19,   20,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QPoint,   36,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12,   38,   39,

       0        // eod
};

void SpellcheckEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpellcheckEditor *_t = static_cast<SpellcheckEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowStatusMessageRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->SpellingHighlightRefreshRequest(); break;
        case 2: _t->FindWordRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->UpdateWordRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->Refresh((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 5: _t->Refresh((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->Refresh(); break;
        case 7: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 8: _t->FindSelectedWord(); break;
        case 9: _t->SelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 10: _t->UpdateSuggestions(); break;
        case 11: _t->DictionaryChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->ChangeState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->Ignore(); break;
        case 14: _t->Add(); break;
        case 15: _t->SelectAll(); break;
        case 16: _t->ChangeAll(); break;
        case 17: _t->toggleShowAllWords(); break;
        case 18: _t->toggleCaseInsensitiveSort(); break;
        case 19: _t->FilterEditTextChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->OpenContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 21: _t->Sort((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SpellcheckEditor::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpellcheckEditor::ShowStatusMessageRequest)) {
                *result = 0;
            }
        }
        {
            typedef void (SpellcheckEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpellcheckEditor::SpellingHighlightRefreshRequest)) {
                *result = 1;
            }
        }
        {
            typedef void (SpellcheckEditor::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpellcheckEditor::FindWordRequest)) {
                *result = 2;
            }
        }
        {
            typedef void (SpellcheckEditor::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpellcheckEditor::UpdateWordRequest)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject SpellcheckEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SpellcheckEditor.data,
      qt_meta_data_SpellcheckEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SpellcheckEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpellcheckEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SpellcheckEditor.stringdata0))
        return static_cast<void*>(const_cast< SpellcheckEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int SpellcheckEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void SpellcheckEditor::ShowStatusMessageRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpellcheckEditor::SpellingHighlightRefreshRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SpellcheckEditor::FindWordRequest(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SpellcheckEditor::UpdateWordRequest(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
