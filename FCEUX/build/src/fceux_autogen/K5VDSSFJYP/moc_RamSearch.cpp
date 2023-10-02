/****************************************************************************
** Meta object code from reading C++ file 'RamSearch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/RamSearch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RamSearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QRamSearchView_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRamSearchView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRamSearchView_t qt_meta_stringdata_QRamSearchView = {
    {
QT_MOC_LITERAL(0, 0, 14) // "QRamSearchView"

    },
    "QRamSearchView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRamSearchView[] = {

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

void QRamSearchView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QRamSearchView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QRamSearchView.data,
    qt_meta_data_QRamSearchView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QRamSearchView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRamSearchView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QRamSearchView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QRamSearchView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RamSearchDialog_t_t {
    QByteArrayData data[38];
    char stringdata0[502];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RamSearchDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RamSearchDialog_t_t qt_meta_stringdata_RamSearchDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 17), // "RamSearchDialog_t"
QT_MOC_LITERAL(1, 18, 11), // "closeWindow"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 9), // "runSearch"
QT_MOC_LITERAL(4, 41, 11), // "resetSearch"
QT_MOC_LITERAL(5, 53, 10), // "undoSearch"
QT_MOC_LITERAL(6, 64, 17), // "clearChangeCounts"
QT_MOC_LITERAL(7, 82, 16), // "eliminateSelAddr"
QT_MOC_LITERAL(8, 99, 14), // "hexEditSelAddr"
QT_MOC_LITERAL(9, 114, 15), // "addCheatClicked"
QT_MOC_LITERAL(10, 130, 18), // "addRamWatchClicked"
QT_MOC_LITERAL(11, 149, 14), // "periodicUpdate"
QT_MOC_LITERAL(12, 164, 11), // "hbarChanged"
QT_MOC_LITERAL(13, 176, 3), // "val"
QT_MOC_LITERAL(14, 180, 11), // "vbarChanged"
QT_MOC_LITERAL(15, 192, 16), // "searchRAMChanged"
QT_MOC_LITERAL(16, 209, 5), // "state"
QT_MOC_LITERAL(17, 215, 17), // "searchSRAMChanged"
QT_MOC_LITERAL(18, 233, 16), // "searchROMChanged"
QT_MOC_LITERAL(19, 250, 17), // "misalignedChanged"
QT_MOC_LITERAL(20, 268, 10), // "ds1Clicked"
QT_MOC_LITERAL(21, 279, 10), // "ds2Clicked"
QT_MOC_LITERAL(22, 290, 10), // "ds4Clicked"
QT_MOC_LITERAL(23, 301, 17), // "signedTypeClicked"
QT_MOC_LITERAL(24, 319, 19), // "unsignedTypeClicked"
QT_MOC_LITERAL(25, 339, 14), // "hexTypeClicked"
QT_MOC_LITERAL(26, 354, 11), // "opLtClicked"
QT_MOC_LITERAL(27, 366, 11), // "opGtClicked"
QT_MOC_LITERAL(28, 378, 11), // "opLeClicked"
QT_MOC_LITERAL(29, 390, 11), // "opGeClicked"
QT_MOC_LITERAL(30, 402, 11), // "opEqClicked"
QT_MOC_LITERAL(31, 414, 11), // "opNeClicked"
QT_MOC_LITERAL(32, 426, 11), // "opDfClicked"
QT_MOC_LITERAL(33, 438, 11), // "opMdClicked"
QT_MOC_LITERAL(34, 450, 12), // "pvBtnClicked"
QT_MOC_LITERAL(35, 463, 12), // "svBtnClicked"
QT_MOC_LITERAL(36, 476, 12), // "saBtnClicked"
QT_MOC_LITERAL(37, 489, 12) // "ncBtnClicked"

    },
    "RamSearchDialog_t\0closeWindow\0\0runSearch\0"
    "resetSearch\0undoSearch\0clearChangeCounts\0"
    "eliminateSelAddr\0hexEditSelAddr\0"
    "addCheatClicked\0addRamWatchClicked\0"
    "periodicUpdate\0hbarChanged\0val\0"
    "vbarChanged\0searchRAMChanged\0state\0"
    "searchSRAMChanged\0searchROMChanged\0"
    "misalignedChanged\0ds1Clicked\0ds2Clicked\0"
    "ds4Clicked\0signedTypeClicked\0"
    "unsignedTypeClicked\0hexTypeClicked\0"
    "opLtClicked\0opGtClicked\0opLeClicked\0"
    "opGeClicked\0opEqClicked\0opNeClicked\0"
    "opDfClicked\0opMdClicked\0pvBtnClicked\0"
    "svBtnClicked\0saBtnClicked\0ncBtnClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RamSearchDialog_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  184,    2, 0x0a /* Public */,
       3,    0,  185,    2, 0x08 /* Private */,
       4,    0,  186,    2, 0x08 /* Private */,
       5,    0,  187,    2, 0x08 /* Private */,
       6,    0,  188,    2, 0x08 /* Private */,
       7,    0,  189,    2, 0x08 /* Private */,
       8,    0,  190,    2, 0x08 /* Private */,
       9,    0,  191,    2, 0x08 /* Private */,
      10,    0,  192,    2, 0x08 /* Private */,
      11,    0,  193,    2, 0x08 /* Private */,
      12,    1,  194,    2, 0x08 /* Private */,
      14,    1,  197,    2, 0x08 /* Private */,
      15,    1,  200,    2, 0x08 /* Private */,
      17,    1,  203,    2, 0x08 /* Private */,
      18,    1,  206,    2, 0x08 /* Private */,
      19,    1,  209,    2, 0x08 /* Private */,
      20,    0,  212,    2, 0x08 /* Private */,
      21,    0,  213,    2, 0x08 /* Private */,
      22,    0,  214,    2, 0x08 /* Private */,
      23,    0,  215,    2, 0x08 /* Private */,
      24,    0,  216,    2, 0x08 /* Private */,
      25,    0,  217,    2, 0x08 /* Private */,
      26,    0,  218,    2, 0x08 /* Private */,
      27,    0,  219,    2, 0x08 /* Private */,
      28,    0,  220,    2, 0x08 /* Private */,
      29,    0,  221,    2, 0x08 /* Private */,
      30,    0,  222,    2, 0x08 /* Private */,
      31,    0,  223,    2, 0x08 /* Private */,
      32,    0,  224,    2, 0x08 /* Private */,
      33,    0,  225,    2, 0x08 /* Private */,
      34,    0,  226,    2, 0x08 /* Private */,
      35,    0,  227,    2, 0x08 /* Private */,
      36,    0,  228,    2, 0x08 /* Private */,
      37,    0,  229,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
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

       0        // eod
};

void RamSearchDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RamSearchDialog_t *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->runSearch(); break;
        case 2: _t->resetSearch(); break;
        case 3: _t->undoSearch(); break;
        case 4: _t->clearChangeCounts(); break;
        case 5: _t->eliminateSelAddr(); break;
        case 6: _t->hexEditSelAddr(); break;
        case 7: _t->addCheatClicked(); break;
        case 8: _t->addRamWatchClicked(); break;
        case 9: _t->periodicUpdate(); break;
        case 10: _t->hbarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->vbarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->searchRAMChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->searchSRAMChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->searchROMChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->misalignedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->ds1Clicked(); break;
        case 17: _t->ds2Clicked(); break;
        case 18: _t->ds4Clicked(); break;
        case 19: _t->signedTypeClicked(); break;
        case 20: _t->unsignedTypeClicked(); break;
        case 21: _t->hexTypeClicked(); break;
        case 22: _t->opLtClicked(); break;
        case 23: _t->opGtClicked(); break;
        case 24: _t->opLeClicked(); break;
        case 25: _t->opGeClicked(); break;
        case 26: _t->opEqClicked(); break;
        case 27: _t->opNeClicked(); break;
        case 28: _t->opDfClicked(); break;
        case 29: _t->opMdClicked(); break;
        case 30: _t->pvBtnClicked(); break;
        case 31: _t->svBtnClicked(); break;
        case 32: _t->saBtnClicked(); break;
        case 33: _t->ncBtnClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RamSearchDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_RamSearchDialog_t.data,
    qt_meta_data_RamSearchDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RamSearchDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RamSearchDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RamSearchDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RamSearchDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 34;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
