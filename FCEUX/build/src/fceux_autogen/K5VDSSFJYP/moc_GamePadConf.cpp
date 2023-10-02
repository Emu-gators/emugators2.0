/****************************************************************************
** Meta object code from reading C++ file 'GamePadConf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/GamePadConf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GamePadConf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HotKeySelectDialog_t_t {
    QByteArrayData data[9];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HotKeySelectDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HotKeySelectDialog_t_t qt_meta_stringdata_HotKeySelectDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 20), // "HotKeySelectDialog_t"
QT_MOC_LITERAL(1, 21, 11), // "closeWindow"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "acceptCB"
QT_MOC_LITERAL(4, 43, 8), // "rejectCB"
QT_MOC_LITERAL(5, 52, 17), // "hotkeyItemClicked"
QT_MOC_LITERAL(6, 70, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(7, 87, 4), // "item"
QT_MOC_LITERAL(8, 92, 6) // "column"

    },
    "HotKeySelectDialog_t\0closeWindow\0\0"
    "acceptCB\0rejectCB\0hotkeyItemClicked\0"
    "QTreeWidgetItem*\0item\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HotKeySelectDialog_t[] = {

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
       5,    2,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,

       0        // eod
};

void HotKeySelectDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HotKeySelectDialog_t *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->acceptCB(); break;
        case 2: _t->rejectCB(); break;
        case 3: _t->hotkeyItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HotKeySelectDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_HotKeySelectDialog_t.data,
    qt_meta_data_HotKeySelectDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HotKeySelectDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HotKeySelectDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HotKeySelectDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int HotKeySelectDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_GamePadFuncConfigDialog_t {
    QByteArrayData data[13];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GamePadFuncConfigDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GamePadFuncConfigDialog_t qt_meta_stringdata_GamePadFuncConfigDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "GamePadFuncConfigDialog"
QT_MOC_LITERAL(1, 24, 11), // "closeWindow"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "acceptCB"
QT_MOC_LITERAL(4, 46, 8), // "rejectCB"
QT_MOC_LITERAL(5, 55, 13), // "changeButton0"
QT_MOC_LITERAL(6, 69, 13), // "changeButton1"
QT_MOC_LITERAL(7, 83, 13), // "changeKeySeq0"
QT_MOC_LITERAL(8, 97, 13), // "changeKeySeq1"
QT_MOC_LITERAL(9, 111, 12), // "clearButton0"
QT_MOC_LITERAL(10, 124, 12), // "clearButton1"
QT_MOC_LITERAL(11, 137, 12), // "clearButton2"
QT_MOC_LITERAL(12, 150, 12) // "clearButton3"

    },
    "GamePadFuncConfigDialog\0closeWindow\0"
    "\0acceptCB\0rejectCB\0changeButton0\0"
    "changeButton1\0changeKeySeq0\0changeKeySeq1\0"
    "clearButton0\0clearButton1\0clearButton2\0"
    "clearButton3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GamePadFuncConfigDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

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

       0        // eod
};

void GamePadFuncConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GamePadFuncConfigDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->acceptCB(); break;
        case 2: _t->rejectCB(); break;
        case 3: _t->changeButton0(); break;
        case 4: _t->changeButton1(); break;
        case 5: _t->changeKeySeq0(); break;
        case 6: _t->changeKeySeq1(); break;
        case 7: _t->clearButton0(); break;
        case 8: _t->clearButton1(); break;
        case 9: _t->clearButton2(); break;
        case 10: _t->clearButton3(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GamePadFuncConfigDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_GamePadFuncConfigDialog.data,
    qt_meta_data_GamePadFuncConfigDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GamePadFuncConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GamePadFuncConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GamePadFuncConfigDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GamePadFuncConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
struct qt_meta_stringdata_GamePadView_t_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GamePadView_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GamePadView_t_t qt_meta_stringdata_GamePadView_t = {
    {
QT_MOC_LITERAL(0, 0, 13) // "GamePadView_t"

    },
    "GamePadView_t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GamePadView_t[] = {

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

void GamePadView_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GamePadView_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GamePadView_t.data,
    qt_meta_data_GamePadView_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GamePadView_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GamePadView_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GamePadView_t.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GamePadView_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GamePadConfDialog_t_t {
    QByteArrayData data[45];
    char stringdata0[653];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GamePadConfDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GamePadConfDialog_t_t qt_meta_stringdata_GamePadConfDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 19), // "GamePadConfDialog_t"
QT_MOC_LITERAL(1, 20, 11), // "closeWindow"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "changeButton0"
QT_MOC_LITERAL(4, 47, 13), // "changeButton1"
QT_MOC_LITERAL(5, 61, 13), // "changeButton2"
QT_MOC_LITERAL(6, 75, 13), // "changeButton3"
QT_MOC_LITERAL(7, 89, 13), // "changeButton4"
QT_MOC_LITERAL(8, 103, 13), // "changeButton5"
QT_MOC_LITERAL(9, 117, 13), // "changeButton6"
QT_MOC_LITERAL(10, 131, 13), // "changeButton7"
QT_MOC_LITERAL(11, 145, 13), // "changeButton8"
QT_MOC_LITERAL(12, 159, 13), // "changeButton9"
QT_MOC_LITERAL(13, 173, 12), // "clearButton0"
QT_MOC_LITERAL(14, 186, 12), // "clearButton1"
QT_MOC_LITERAL(15, 199, 12), // "clearButton2"
QT_MOC_LITERAL(16, 212, 12), // "clearButton3"
QT_MOC_LITERAL(17, 225, 12), // "clearButton4"
QT_MOC_LITERAL(18, 238, 12), // "clearButton5"
QT_MOC_LITERAL(19, 251, 12), // "clearButton6"
QT_MOC_LITERAL(20, 264, 12), // "clearButton7"
QT_MOC_LITERAL(21, 277, 12), // "clearButton8"
QT_MOC_LITERAL(22, 290, 12), // "clearButton9"
QT_MOC_LITERAL(23, 303, 16), // "clearAllCallback"
QT_MOC_LITERAL(24, 320, 16), // "btnConfigChanged"
QT_MOC_LITERAL(25, 337, 5), // "index"
QT_MOC_LITERAL(26, 343, 9), // "ena4score"
QT_MOC_LITERAL(27, 353, 5), // "state"
QT_MOC_LITERAL(28, 359, 9), // "oppDirEna"
QT_MOC_LITERAL(29, 369, 10), // "portSelect"
QT_MOC_LITERAL(30, 380, 12), // "deviceSelect"
QT_MOC_LITERAL(31, 393, 18), // "newProfileCallback"
QT_MOC_LITERAL(32, 412, 19), // "loadProfileCallback"
QT_MOC_LITERAL(33, 432, 19), // "saveProfileCallback"
QT_MOC_LITERAL(34, 452, 21), // "deleteProfileCallback"
QT_MOC_LITERAL(35, 474, 14), // "updatePeriodic"
QT_MOC_LITERAL(36, 489, 25), // "changeSequentallyCallback"
QT_MOC_LITERAL(37, 515, 21), // "newKeyBindingCallback"
QT_MOC_LITERAL(38, 537, 22), // "editKeyBindingCallback"
QT_MOC_LITERAL(39, 560, 21), // "delKeyBindingCallback"
QT_MOC_LITERAL(40, 582, 21), // "advBindingViewChanged"
QT_MOC_LITERAL(41, 604, 16), // "advOptResizeDone"
QT_MOC_LITERAL(42, 621, 17), // "advOptWidthChange"
QT_MOC_LITERAL(43, 639, 5), // "value"
QT_MOC_LITERAL(44, 645, 7) // "saveAll"

    },
    "GamePadConfDialog_t\0closeWindow\0\0"
    "changeButton0\0changeButton1\0changeButton2\0"
    "changeButton3\0changeButton4\0changeButton5\0"
    "changeButton6\0changeButton7\0changeButton8\0"
    "changeButton9\0clearButton0\0clearButton1\0"
    "clearButton2\0clearButton3\0clearButton4\0"
    "clearButton5\0clearButton6\0clearButton7\0"
    "clearButton8\0clearButton9\0clearAllCallback\0"
    "btnConfigChanged\0index\0ena4score\0state\0"
    "oppDirEna\0portSelect\0deviceSelect\0"
    "newProfileCallback\0loadProfileCallback\0"
    "saveProfileCallback\0deleteProfileCallback\0"
    "updatePeriodic\0changeSequentallyCallback\0"
    "newKeyBindingCallback\0editKeyBindingCallback\0"
    "delKeyBindingCallback\0advBindingViewChanged\0"
    "advOptResizeDone\0advOptWidthChange\0"
    "value\0saveAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GamePadConfDialog_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  214,    2, 0x0a /* Public */,
       3,    0,  215,    2, 0x08 /* Private */,
       4,    0,  216,    2, 0x08 /* Private */,
       5,    0,  217,    2, 0x08 /* Private */,
       6,    0,  218,    2, 0x08 /* Private */,
       7,    0,  219,    2, 0x08 /* Private */,
       8,    0,  220,    2, 0x08 /* Private */,
       9,    0,  221,    2, 0x08 /* Private */,
      10,    0,  222,    2, 0x08 /* Private */,
      11,    0,  223,    2, 0x08 /* Private */,
      12,    0,  224,    2, 0x08 /* Private */,
      13,    0,  225,    2, 0x08 /* Private */,
      14,    0,  226,    2, 0x08 /* Private */,
      15,    0,  227,    2, 0x08 /* Private */,
      16,    0,  228,    2, 0x08 /* Private */,
      17,    0,  229,    2, 0x08 /* Private */,
      18,    0,  230,    2, 0x08 /* Private */,
      19,    0,  231,    2, 0x08 /* Private */,
      20,    0,  232,    2, 0x08 /* Private */,
      21,    0,  233,    2, 0x08 /* Private */,
      22,    0,  234,    2, 0x08 /* Private */,
      23,    0,  235,    2, 0x08 /* Private */,
      24,    1,  236,    2, 0x08 /* Private */,
      26,    1,  239,    2, 0x08 /* Private */,
      28,    1,  242,    2, 0x08 /* Private */,
      29,    1,  245,    2, 0x08 /* Private */,
      30,    1,  248,    2, 0x08 /* Private */,
      31,    0,  251,    2, 0x08 /* Private */,
      32,    0,  252,    2, 0x08 /* Private */,
      33,    0,  253,    2, 0x08 /* Private */,
      34,    0,  254,    2, 0x08 /* Private */,
      35,    0,  255,    2, 0x08 /* Private */,
      36,    0,  256,    2, 0x08 /* Private */,
      37,    0,  257,    2, 0x08 /* Private */,
      38,    0,  258,    2, 0x08 /* Private */,
      39,    0,  259,    2, 0x08 /* Private */,
      40,    1,  260,    2, 0x08 /* Private */,
      41,    0,  263,    2, 0x08 /* Private */,
      42,    1,  264,    2, 0x08 /* Private */,
      44,    0,  267,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,   43,
    QMetaType::Void,

       0        // eod
};

void GamePadConfDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GamePadConfDialog_t *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->changeButton0(); break;
        case 2: _t->changeButton1(); break;
        case 3: _t->changeButton2(); break;
        case 4: _t->changeButton3(); break;
        case 5: _t->changeButton4(); break;
        case 6: _t->changeButton5(); break;
        case 7: _t->changeButton6(); break;
        case 8: _t->changeButton7(); break;
        case 9: _t->changeButton8(); break;
        case 10: _t->changeButton9(); break;
        case 11: _t->clearButton0(); break;
        case 12: _t->clearButton1(); break;
        case 13: _t->clearButton2(); break;
        case 14: _t->clearButton3(); break;
        case 15: _t->clearButton4(); break;
        case 16: _t->clearButton5(); break;
        case 17: _t->clearButton6(); break;
        case 18: _t->clearButton7(); break;
        case 19: _t->clearButton8(); break;
        case 20: _t->clearButton9(); break;
        case 21: _t->clearAllCallback(); break;
        case 22: _t->btnConfigChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->ena4score((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->oppDirEna((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->portSelect((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->deviceSelect((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->newProfileCallback(); break;
        case 28: _t->loadProfileCallback(); break;
        case 29: _t->saveProfileCallback(); break;
        case 30: _t->deleteProfileCallback(); break;
        case 31: _t->updatePeriodic(); break;
        case 32: _t->changeSequentallyCallback(); break;
        case 33: _t->newKeyBindingCallback(); break;
        case 34: _t->editKeyBindingCallback(); break;
        case 35: _t->delKeyBindingCallback(); break;
        case 36: _t->advBindingViewChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->advOptResizeDone(); break;
        case 38: _t->advOptWidthChange((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 39: _t->saveAll(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GamePadConfDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_GamePadConfDialog_t.data,
    qt_meta_data_GamePadConfDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GamePadConfDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GamePadConfDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GamePadConfDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GamePadConfDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 40;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
