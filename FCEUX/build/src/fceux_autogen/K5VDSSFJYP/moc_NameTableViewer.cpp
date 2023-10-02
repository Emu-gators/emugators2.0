/****************************************************************************
** Meta object code from reading C++ file 'NameTableViewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/NameTableViewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NameTableViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ppuNameTableView_t_t {
    QByteArrayData data[6];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ppuNameTableView_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ppuNameTableView_t_t qt_meta_stringdata_ppuNameTableView_t = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ppuNameTableView_t"
QT_MOC_LITERAL(1, 19, 17), // "openTilePpuViewer"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 18), // "openPpuAddrHexEdit"
QT_MOC_LITERAL(4, 57, 19), // "openTileAddrHexEdit"
QT_MOC_LITERAL(5, 77, 19) // "openAtrbAddrHexEdit"

    },
    "ppuNameTableView_t\0openTilePpuViewer\0"
    "\0openPpuAddrHexEdit\0openTileAddrHexEdit\0"
    "openAtrbAddrHexEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ppuNameTableView_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ppuNameTableView_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ppuNameTableView_t *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openTilePpuViewer(); break;
        case 1: _t->openPpuAddrHexEdit(); break;
        case 2: _t->openTileAddrHexEdit(); break;
        case 3: _t->openAtrbAddrHexEdit(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ppuNameTableView_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ppuNameTableView_t.data,
    qt_meta_data_ppuNameTableView_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ppuNameTableView_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ppuNameTableView_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ppuNameTableView_t.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ppuNameTableView_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_ppuNameTableTileView_t_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ppuNameTableTileView_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ppuNameTableTileView_t_t qt_meta_stringdata_ppuNameTableTileView_t = {
    {
QT_MOC_LITERAL(0, 0, 22) // "ppuNameTableTileView_t"

    },
    "ppuNameTableTileView_t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ppuNameTableTileView_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ppuNameTableTileView_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ppuNameTableTileView_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ppuNameTableTileView_t.data,
    qt_meta_data_ppuNameTableTileView_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ppuNameTableTileView_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ppuNameTableTileView_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ppuNameTableTileView_t.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ppuNameTableTileView_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ppuNameTablePaletteView_t_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ppuNameTablePaletteView_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ppuNameTablePaletteView_t_t qt_meta_stringdata_ppuNameTablePaletteView_t = {
    {
QT_MOC_LITERAL(0, 0, 25) // "ppuNameTablePaletteView_t"

    },
    "ppuNameTablePaletteView_t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ppuNameTablePaletteView_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ppuNameTablePaletteView_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ppuNameTablePaletteView_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ppuNameTablePaletteView_t.data,
    qt_meta_data_ppuNameTablePaletteView_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ppuNameTablePaletteView_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ppuNameTablePaletteView_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ppuNameTablePaletteView_t.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ppuNameTablePaletteView_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ppuNameTableViewerDialog_t_t {
    QByteArrayData data[34];
    char stringdata0[513];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ppuNameTableViewerDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ppuNameTableViewerDialog_t_t qt_meta_stringdata_ppuNameTableViewerDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 26), // "ppuNameTableViewerDialog_t"
QT_MOC_LITERAL(1, 27, 11), // "closeWindow"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 21), // "refreshMenuSelections"
QT_MOC_LITERAL(4, 62, 14), // "periodicUpdate"
QT_MOC_LITERAL(5, 77, 16), // "updateMirrorText"
QT_MOC_LITERAL(6, 94, 16), // "showAttrbChanged"
QT_MOC_LITERAL(7, 111, 5), // "state"
QT_MOC_LITERAL(8, 117, 20), // "ignorePaletteChanged"
QT_MOC_LITERAL(9, 138, 19), // "showTileGridChanged"
QT_MOC_LITERAL(10, 158, 19), // "showAttrGridChanged"
QT_MOC_LITERAL(11, 178, 22), // "showScrollLinesChanged"
QT_MOC_LITERAL(12, 201, 15), // "scanLineChanged"
QT_MOC_LITERAL(13, 217, 5), // "value"
QT_MOC_LITERAL(14, 223, 22), // "menuScrollLinesChanged"
QT_MOC_LITERAL(15, 246, 7), // "checked"
QT_MOC_LITERAL(16, 254, 24), // "menuTileGridLinesChanged"
QT_MOC_LITERAL(17, 279, 24), // "menuAttrGridLinesChanged"
QT_MOC_LITERAL(18, 304, 21), // "menuAttributesChanged"
QT_MOC_LITERAL(19, 326, 17), // "menuIgnPalChanged"
QT_MOC_LITERAL(20, 344, 13), // "setClickFocus"
QT_MOC_LITERAL(21, 358, 13), // "setHoverFocus"
QT_MOC_LITERAL(22, 372, 12), // "changeZoom1x"
QT_MOC_LITERAL(23, 385, 12), // "changeZoom2x"
QT_MOC_LITERAL(24, 398, 12), // "changeZoom3x"
QT_MOC_LITERAL(25, 411, 12), // "changeZoom4x"
QT_MOC_LITERAL(26, 424, 11), // "changeRate1"
QT_MOC_LITERAL(27, 436, 11), // "changeRate2"
QT_MOC_LITERAL(28, 448, 11), // "changeRate4"
QT_MOC_LITERAL(29, 460, 11), // "changeRate8"
QT_MOC_LITERAL(30, 472, 12), // "changeRate16"
QT_MOC_LITERAL(31, 485, 12), // "forceRefresh"
QT_MOC_LITERAL(32, 498, 6), // "zoomIn"
QT_MOC_LITERAL(33, 505, 7) // "zoomOut"

    },
    "ppuNameTableViewerDialog_t\0closeWindow\0"
    "\0refreshMenuSelections\0periodicUpdate\0"
    "updateMirrorText\0showAttrbChanged\0"
    "state\0ignorePaletteChanged\0"
    "showTileGridChanged\0showAttrGridChanged\0"
    "showScrollLinesChanged\0scanLineChanged\0"
    "value\0menuScrollLinesChanged\0checked\0"
    "menuTileGridLinesChanged\0"
    "menuAttrGridLinesChanged\0menuAttributesChanged\0"
    "menuIgnPalChanged\0setClickFocus\0"
    "setHoverFocus\0changeZoom1x\0changeZoom2x\0"
    "changeZoom3x\0changeZoom4x\0changeRate1\0"
    "changeRate2\0changeRate4\0changeRate8\0"
    "changeRate16\0forceRefresh\0zoomIn\0"
    "zoomOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ppuNameTableViewerDialog_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  159,    2, 0x0a /* Public */,
       3,    0,  160,    2, 0x0a /* Public */,
       4,    0,  161,    2, 0x08 /* Private */,
       5,    0,  162,    2, 0x08 /* Private */,
       6,    1,  163,    2, 0x08 /* Private */,
       8,    1,  166,    2, 0x08 /* Private */,
       9,    1,  169,    2, 0x08 /* Private */,
      10,    1,  172,    2, 0x08 /* Private */,
      11,    1,  175,    2, 0x08 /* Private */,
      12,    1,  178,    2, 0x08 /* Private */,
      14,    1,  181,    2, 0x08 /* Private */,
      16,    1,  184,    2, 0x08 /* Private */,
      17,    1,  187,    2, 0x08 /* Private */,
      18,    1,  190,    2, 0x08 /* Private */,
      19,    1,  193,    2, 0x08 /* Private */,
      20,    0,  196,    2, 0x08 /* Private */,
      21,    0,  197,    2, 0x08 /* Private */,
      22,    0,  198,    2, 0x08 /* Private */,
      23,    0,  199,    2, 0x08 /* Private */,
      24,    0,  200,    2, 0x08 /* Private */,
      25,    0,  201,    2, 0x08 /* Private */,
      26,    0,  202,    2, 0x08 /* Private */,
      27,    0,  203,    2, 0x08 /* Private */,
      28,    0,  204,    2, 0x08 /* Private */,
      29,    0,  205,    2, 0x08 /* Private */,
      30,    0,  206,    2, 0x08 /* Private */,
      31,    0,  207,    2, 0x08 /* Private */,
      32,    0,  208,    2, 0x08 /* Private */,
      33,    0,  209,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
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
    QMetaType::Void,

       0        // eod
};

void ppuNameTableViewerDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ppuNameTableViewerDialog_t *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->refreshMenuSelections(); break;
        case 2: _t->periodicUpdate(); break;
        case 3: _t->updateMirrorText(); break;
        case 4: _t->showAttrbChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ignorePaletteChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->showTileGridChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->showAttrGridChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->showScrollLinesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->scanLineChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->menuScrollLinesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->menuTileGridLinesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->menuAttrGridLinesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->menuAttributesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->menuIgnPalChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setClickFocus(); break;
        case 16: _t->setHoverFocus(); break;
        case 17: _t->changeZoom1x(); break;
        case 18: _t->changeZoom2x(); break;
        case 19: _t->changeZoom3x(); break;
        case 20: _t->changeZoom4x(); break;
        case 21: _t->changeRate1(); break;
        case 22: _t->changeRate2(); break;
        case 23: _t->changeRate4(); break;
        case 24: _t->changeRate8(); break;
        case 25: _t->changeRate16(); break;
        case 26: _t->forceRefresh(); break;
        case 27: _t->zoomIn(); break;
        case 28: _t->zoomOut(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ppuNameTableViewerDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ppuNameTableViewerDialog_t.data,
    qt_meta_data_ppuNameTableViewerDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ppuNameTableViewerDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ppuNameTableViewerDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ppuNameTableViewerDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ppuNameTableViewerDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 29;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
