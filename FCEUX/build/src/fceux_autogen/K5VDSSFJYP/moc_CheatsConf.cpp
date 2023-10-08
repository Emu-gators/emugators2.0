/****************************************************************************
** Meta object code from reading C++ file 'CheatsConf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/CheatsConf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CheatsConf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiCheatsDialog_t_t {
    QByteArrayData data[22];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiCheatsDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiCheatsDialog_t_t qt_meta_stringdata_GuiCheatsDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 17), // "GuiCheatsDialog_t"
QT_MOC_LITERAL(1, 18, 11), // "closeWindow"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "resetSearchCallback"
QT_MOC_LITERAL(4, 51, 18), // "knownValueCallback"
QT_MOC_LITERAL(5, 70, 18), // "equalValueCallback"
QT_MOC_LITERAL(6, 89, 21), // "notEqualValueCallback"
QT_MOC_LITERAL(7, 111, 21), // "lessThanValueCallback"
QT_MOC_LITERAL(8, 133, 24), // "greaterThanValueCallback"
QT_MOC_LITERAL(9, 158, 13), // "openCheatFile"
QT_MOC_LITERAL(10, 172, 13), // "saveCheatFile"
QT_MOC_LITERAL(11, 186, 12), // "addActvCheat"
QT_MOC_LITERAL(12, 199, 15), // "deleteActvCheat"
QT_MOC_LITERAL(13, 215, 21), // "updateCheatParameters"
QT_MOC_LITERAL(14, 237, 18), // "autoLoadSaveCheats"
QT_MOC_LITERAL(15, 256, 5), // "state"
QT_MOC_LITERAL(16, 262, 18), // "globalEnableCheats"
QT_MOC_LITERAL(17, 281, 16), // "pauseWindowState"
QT_MOC_LITERAL(18, 298, 20), // "actvCheatItemClicked"
QT_MOC_LITERAL(19, 319, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(20, 336, 4), // "item"
QT_MOC_LITERAL(21, 341, 6) // "column"

    },
    "GuiCheatsDialog_t\0closeWindow\0\0"
    "resetSearchCallback\0knownValueCallback\0"
    "equalValueCallback\0notEqualValueCallback\0"
    "lessThanValueCallback\0greaterThanValueCallback\0"
    "openCheatFile\0saveCheatFile\0addActvCheat\0"
    "deleteActvCheat\0updateCheatParameters\0"
    "autoLoadSaveCheats\0state\0globalEnableCheats\0"
    "pauseWindowState\0actvCheatItemClicked\0"
    "QTreeWidgetItem*\0item\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiCheatsDialog_t[] = {

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
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    1,  106,    2, 0x08 /* Private */,
      16,    1,  109,    2, 0x08 /* Private */,
      17,    1,  112,    2, 0x08 /* Private */,
      18,    2,  115,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Int,   20,   21,

       0        // eod
};

void GuiCheatsDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiCheatsDialog_t *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->resetSearchCallback(); break;
        case 2: _t->knownValueCallback(); break;
        case 3: _t->equalValueCallback(); break;
        case 4: _t->notEqualValueCallback(); break;
        case 5: _t->lessThanValueCallback(); break;
        case 6: _t->greaterThanValueCallback(); break;
        case 7: _t->openCheatFile(); break;
        case 8: _t->saveCheatFile(); break;
        case 9: _t->addActvCheat(); break;
        case 10: _t->deleteActvCheat(); break;
        case 11: _t->updateCheatParameters(); break;
        case 12: _t->autoLoadSaveCheats((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->globalEnableCheats((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->pauseWindowState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->actvCheatItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiCheatsDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_GuiCheatsDialog_t.data,
    qt_meta_data_GuiCheatsDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiCheatsDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiCheatsDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiCheatsDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GuiCheatsDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
