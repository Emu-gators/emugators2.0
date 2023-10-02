/****************************************************************************
** Meta object code from reading C++ file 'InputConf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/InputConf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InputConf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InputConfDialog_t_t {
    QByteArrayData data[17];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputConfDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputConfDialog_t_t qt_meta_stringdata_InputConfDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 17), // "InputConfDialog_t"
QT_MOC_LITERAL(1, 18, 11), // "closeWindow"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "port1Configure"
QT_MOC_LITERAL(4, 46, 14), // "port2Configure"
QT_MOC_LITERAL(5, 61, 16), // "expPortConfigure"
QT_MOC_LITERAL(6, 78, 11), // "port1Select"
QT_MOC_LITERAL(7, 90, 5), // "index"
QT_MOC_LITERAL(8, 96, 11), // "port2Select"
QT_MOC_LITERAL(9, 108, 9), // "expSelect"
QT_MOC_LITERAL(10, 118, 16), // "fourScoreChanged"
QT_MOC_LITERAL(11, 135, 5), // "state"
QT_MOC_LITERAL(12, 141, 15), // "port2MicChanged"
QT_MOC_LITERAL(13, 157, 17), // "autoPresetChanged"
QT_MOC_LITERAL(14, 175, 18), // "openLoadPresetFile"
QT_MOC_LITERAL(15, 194, 18), // "openSavePresetFile"
QT_MOC_LITERAL(16, 213, 14) // "updatePeriodic"

    },
    "InputConfDialog_t\0closeWindow\0\0"
    "port1Configure\0port2Configure\0"
    "expPortConfigure\0port1Select\0index\0"
    "port2Select\0expSelect\0fourScoreChanged\0"
    "state\0port2MicChanged\0autoPresetChanged\0"
    "openLoadPresetFile\0openSavePresetFile\0"
    "updatePeriodic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputConfDialog_t[] = {

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
       6,    1,   83,    2, 0x08 /* Private */,
       8,    1,   86,    2, 0x08 /* Private */,
       9,    1,   89,    2, 0x08 /* Private */,
      10,    1,   92,    2, 0x08 /* Private */,
      12,    1,   95,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InputConfDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InputConfDialog_t *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->port1Configure(); break;
        case 2: _t->port2Configure(); break;
        case 3: _t->expPortConfigure(); break;
        case 4: _t->port1Select((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->port2Select((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->expSelect((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->fourScoreChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->port2MicChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->autoPresetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->openLoadPresetFile(); break;
        case 11: _t->openSavePresetFile(); break;
        case 12: _t->updatePeriodic(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InputConfDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_InputConfDialog_t.data,
    qt_meta_data_InputConfDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InputConfDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputConfDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputConfDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int InputConfDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
