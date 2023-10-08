/****************************************************************************
** Meta object code from reading C++ file 'ppuViewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/ppuViewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ppuViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ppuPatternView_t_t {
    QByteArrayData data[16];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ppuPatternView_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ppuPatternView_t_t qt_meta_stringdata_ppuPatternView_t = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ppuPatternView_t"
QT_MOC_LITERAL(1, 17, 19), // "toggleTileGridLines"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "showTileMode"
QT_MOC_LITERAL(4, 51, 12), // "exitTileMode"
QT_MOC_LITERAL(5, 64, 11), // "selPalette0"
QT_MOC_LITERAL(6, 76, 11), // "selPalette1"
QT_MOC_LITERAL(7, 88, 11), // "selPalette2"
QT_MOC_LITERAL(8, 100, 11), // "selPalette3"
QT_MOC_LITERAL(9, 112, 11), // "selPalette4"
QT_MOC_LITERAL(10, 124, 11), // "selPalette5"
QT_MOC_LITERAL(11, 136, 11), // "selPalette6"
QT_MOC_LITERAL(12, 148, 11), // "selPalette7"
QT_MOC_LITERAL(13, 160, 11), // "selPalette8"
QT_MOC_LITERAL(14, 172, 14), // "openTileEditor"
QT_MOC_LITERAL(15, 187, 16) // "cycleNextPalette"

    },
    "ppuPatternView_t\0toggleTileGridLines\0"
    "\0showTileMode\0exitTileMode\0selPalette0\0"
    "selPalette1\0selPalette2\0selPalette3\0"
    "selPalette4\0selPalette5\0selPalette6\0"
    "selPalette7\0selPalette8\0openTileEditor\0"
    "cycleNextPalette"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ppuPatternView_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

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
    QMetaType::Void,

       0        // eod
};

void ppuPatternView_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ppuPatternView_t *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toggleTileGridLines(); break;
        case 1: _t->showTileMode(); break;
        case 2: _t->exitTileMode(); break;
        case 3: _t->selPalette0(); break;
        case 4: _t->selPalette1(); break;
        case 5: _t->selPalette2(); break;
        case 6: _t->selPalette3(); break;
        case 7: _t->selPalette4(); break;
        case 8: _t->selPalette5(); break;
        case 9: _t->selPalette6(); break;
        case 10: _t->selPalette7(); break;
        case 11: _t->selPalette8(); break;
        case 12: _t->openTileEditor(); break;
        case 13: _t->cycleNextPalette(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ppuPatternView_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ppuPatternView_t.data,
    qt_meta_data_ppuPatternView_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ppuPatternView_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ppuPatternView_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ppuPatternView_t.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ppuPatternView_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
struct qt_meta_stringdata_tilePaletteView_t_t {
    QByteArrayData data[6];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tilePaletteView_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tilePaletteView_t_t qt_meta_stringdata_tilePaletteView_t = {
    {
QT_MOC_LITERAL(0, 0, 17), // "tilePaletteView_t"
QT_MOC_LITERAL(1, 18, 15), // "openColorPicker"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "exportPaletteFileDialog"
QT_MOC_LITERAL(4, 59, 22), // "copyColor2ClipBoardHex"
QT_MOC_LITERAL(5, 82, 22) // "copyColor2ClipBoardRGB"

    },
    "tilePaletteView_t\0openColorPicker\0\0"
    "exportPaletteFileDialog\0copyColor2ClipBoardHex\0"
    "copyColor2ClipBoardRGB"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tilePaletteView_t[] = {

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

void tilePaletteView_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<tilePaletteView_t *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openColorPicker(); break;
        case 1: _t->exportPaletteFileDialog(); break;
        case 2: _t->copyColor2ClipBoardHex(); break;
        case 3: _t->copyColor2ClipBoardRGB(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject tilePaletteView_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_tilePaletteView_t.data,
    qt_meta_data_tilePaletteView_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tilePaletteView_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tilePaletteView_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tilePaletteView_t.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int tilePaletteView_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_ppuTileView_t_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ppuTileView_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ppuTileView_t_t qt_meta_stringdata_ppuTileView_t = {
    {
QT_MOC_LITERAL(0, 0, 13) // "ppuTileView_t"

    },
    "ppuTileView_t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ppuTileView_t[] = {

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

void ppuTileView_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ppuTileView_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ppuTileView_t.data,
    qt_meta_data_ppuTileView_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ppuTileView_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ppuTileView_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ppuTileView_t.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ppuTileView_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ppuTileEditColorPicker_t_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ppuTileEditColorPicker_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ppuTileEditColorPicker_t_t qt_meta_stringdata_ppuTileEditColorPicker_t = {
    {
QT_MOC_LITERAL(0, 0, 24) // "ppuTileEditColorPicker_t"

    },
    "ppuTileEditColorPicker_t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ppuTileEditColorPicker_t[] = {

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

void ppuTileEditColorPicker_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ppuTileEditColorPicker_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ppuTileEditColorPicker_t.data,
    qt_meta_data_ppuTileEditColorPicker_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ppuTileEditColorPicker_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ppuTileEditColorPicker_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ppuTileEditColorPicker_t.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ppuTileEditColorPicker_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ppuTileEditor_t_t {
    QByteArrayData data[7];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ppuTileEditor_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ppuTileEditor_t_t qt_meta_stringdata_ppuTileEditor_t = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ppuTileEditor_t"
QT_MOC_LITERAL(1, 16, 11), // "closeWindow"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "periodicUpdate"
QT_MOC_LITERAL(4, 44, 14), // "paletteChanged"
QT_MOC_LITERAL(5, 59, 5), // "index"
QT_MOC_LITERAL(6, 65, 18) // "showKeyAssignments"

    },
    "ppuTileEditor_t\0closeWindow\0\0"
    "periodicUpdate\0paletteChanged\0index\0"
    "showKeyAssignments"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ppuTileEditor_t[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void ppuTileEditor_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ppuTileEditor_t *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->periodicUpdate(); break;
        case 2: _t->paletteChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->showKeyAssignments(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ppuTileEditor_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ppuTileEditor_t.data,
    qt_meta_data_ppuTileEditor_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ppuTileEditor_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ppuTileEditor_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ppuTileEditor_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ppuTileEditor_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ppuViewerDialog_t_t {
    QByteArrayData data[14];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ppuViewerDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ppuViewerDialog_t_t qt_meta_stringdata_ppuViewerDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ppuViewerDialog_t"
QT_MOC_LITERAL(1, 18, 11), // "closeWindow"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "periodicUpdate"
QT_MOC_LITERAL(4, 46, 18), // "sprite8x16Changed0"
QT_MOC_LITERAL(5, 65, 5), // "state"
QT_MOC_LITERAL(6, 71, 18), // "sprite8x16Changed1"
QT_MOC_LITERAL(7, 90, 17), // "invertMaskChanged"
QT_MOC_LITERAL(8, 108, 25), // "maskUnusedGraphicsChanged"
QT_MOC_LITERAL(9, 134, 20), // "refreshSliderChanged"
QT_MOC_LITERAL(10, 155, 5), // "value"
QT_MOC_LITERAL(11, 161, 15), // "scanLineChanged"
QT_MOC_LITERAL(12, 177, 13), // "setClickFocus"
QT_MOC_LITERAL(13, 191, 13) // "setHoverFocus"

    },
    "ppuViewerDialog_t\0closeWindow\0\0"
    "periodicUpdate\0sprite8x16Changed0\0"
    "state\0sprite8x16Changed1\0invertMaskChanged\0"
    "maskUnusedGraphicsChanged\0"
    "refreshSliderChanged\0value\0scanLineChanged\0"
    "setClickFocus\0setHoverFocus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ppuViewerDialog_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       6,    1,   69,    2, 0x08 /* Private */,
       7,    1,   72,    2, 0x08 /* Private */,
       8,    1,   75,    2, 0x08 /* Private */,
       9,    1,   78,    2, 0x08 /* Private */,
      11,    1,   81,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ppuViewerDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ppuViewerDialog_t *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->periodicUpdate(); break;
        case 2: _t->sprite8x16Changed0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sprite8x16Changed1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->invertMaskChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->maskUnusedGraphicsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->refreshSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->scanLineChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setClickFocus(); break;
        case 9: _t->setHoverFocus(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ppuViewerDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ppuViewerDialog_t.data,
    qt_meta_data_ppuViewerDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ppuViewerDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ppuViewerDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ppuViewerDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ppuViewerDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
struct qt_meta_stringdata_oamPatternView_t_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_oamPatternView_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_oamPatternView_t_t qt_meta_stringdata_oamPatternView_t = {
    {
QT_MOC_LITERAL(0, 0, 16), // "oamPatternView_t"
QT_MOC_LITERAL(1, 17, 17), // "openTilePpuViewer"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "oamPatternView_t\0openTilePpuViewer\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_oamPatternView_t[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void oamPatternView_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<oamPatternView_t *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openTilePpuViewer(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject oamPatternView_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_oamPatternView_t.data,
    qt_meta_data_oamPatternView_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *oamPatternView_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oamPatternView_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oamPatternView_t.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int oamPatternView_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_oamTileView_t_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_oamTileView_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_oamTileView_t_t qt_meta_stringdata_oamTileView_t = {
    {
QT_MOC_LITERAL(0, 0, 13) // "oamTileView_t"

    },
    "oamTileView_t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_oamTileView_t[] = {

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

void oamTileView_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject oamTileView_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_oamTileView_t.data,
    qt_meta_data_oamTileView_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *oamTileView_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oamTileView_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oamTileView_t.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int oamTileView_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_oamPaletteView_t_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_oamPaletteView_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_oamPaletteView_t_t qt_meta_stringdata_oamPaletteView_t = {
    {
QT_MOC_LITERAL(0, 0, 16) // "oamPaletteView_t"

    },
    "oamPaletteView_t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_oamPaletteView_t[] = {

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

void oamPaletteView_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject oamPaletteView_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_oamPaletteView_t.data,
    qt_meta_data_oamPaletteView_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *oamPaletteView_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oamPaletteView_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oamPaletteView_t.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int oamPaletteView_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_oamPreview_t_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_oamPreview_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_oamPreview_t_t qt_meta_stringdata_oamPreview_t = {
    {
QT_MOC_LITERAL(0, 0, 12) // "oamPreview_t"

    },
    "oamPreview_t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_oamPreview_t[] = {

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

void oamPreview_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject oamPreview_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_oamPreview_t.data,
    qt_meta_data_oamPreview_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *oamPreview_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oamPreview_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oamPreview_t.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int oamPreview_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_spriteViewerDialog_t_t {
    QByteArrayData data[9];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_spriteViewerDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_spriteViewerDialog_t_t qt_meta_stringdata_spriteViewerDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 20), // "spriteViewerDialog_t"
QT_MOC_LITERAL(1, 21, 11), // "closeWindow"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "periodicUpdate"
QT_MOC_LITERAL(4, 49, 13), // "setClickFocus"
QT_MOC_LITERAL(5, 63, 13), // "setHoverFocus"
QT_MOC_LITERAL(6, 77, 13), // "toggleGridVis"
QT_MOC_LITERAL(7, 91, 15), // "scanLineChanged"
QT_MOC_LITERAL(8, 107, 5) // "value"

    },
    "spriteViewerDialog_t\0closeWindow\0\0"
    "periodicUpdate\0setClickFocus\0setHoverFocus\0"
    "toggleGridVis\0scanLineChanged\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_spriteViewerDialog_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void spriteViewerDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<spriteViewerDialog_t *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->periodicUpdate(); break;
        case 2: _t->setClickFocus(); break;
        case 3: _t->setHoverFocus(); break;
        case 4: _t->toggleGridVis(); break;
        case 5: _t->scanLineChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject spriteViewerDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_spriteViewerDialog_t.data,
    qt_meta_data_spriteViewerDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *spriteViewerDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *spriteViewerDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_spriteViewerDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int spriteViewerDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
