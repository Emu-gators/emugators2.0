/****************************************************************************
** Meta object code from reading C++ file 'ColorMenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/ColorMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColorMenuPickerDialog_t_t {
    QByteArrayData data[8];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorMenuPickerDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorMenuPickerDialog_t_t qt_meta_stringdata_ColorMenuPickerDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ColorMenuPickerDialog_t"
QT_MOC_LITERAL(1, 24, 11), // "closeWindow"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 12), // "colorChanged"
QT_MOC_LITERAL(4, 50, 5), // "color"
QT_MOC_LITERAL(5, 56, 13), // "colorAccepted"
QT_MOC_LITERAL(6, 70, 13), // "colorRejected"
QT_MOC_LITERAL(7, 84, 10) // "resetColor"

    },
    "ColorMenuPickerDialog_t\0closeWindow\0"
    "\0colorChanged\0color\0colorAccepted\0"
    "colorRejected\0resetColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorMenuPickerDialog_t[] = {

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

void ColorMenuPickerDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorMenuPickerDialog_t *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject ColorMenuPickerDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ColorMenuPickerDialog_t.data,
    qt_meta_data_ColorMenuPickerDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorMenuPickerDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorMenuPickerDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorMenuPickerDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ColorMenuPickerDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_ColorMenuItem_t {
    QByteArrayData data[8];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorMenuItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorMenuItem_t qt_meta_stringdata_ColorMenuItem = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ColorMenuItem"
QT_MOC_LITERAL(1, 14, 12), // "colorChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "QColor&"
QT_MOC_LITERAL(4, 36, 1), // "c"
QT_MOC_LITERAL(5, 38, 15), // "openColorPicker"
QT_MOC_LITERAL(6, 54, 12), // "pickerClosed"
QT_MOC_LITERAL(7, 67, 3) // "ret"

    },
    "ColorMenuItem\0colorChanged\0\0QColor&\0"
    "c\0openColorPicker\0pickerClosed\0ret"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorMenuItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x0a /* Public */,
       6,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void ColorMenuItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorMenuItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->openColorPicker(); break;
        case 2: _t->pickerClosed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorMenuItem::*)(QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorMenuItem::colorChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ColorMenuItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_ColorMenuItem.data,
    qt_meta_data_ColorMenuItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorMenuItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorMenuItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorMenuItem.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int ColorMenuItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ColorMenuItem::colorChanged(QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
