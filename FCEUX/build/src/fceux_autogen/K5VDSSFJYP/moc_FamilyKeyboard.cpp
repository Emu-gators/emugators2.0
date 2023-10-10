/****************************************************************************
** Meta object code from reading C++ file 'FamilyKeyboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/FamilyKeyboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FamilyKeyboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FamilyKeyboardWidget_t {
    QByteArrayData data[5];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FamilyKeyboardWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FamilyKeyboardWidget_t qt_meta_stringdata_FamilyKeyboardWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "FamilyKeyboardWidget"
QT_MOC_LITERAL(1, 21, 14), // "updatePeriodic"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "ctxMapPhysicalKey"
QT_MOC_LITERAL(4, 55, 22) // "ctxChangeToggleOnPress"

    },
    "FamilyKeyboardWidget\0updatePeriodic\0"
    "\0ctxMapPhysicalKey\0ctxChangeToggleOnPress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FamilyKeyboardWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FamilyKeyboardWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FamilyKeyboardWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatePeriodic(); break;
        case 1: _t->ctxMapPhysicalKey(); break;
        case 2: _t->ctxChangeToggleOnPress(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FamilyKeyboardWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FamilyKeyboardWidget.data,
    qt_meta_data_FamilyKeyboardWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FamilyKeyboardWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FamilyKeyboardWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FamilyKeyboardWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FamilyKeyboardWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FKBKeyMapDialog_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FKBKeyMapDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FKBKeyMapDialog_t qt_meta_stringdata_FKBKeyMapDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FKBKeyMapDialog"
QT_MOC_LITERAL(1, 16, 11), // "closeWindow"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "FKBKeyMapDialog\0closeWindow\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FKBKeyMapDialog[] = {

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

void FKBKeyMapDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FKBKeyMapDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FKBKeyMapDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FKBKeyMapDialog.data,
    qt_meta_data_FKBKeyMapDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FKBKeyMapDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FKBKeyMapDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FKBKeyMapDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FKBKeyMapDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_FKBConfigDialog_t {
    QByteArrayData data[19];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FKBConfigDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FKBConfigDialog_t qt_meta_stringdata_FKBConfigDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FKBConfigDialog"
QT_MOC_LITERAL(1, 16, 11), // "closeWindow"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "updatePeriodic"
QT_MOC_LITERAL(4, 44, 17), // "updateStatusLabel"
QT_MOC_LITERAL(5, 62, 14), // "openFontDialog"
QT_MOC_LITERAL(6, 77, 11), // "mappingLoad"
QT_MOC_LITERAL(7, 89, 11), // "mappingSave"
QT_MOC_LITERAL(8, 101, 13), // "mappingSaveAs"
QT_MOC_LITERAL(9, 115, 14), // "toggleTreeView"
QT_MOC_LITERAL(10, 130, 18), // "SaveCurrentMapping"
QT_MOC_LITERAL(11, 149, 19), // "resetDefaultMapping"
QT_MOC_LITERAL(12, 169, 26), // "toggleFamilyKeyboardEnable"
QT_MOC_LITERAL(13, 196, 17), // "keyTreeResizeDone"
QT_MOC_LITERAL(14, 214, 19), // "keyTreeHeightChange"
QT_MOC_LITERAL(15, 234, 20), // "keyTreeItemActivated"
QT_MOC_LITERAL(16, 255, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(17, 272, 4), // "item"
QT_MOC_LITERAL(18, 277, 6) // "column"

    },
    "FKBConfigDialog\0closeWindow\0\0"
    "updatePeriodic\0updateStatusLabel\0"
    "openFontDialog\0mappingLoad\0mappingSave\0"
    "mappingSaveAs\0toggleTreeView\0"
    "SaveCurrentMapping\0resetDefaultMapping\0"
    "toggleFamilyKeyboardEnable\0keyTreeResizeDone\0"
    "keyTreeHeightChange\0keyTreeItemActivated\0"
    "QTreeWidgetItem*\0item\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FKBConfigDialog[] = {

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
       9,    1,   91,    2, 0x08 /* Private */,
      10,    0,   94,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    1,   98,    2, 0x08 /* Private */,
      15,    2,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Int,   17,   18,

       0        // eod
};

void FKBConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FKBConfigDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->updatePeriodic(); break;
        case 2: _t->updateStatusLabel(); break;
        case 3: _t->openFontDialog(); break;
        case 4: _t->mappingLoad(); break;
        case 5: _t->mappingSave(); break;
        case 6: _t->mappingSaveAs(); break;
        case 7: _t->toggleTreeView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->SaveCurrentMapping(); break;
        case 9: _t->resetDefaultMapping(); break;
        case 10: _t->toggleFamilyKeyboardEnable(); break;
        case 11: _t->keyTreeResizeDone(); break;
        case 12: _t->keyTreeHeightChange((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 13: _t->keyTreeItemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FKBConfigDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FKBConfigDialog.data,
    qt_meta_data_FKBConfigDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FKBConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FKBConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FKBConfigDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FKBConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
