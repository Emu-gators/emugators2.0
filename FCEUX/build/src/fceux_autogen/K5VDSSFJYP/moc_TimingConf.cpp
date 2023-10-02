/****************************************************************************
** Meta object code from reading C++ file 'TimingConf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/TimingConf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimingConf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TimingConfDialog_t_t {
    QByteArrayData data[21];
    char stringdata0[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimingConfDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimingConfDialog_t_t qt_meta_stringdata_TimingConfDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TimingConfDialog_t"
QT_MOC_LITERAL(1, 19, 11), // "closeWindow"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "periodicUpdate"
QT_MOC_LITERAL(4, 47, 17), // "emuSchedCtlChange"
QT_MOC_LITERAL(5, 65, 5), // "state"
QT_MOC_LITERAL(6, 71, 18), // "emuSchedNiceChange"
QT_MOC_LITERAL(7, 90, 3), // "val"
QT_MOC_LITERAL(8, 94, 18), // "emuSchedPrioChange"
QT_MOC_LITERAL(9, 113, 20), // "emuSchedPolicyChange"
QT_MOC_LITERAL(10, 134, 5), // "index"
QT_MOC_LITERAL(11, 140, 18), // "guiSchedNiceChange"
QT_MOC_LITERAL(12, 159, 18), // "guiSchedPrioChange"
QT_MOC_LITERAL(13, 178, 20), // "guiSchedPolicyChange"
QT_MOC_LITERAL(14, 199, 19), // "emuTimingMechChange"
QT_MOC_LITERAL(15, 219, 19), // "overclockingToggled"
QT_MOC_LITERAL(16, 239, 2), // "on"
QT_MOC_LITERAL(17, 242, 17), // "postRenderChanged"
QT_MOC_LITERAL(18, 260, 5), // "value"
QT_MOC_LITERAL(19, 266, 22), // "vblankScanlinesChanged"
QT_MOC_LITERAL(20, 289, 13) // "no7bitChanged"

    },
    "TimingConfDialog_t\0closeWindow\0\0"
    "periodicUpdate\0emuSchedCtlChange\0state\0"
    "emuSchedNiceChange\0val\0emuSchedPrioChange\0"
    "emuSchedPolicyChange\0index\0"
    "guiSchedNiceChange\0guiSchedPrioChange\0"
    "guiSchedPolicyChange\0emuTimingMechChange\0"
    "overclockingToggled\0on\0postRenderChanged\0"
    "value\0vblankScanlinesChanged\0no7bitChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimingConfDialog_t[] = {

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
       4,    1,   86,    2, 0x08 /* Private */,
       6,    1,   89,    2, 0x08 /* Private */,
       8,    1,   92,    2, 0x08 /* Private */,
       9,    1,   95,    2, 0x08 /* Private */,
      11,    1,   98,    2, 0x08 /* Private */,
      12,    1,  101,    2, 0x08 /* Private */,
      13,    1,  104,    2, 0x08 /* Private */,
      14,    1,  107,    2, 0x08 /* Private */,
      15,    1,  110,    2, 0x08 /* Private */,
      17,    1,  113,    2, 0x08 /* Private */,
      19,    1,  116,    2, 0x08 /* Private */,
      20,    1,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void TimingConfDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TimingConfDialog_t *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->periodicUpdate(); break;
        case 2: _t->emuSchedCtlChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->emuSchedNiceChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->emuSchedPrioChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->emuSchedPolicyChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->guiSchedNiceChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->guiSchedPrioChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->guiSchedPolicyChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->emuTimingMechChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->overclockingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->postRenderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->vblankScanlinesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->no7bitChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TimingConfDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TimingConfDialog_t.data,
    qt_meta_data_TimingConfDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TimingConfDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimingConfDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TimingConfDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TimingConfDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
