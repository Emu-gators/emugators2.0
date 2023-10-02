/****************************************************************************
** Meta object code from reading C++ file 'ConsoleSoundConf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/ConsoleSoundConf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConsoleSoundConf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConsoleSndConfDialog_t_t {
    QByteArrayData data[20];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConsoleSndConfDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConsoleSndConfDialog_t_t qt_meta_stringdata_ConsoleSndConfDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ConsoleSndConfDialog_t"
QT_MOC_LITERAL(1, 23, 11), // "closeWindow"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "resetCounters"
QT_MOC_LITERAL(4, 50, 14), // "periodicUpdate"
QT_MOC_LITERAL(5, 65, 14), // "bufSizeChanged"
QT_MOC_LITERAL(6, 80, 5), // "value"
QT_MOC_LITERAL(7, 86, 13), // "volumeChanged"
QT_MOC_LITERAL(8, 100, 15), // "triangleChanged"
QT_MOC_LITERAL(9, 116, 14), // "square1Changed"
QT_MOC_LITERAL(10, 131, 14), // "square2Changed"
QT_MOC_LITERAL(11, 146, 12), // "noiseChanged"
QT_MOC_LITERAL(12, 159, 10), // "pcmChanged"
QT_MOC_LITERAL(13, 170, 19), // "enaSoundStateChange"
QT_MOC_LITERAL(14, 190, 21), // "enaSoundLowPassChange"
QT_MOC_LITERAL(15, 212, 16), // "swapDutyCallback"
QT_MOC_LITERAL(16, 229, 21), // "useGlobalFocusChanged"
QT_MOC_LITERAL(17, 251, 19), // "soundQualityChanged"
QT_MOC_LITERAL(18, 271, 5), // "index"
QT_MOC_LITERAL(19, 277, 16) // "soundRateChanged"

    },
    "ConsoleSndConfDialog_t\0closeWindow\0\0"
    "resetCounters\0periodicUpdate\0"
    "bufSizeChanged\0value\0volumeChanged\0"
    "triangleChanged\0square1Changed\0"
    "square2Changed\0noiseChanged\0pcmChanged\0"
    "enaSoundStateChange\0enaSoundLowPassChange\0"
    "swapDutyCallback\0useGlobalFocusChanged\0"
    "soundQualityChanged\0index\0soundRateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConsoleSndConfDialog_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    1,   97,    2, 0x08 /* Private */,
       7,    1,  100,    2, 0x08 /* Private */,
       8,    1,  103,    2, 0x08 /* Private */,
       9,    1,  106,    2, 0x08 /* Private */,
      10,    1,  109,    2, 0x08 /* Private */,
      11,    1,  112,    2, 0x08 /* Private */,
      12,    1,  115,    2, 0x08 /* Private */,
      13,    1,  118,    2, 0x08 /* Private */,
      14,    1,  121,    2, 0x08 /* Private */,
      15,    1,  124,    2, 0x08 /* Private */,
      16,    1,  127,    2, 0x08 /* Private */,
      17,    1,  130,    2, 0x08 /* Private */,
      19,    1,  133,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void ConsoleSndConfDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConsoleSndConfDialog_t *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->resetCounters(); break;
        case 2: _t->periodicUpdate(); break;
        case 3: _t->bufSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->triangleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->square1Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->square2Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->noiseChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->pcmChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->enaSoundStateChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->enaSoundLowPassChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->swapDutyCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->useGlobalFocusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->soundQualityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->soundRateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConsoleSndConfDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ConsoleSndConfDialog_t.data,
    qt_meta_data_ConsoleSndConfDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConsoleSndConfDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConsoleSndConfDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConsoleSndConfDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ConsoleSndConfDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
