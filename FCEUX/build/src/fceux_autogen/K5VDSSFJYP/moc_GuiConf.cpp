/****************************************************************************
** Meta object code from reading C++ file 'GuiConf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/GuiConf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiConf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_fceuStyle_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fceuStyle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fceuStyle_t qt_meta_stringdata_fceuStyle = {
    {
QT_MOC_LITERAL(0, 0, 9) // "fceuStyle"

    },
    "fceuStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fceuStyle[] = {

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

void fceuStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject fceuStyle::staticMetaObject = { {
    QMetaObject::SuperData::link<QProxyStyle::staticMetaObject>(),
    qt_meta_stringdata_fceuStyle.data,
    qt_meta_data_fceuStyle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *fceuStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fceuStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_fceuStyle.stringdata0))
        return static_cast<void*>(this);
    return QProxyStyle::qt_metacast(_clname);
}

int fceuStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProxyStyle::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_guiStyleTestDialog_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_guiStyleTestDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_guiStyleTestDialog_t qt_meta_stringdata_guiStyleTestDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "guiStyleTestDialog"
QT_MOC_LITERAL(1, 19, 11), // "closeWindow"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "guiStyleTestDialog\0closeWindow\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_guiStyleTestDialog[] = {

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

void guiStyleTestDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<guiStyleTestDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeWindow(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject guiStyleTestDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_guiStyleTestDialog.data,
    qt_meta_data_guiStyleTestDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *guiStyleTestDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *guiStyleTestDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_guiStyleTestDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int guiStyleTestDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_guiColorPickerDialog_t_t {
    QByteArrayData data[8];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_guiColorPickerDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_guiColorPickerDialog_t_t qt_meta_stringdata_guiColorPickerDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 22), // "guiColorPickerDialog_t"
QT_MOC_LITERAL(1, 23, 11), // "closeWindow"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "colorChanged"
QT_MOC_LITERAL(4, 49, 5), // "color"
QT_MOC_LITERAL(5, 55, 13), // "colorAccepted"
QT_MOC_LITERAL(6, 69, 13), // "colorRejected"
QT_MOC_LITERAL(7, 83, 10) // "resetColor"

    },
    "guiColorPickerDialog_t\0closeWindow\0\0"
    "colorChanged\0color\0colorAccepted\0"
    "colorRejected\0resetColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_guiColorPickerDialog_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void guiColorPickerDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<guiColorPickerDialog_t *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->colorAccepted(); break;
        case 3: _t->colorRejected(); break;
        case 4: _t->resetColor(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject guiColorPickerDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_guiColorPickerDialog_t.data,
    qt_meta_data_guiColorPickerDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *guiColorPickerDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *guiColorPickerDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_guiColorPickerDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int guiColorPickerDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_GuiPaletteColorSelect_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiPaletteColorSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiPaletteColorSelect_t qt_meta_stringdata_GuiPaletteColorSelect = {
    {
QT_MOC_LITERAL(0, 0, 21), // "GuiPaletteColorSelect"
QT_MOC_LITERAL(1, 22, 16), // "colorEditClicked"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "GuiPaletteColorSelect\0colorEditClicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiPaletteColorSelect[] = {

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

void GuiPaletteColorSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiPaletteColorSelect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->colorEditClicked(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject GuiPaletteColorSelect::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GuiPaletteColorSelect.data,
    qt_meta_data_GuiPaletteColorSelect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiPaletteColorSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiPaletteColorSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiPaletteColorSelect.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GuiPaletteColorSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_GuiPaletteEditDialog_t_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiPaletteEditDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiPaletteEditDialog_t_t qt_meta_stringdata_GuiPaletteEditDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 22), // "GuiPaletteEditDialog_t"
QT_MOC_LITERAL(1, 23, 11), // "closeWindow"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13) // "paletteSaveAs"

    },
    "GuiPaletteEditDialog_t\0closeWindow\0\0"
    "paletteSaveAs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiPaletteEditDialog_t[] = {

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

void GuiPaletteEditDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiPaletteEditDialog_t *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->paletteSaveAs(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject GuiPaletteEditDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_GuiPaletteEditDialog_t.data,
    qt_meta_data_GuiPaletteEditDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiPaletteEditDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiPaletteEditDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiPaletteEditDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GuiPaletteEditDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_GuiConfDialog_t_t {
    QByteArrayData data[19];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiConfDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiConfDialog_t_t qt_meta_stringdata_GuiConfDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 15), // "GuiConfDialog_t"
QT_MOC_LITERAL(1, 16, 11), // "closeWindow"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 26), // "useNativeFileDialogChanged"
QT_MOC_LITERAL(4, 56, 1), // "v"
QT_MOC_LITERAL(5, 58, 23), // "useNativeMenuBarChanged"
QT_MOC_LITERAL(6, 82, 24), // "pauseOnMenuAccessChanged"
QT_MOC_LITERAL(7, 107, 24), // "contextMenuEnableChanged"
QT_MOC_LITERAL(8, 132, 23), // "showSplashScreenChanged"
QT_MOC_LITERAL(9, 156, 24), // "useCustomQPaletteChanged"
QT_MOC_LITERAL(10, 181, 21), // "useCustomStyleChanged"
QT_MOC_LITERAL(11, 203, 12), // "styleChanged"
QT_MOC_LITERAL(12, 216, 5), // "index"
QT_MOC_LITERAL(13, 222, 7), // "openQss"
QT_MOC_LITERAL(14, 230, 8), // "clearQss"
QT_MOC_LITERAL(15, 239, 8), // "openQPal"
QT_MOC_LITERAL(16, 248, 9), // "clearQPal"
QT_MOC_LITERAL(17, 258, 12), // "openQPalette"
QT_MOC_LITERAL(18, 271, 14) // "openTestWindow"

    },
    "GuiConfDialog_t\0closeWindow\0\0"
    "useNativeFileDialogChanged\0v\0"
    "useNativeMenuBarChanged\0"
    "pauseOnMenuAccessChanged\0"
    "contextMenuEnableChanged\0"
    "showSplashScreenChanged\0"
    "useCustomQPaletteChanged\0useCustomStyleChanged\0"
    "styleChanged\0index\0openQss\0clearQss\0"
    "openQPal\0clearQPal\0openQPalette\0"
    "openTestWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiConfDialog_t[] = {

 // content:
       8,       // revision
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
       3,    1,   90,    2, 0x08 /* Private */,
       5,    1,   93,    2, 0x08 /* Private */,
       6,    1,   96,    2, 0x08 /* Private */,
       7,    1,   99,    2, 0x08 /* Private */,
       8,    1,  102,    2, 0x08 /* Private */,
       9,    1,  105,    2, 0x08 /* Private */,
      10,    1,  108,    2, 0x08 /* Private */,
      11,    1,  111,    2, 0x08 /* Private */,
      13,    0,  114,    2, 0x08 /* Private */,
      14,    0,  115,    2, 0x08 /* Private */,
      15,    0,  116,    2, 0x08 /* Private */,
      16,    0,  117,    2, 0x08 /* Private */,
      17,    0,  118,    2, 0x08 /* Private */,
      18,    0,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GuiConfDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiConfDialog_t *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->useNativeFileDialogChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->useNativeMenuBarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->pauseOnMenuAccessChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->contextMenuEnableChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->showSplashScreenChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->useCustomQPaletteChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->useCustomStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->styleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->openQss(); break;
        case 10: _t->clearQss(); break;
        case 11: _t->openQPal(); break;
        case 12: _t->clearQPal(); break;
        case 13: _t->openQPalette(); break;
        case 14: _t->openTestWindow(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiConfDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_GuiConfDialog_t.data,
    qt_meta_data_GuiConfDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiConfDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiConfDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiConfDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GuiConfDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
