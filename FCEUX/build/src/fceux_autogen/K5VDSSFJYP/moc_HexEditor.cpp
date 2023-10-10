/****************************************************************************
** Meta object code from reading C++ file 'HexEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/HexEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HexEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HexBookMarkMenuAction_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HexBookMarkMenuAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HexBookMarkMenuAction_t qt_meta_stringdata_HexBookMarkMenuAction = {
    {
QT_MOC_LITERAL(0, 0, 21), // "HexBookMarkMenuAction"
QT_MOC_LITERAL(1, 22, 10), // "activateCB"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "HexBookMarkMenuAction\0activateCB\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HexBookMarkMenuAction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void HexBookMarkMenuAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HexBookMarkMenuAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activateCB(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HexBookMarkMenuAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_HexBookMarkMenuAction.data,
    qt_meta_data_HexBookMarkMenuAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HexBookMarkMenuAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HexBookMarkMenuAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HexBookMarkMenuAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int HexBookMarkMenuAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_QHexEdit_t {
    QByteArrayData data[15];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHexEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHexEdit_t qt_meta_stringdata_QHexEdit = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QHexEdit"
QT_MOC_LITERAL(1, 9, 17), // "changeFontRequest"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "jumpToROM"
QT_MOC_LITERAL(4, 38, 13), // "addBookMarkCB"
QT_MOC_LITERAL(5, 52, 11), // "addDebugSym"
QT_MOC_LITERAL(6, 64, 12), // "addRamReadBP"
QT_MOC_LITERAL(7, 77, 13), // "addRamWriteBP"
QT_MOC_LITERAL(8, 91, 15), // "addRamExecuteBP"
QT_MOC_LITERAL(9, 107, 12), // "addPpuReadBP"
QT_MOC_LITERAL(10, 120, 13), // "addPpuWriteBP"
QT_MOC_LITERAL(11, 134, 9), // "frzRamSet"
QT_MOC_LITERAL(12, 144, 11), // "frzRamUnset"
QT_MOC_LITERAL(13, 156, 12), // "frzRamToggle"
QT_MOC_LITERAL(14, 169, 14) // "frzRamUnsetAll"

    },
    "QHexEdit\0changeFontRequest\0\0jumpToROM\0"
    "addBookMarkCB\0addDebugSym\0addRamReadBP\0"
    "addRamWriteBP\0addRamExecuteBP\0"
    "addPpuReadBP\0addPpuWriteBP\0frzRamSet\0"
    "frzRamUnset\0frzRamToggle\0frzRamUnsetAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHexEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void QHexEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QHexEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeFontRequest(); break;
        case 1: _t->jumpToROM(); break;
        case 2: _t->addBookMarkCB(); break;
        case 3: _t->addDebugSym(); break;
        case 4: _t->addRamReadBP(); break;
        case 5: _t->addRamWriteBP(); break;
        case 6: _t->addRamExecuteBP(); break;
        case 7: _t->addPpuReadBP(); break;
        case 8: _t->addPpuWriteBP(); break;
        case 9: _t->frzRamSet(); break;
        case 10: _t->frzRamUnset(); break;
        case 11: _t->frzRamToggle(); break;
        case 12: _t->frzRamUnsetAll(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QHexEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QHexEdit.data,
    qt_meta_data_QHexEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QHexEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHexEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QHexEdit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QHexEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
struct qt_meta_stringdata_HexEditorFindDialog_t_t {
    QByteArrayData data[4];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HexEditorFindDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HexEditorFindDialog_t_t qt_meta_stringdata_HexEditorFindDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 21), // "HexEditorFindDialog_t"
QT_MOC_LITERAL(1, 22, 11), // "closeWindow"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9) // "runSearch"

    },
    "HexEditorFindDialog_t\0closeWindow\0\0"
    "runSearch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HexEditorFindDialog_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HexEditorFindDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HexEditorFindDialog_t *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->runSearch(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HexEditorFindDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_HexEditorFindDialog_t.data,
    qt_meta_data_HexEditorFindDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HexEditorFindDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HexEditorFindDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HexEditorFindDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int HexEditorFindDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_HexEditorDialog_t_t {
    QByteArrayData data[33];
    char stringdata0[488];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HexEditorDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HexEditorDialog_t_t qt_meta_stringdata_HexEditorDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 17), // "HexEditorDialog_t"
QT_MOC_LITERAL(1, 18, 11), // "closeWindow"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "updatePeriodic"
QT_MOC_LITERAL(4, 46, 9), // "vbarMoved"
QT_MOC_LITERAL(5, 56, 5), // "value"
QT_MOC_LITERAL(6, 62, 11), // "vbarChanged"
QT_MOC_LITERAL(7, 74, 11), // "hbarChanged"
QT_MOC_LITERAL(8, 86, 11), // "saveRomFile"
QT_MOC_LITERAL(9, 98, 13), // "saveRomFileAs"
QT_MOC_LITERAL(10, 112, 17), // "loadTableFromFile"
QT_MOC_LITERAL(11, 130, 11), // "unloadTable"
QT_MOC_LITERAL(12, 142, 10), // "setViewRAM"
QT_MOC_LITERAL(13, 153, 10), // "setViewPPU"
QT_MOC_LITERAL(14, 164, 10), // "setViewOAM"
QT_MOC_LITERAL(15, 175, 10), // "setViewROM"
QT_MOC_LITERAL(16, 186, 15), // "actvHighlightCB"
QT_MOC_LITERAL(17, 202, 17), // "actvHighlightRVCB"
QT_MOC_LITERAL(18, 220, 17), // "rolColHlgtChanged"
QT_MOC_LITERAL(19, 238, 17), // "altColHlgtChanged"
QT_MOC_LITERAL(20, 256, 18), // "removeAllBookmarks"
QT_MOC_LITERAL(21, 275, 18), // "openGotoAddrDialog"
QT_MOC_LITERAL(22, 294, 15), // "copyToClipboard"
QT_MOC_LITERAL(23, 310, 18), // "pasteFromClipboard"
QT_MOC_LITERAL(24, 329, 14), // "openFindDialog"
QT_MOC_LITERAL(25, 344, 12), // "undoRomPatch"
QT_MOC_LITERAL(26, 357, 17), // "setViewRefresh5Hz"
QT_MOC_LITERAL(27, 375, 18), // "setViewRefresh10Hz"
QT_MOC_LITERAL(28, 394, 18), // "setViewRefresh20Hz"
QT_MOC_LITERAL(29, 413, 18), // "setViewRefresh30Hz"
QT_MOC_LITERAL(30, 432, 18), // "setViewRefresh50Hz"
QT_MOC_LITERAL(31, 451, 18), // "setViewRefresh60Hz"
QT_MOC_LITERAL(32, 470, 17) // "changeFontRequest"

    },
    "HexEditorDialog_t\0closeWindow\0\0"
    "updatePeriodic\0vbarMoved\0value\0"
    "vbarChanged\0hbarChanged\0saveRomFile\0"
    "saveRomFileAs\0loadTableFromFile\0"
    "unloadTable\0setViewRAM\0setViewPPU\0"
    "setViewOAM\0setViewROM\0actvHighlightCB\0"
    "actvHighlightRVCB\0rolColHlgtChanged\0"
    "altColHlgtChanged\0removeAllBookmarks\0"
    "openGotoAddrDialog\0copyToClipboard\0"
    "pasteFromClipboard\0openFindDialog\0"
    "undoRomPatch\0setViewRefresh5Hz\0"
    "setViewRefresh10Hz\0setViewRefresh20Hz\0"
    "setViewRefresh30Hz\0setViewRefresh50Hz\0"
    "setViewRefresh60Hz\0changeFontRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HexEditorDialog_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  164,    2, 0x0a /* Public */,
       3,    0,  165,    2, 0x08 /* Private */,
       4,    1,  166,    2, 0x08 /* Private */,
       6,    1,  169,    2, 0x08 /* Private */,
       7,    1,  172,    2, 0x08 /* Private */,
       8,    0,  175,    2, 0x08 /* Private */,
       9,    0,  176,    2, 0x08 /* Private */,
      10,    0,  177,    2, 0x08 /* Private */,
      11,    0,  178,    2, 0x08 /* Private */,
      12,    0,  179,    2, 0x08 /* Private */,
      13,    0,  180,    2, 0x08 /* Private */,
      14,    0,  181,    2, 0x08 /* Private */,
      15,    0,  182,    2, 0x08 /* Private */,
      16,    1,  183,    2, 0x08 /* Private */,
      17,    1,  186,    2, 0x08 /* Private */,
      18,    1,  189,    2, 0x08 /* Private */,
      19,    1,  192,    2, 0x08 /* Private */,
      20,    0,  195,    2, 0x08 /* Private */,
      21,    0,  196,    2, 0x08 /* Private */,
      22,    0,  197,    2, 0x08 /* Private */,
      23,    0,  198,    2, 0x08 /* Private */,
      24,    0,  199,    2, 0x08 /* Private */,
      25,    0,  200,    2, 0x08 /* Private */,
      26,    0,  201,    2, 0x08 /* Private */,
      27,    0,  202,    2, 0x08 /* Private */,
      28,    0,  203,    2, 0x08 /* Private */,
      29,    0,  204,    2, 0x08 /* Private */,
      30,    0,  205,    2, 0x08 /* Private */,
      31,    0,  206,    2, 0x08 /* Private */,
      32,    0,  207,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void HexEditorDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HexEditorDialog_t *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->updatePeriodic(); break;
        case 2: _t->vbarMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->vbarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->hbarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->saveRomFile(); break;
        case 6: _t->saveRomFileAs(); break;
        case 7: _t->loadTableFromFile(); break;
        case 8: _t->unloadTable(); break;
        case 9: _t->setViewRAM(); break;
        case 10: _t->setViewPPU(); break;
        case 11: _t->setViewOAM(); break;
        case 12: _t->setViewROM(); break;
        case 13: _t->actvHighlightCB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->actvHighlightRVCB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->rolColHlgtChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->altColHlgtChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->removeAllBookmarks(); break;
        case 18: _t->openGotoAddrDialog(); break;
        case 19: _t->copyToClipboard(); break;
        case 20: _t->pasteFromClipboard(); break;
        case 21: _t->openFindDialog(); break;
        case 22: _t->undoRomPatch(); break;
        case 23: _t->setViewRefresh5Hz(); break;
        case 24: _t->setViewRefresh10Hz(); break;
        case 25: _t->setViewRefresh20Hz(); break;
        case 26: _t->setViewRefresh30Hz(); break;
        case 27: _t->setViewRefresh50Hz(); break;
        case 28: _t->setViewRefresh60Hz(); break;
        case 29: _t->changeFontRequest(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HexEditorDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_HexEditorDialog_t.data,
    qt_meta_data_HexEditorDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HexEditorDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HexEditorDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HexEditorDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int HexEditorDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
