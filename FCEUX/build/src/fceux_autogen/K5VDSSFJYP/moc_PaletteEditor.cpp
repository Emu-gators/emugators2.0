/****************************************************************************
** Meta object code from reading C++ file 'PaletteEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/PaletteEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PaletteEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_nesColorPickerDialog_t_t {
    QByteArrayData data[8];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nesColorPickerDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nesColorPickerDialog_t_t qt_meta_stringdata_nesColorPickerDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 22), // "nesColorPickerDialog_t"
QT_MOC_LITERAL(1, 23, 11), // "closeWindow"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "colorChanged"
QT_MOC_LITERAL(4, 49, 5), // "color"
QT_MOC_LITERAL(5, 55, 13), // "colorAccepted"
QT_MOC_LITERAL(6, 69, 13), // "colorRejected"
QT_MOC_LITERAL(7, 83, 10) // "resetColor"

    },
    "nesColorPickerDialog_t\0closeWindow\0\0"
    "colorChanged\0color\0colorAccepted\0"
    "colorRejected\0resetColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nesColorPickerDialog_t[] = {

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

void nesColorPickerDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<nesColorPickerDialog_t *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject nesColorPickerDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_nesColorPickerDialog_t.data,
    qt_meta_data_nesColorPickerDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *nesColorPickerDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nesColorPickerDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nesColorPickerDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int nesColorPickerDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_nesPaletteView_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nesPaletteView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nesPaletteView_t qt_meta_stringdata_nesPaletteView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "nesPaletteView"
QT_MOC_LITERAL(1, 15, 12), // "editSelColor"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "nesPaletteView\0editSelColor\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nesPaletteView[] = {

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

void nesPaletteView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<nesPaletteView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->editSelColor(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject nesPaletteView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_nesPaletteView.data,
    qt_meta_data_nesPaletteView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *nesPaletteView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nesPaletteView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nesPaletteView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int nesPaletteView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PaletteEditorDialog_t_t {
    QByteArrayData data[10];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PaletteEditorDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PaletteEditorDialog_t_t qt_meta_stringdata_PaletteEditorDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 21), // "PaletteEditorDialog_t"
QT_MOC_LITERAL(1, 22, 11), // "closeWindow"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "updatePeriodic"
QT_MOC_LITERAL(4, 50, 21), // "openPaletteFileDialog"
QT_MOC_LITERAL(5, 72, 21), // "savePaletteFileDialog"
QT_MOC_LITERAL(6, 94, 23), // "exportPaletteFileDialog"
QT_MOC_LITERAL(7, 118, 16), // "setActivePalette"
QT_MOC_LITERAL(8, 135, 17), // "undoLastOperation"
QT_MOC_LITERAL(9, 153, 17) // "redoLastOperation"

    },
    "PaletteEditorDialog_t\0closeWindow\0\0"
    "updatePeriodic\0openPaletteFileDialog\0"
    "savePaletteFileDialog\0exportPaletteFileDialog\0"
    "setActivePalette\0undoLastOperation\0"
    "redoLastOperation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaletteEditorDialog_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void PaletteEditorDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaletteEditorDialog_t *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->updatePeriodic(); break;
        case 2: _t->openPaletteFileDialog(); break;
        case 3: _t->savePaletteFileDialog(); break;
        case 4: _t->exportPaletteFileDialog(); break;
        case 5: _t->setActivePalette(); break;
        case 6: _t->undoLastOperation(); break;
        case 7: _t->redoLastOperation(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PaletteEditorDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PaletteEditorDialog_t.data,
    qt_meta_data_PaletteEditorDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PaletteEditorDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaletteEditorDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PaletteEditorDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PaletteEditorDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_nesPalettePickerView_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nesPalettePickerView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nesPalettePickerView_t qt_meta_stringdata_nesPalettePickerView = {
    {
QT_MOC_LITERAL(0, 0, 20) // "nesPalettePickerView"

    },
    "nesPalettePickerView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nesPalettePickerView[] = {

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

void nesPalettePickerView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject nesPalettePickerView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_nesPalettePickerView.data,
    qt_meta_data_nesPalettePickerView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *nesPalettePickerView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nesPalettePickerView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nesPalettePickerView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int nesPalettePickerView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_nesPalettePickerDialog_t {
    QByteArrayData data[6];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nesPalettePickerDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nesPalettePickerDialog_t qt_meta_stringdata_nesPalettePickerDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "nesPalettePickerDialog"
QT_MOC_LITERAL(1, 23, 11), // "closeWindow"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 19), // "cancelButtonClicked"
QT_MOC_LITERAL(4, 56, 18), // "resetButtonClicked"
QT_MOC_LITERAL(5, 75, 15) // "okButtonClicked"

    },
    "nesPalettePickerDialog\0closeWindow\0\0"
    "cancelButtonClicked\0resetButtonClicked\0"
    "okButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nesPalettePickerDialog[] = {

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
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void nesPalettePickerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<nesPalettePickerDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->cancelButtonClicked(); break;
        case 2: _t->resetButtonClicked(); break;
        case 3: _t->okButtonClicked(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject nesPalettePickerDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_nesPalettePickerDialog.data,
    qt_meta_data_nesPalettePickerDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *nesPalettePickerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nesPalettePickerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nesPalettePickerDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int nesPalettePickerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
