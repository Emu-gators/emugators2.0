/****************************************************************************
** Meta object code from reading C++ file 'ConsoleDebugger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/ConsoleDebugger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConsoleDebugger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAsmView_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAsmView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAsmView_t qt_meta_stringdata_QAsmView = {
    {
QT_MOC_LITERAL(0, 0, 8) // "QAsmView"

    },
    "QAsmView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAsmView[] = {

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

void QAsmView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QAsmView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QAsmView.data,
    qt_meta_data_QAsmView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QAsmView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAsmView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAsmView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QAsmView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DebuggerStackDisplay_t {
    QByteArrayData data[7];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebuggerStackDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebuggerStackDisplay_t qt_meta_stringdata_DebuggerStackDisplay = {
    {
QT_MOC_LITERAL(0, 0, 20), // "DebuggerStackDisplay"
QT_MOC_LITERAL(1, 21, 14), // "toggleShowAddr"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "sel1BytePerLine"
QT_MOC_LITERAL(4, 53, 16), // "sel2BytesPerLine"
QT_MOC_LITERAL(5, 70, 16), // "sel3BytesPerLine"
QT_MOC_LITERAL(6, 87, 16) // "sel4BytesPerLine"

    },
    "DebuggerStackDisplay\0toggleShowAddr\0"
    "\0sel1BytePerLine\0sel2BytesPerLine\0"
    "sel3BytesPerLine\0sel4BytesPerLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebuggerStackDisplay[] = {

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
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DebuggerStackDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DebuggerStackDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggleShowAddr(); break;
        case 1: _t->sel1BytePerLine(); break;
        case 2: _t->sel2BytesPerLine(); break;
        case 3: _t->sel3BytesPerLine(); break;
        case 4: _t->sel4BytesPerLine(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DebuggerStackDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlainTextEdit::staticMetaObject>(),
    qt_meta_stringdata_DebuggerStackDisplay.data,
    qt_meta_data_DebuggerStackDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebuggerStackDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebuggerStackDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebuggerStackDisplay.stringdata0))
        return static_cast<void*>(this);
    return QPlainTextEdit::qt_metacast(_clname);
}

int DebuggerStackDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_asmLookAheadPopup_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_asmLookAheadPopup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_asmLookAheadPopup_t qt_meta_stringdata_asmLookAheadPopup = {
    {
QT_MOC_LITERAL(0, 0, 17) // "asmLookAheadPopup"

    },
    "asmLookAheadPopup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_asmLookAheadPopup[] = {

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

void asmLookAheadPopup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject asmLookAheadPopup::staticMetaObject = { {
    QMetaObject::SuperData::link<fceuCustomToolTip::staticMetaObject>(),
    qt_meta_stringdata_asmLookAheadPopup.data,
    qt_meta_data_asmLookAheadPopup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *asmLookAheadPopup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *asmLookAheadPopup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_asmLookAheadPopup.stringdata0))
        return static_cast<void*>(this);
    return fceuCustomToolTip::qt_metacast(_clname);
}

int asmLookAheadPopup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = fceuCustomToolTip::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ppuRegPopup_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ppuRegPopup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ppuRegPopup_t qt_meta_stringdata_ppuRegPopup = {
    {
QT_MOC_LITERAL(0, 0, 11) // "ppuRegPopup"

    },
    "ppuRegPopup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ppuRegPopup[] = {

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

void ppuRegPopup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ppuRegPopup::staticMetaObject = { {
    QMetaObject::SuperData::link<fceuCustomToolTip::staticMetaObject>(),
    qt_meta_stringdata_ppuRegPopup.data,
    qt_meta_data_ppuRegPopup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ppuRegPopup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ppuRegPopup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ppuRegPopup.stringdata0))
        return static_cast<void*>(this);
    return fceuCustomToolTip::qt_metacast(_clname);
}

int ppuRegPopup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = fceuCustomToolTip::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ppuCtrlRegDpy_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ppuCtrlRegDpy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ppuCtrlRegDpy_t qt_meta_stringdata_ppuCtrlRegDpy = {
    {
QT_MOC_LITERAL(0, 0, 13) // "ppuCtrlRegDpy"

    },
    "ppuCtrlRegDpy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ppuCtrlRegDpy[] = {

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

void ppuCtrlRegDpy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ppuCtrlRegDpy::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_ppuCtrlRegDpy.data,
    qt_meta_data_ppuCtrlRegDpy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ppuCtrlRegDpy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ppuCtrlRegDpy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ppuCtrlRegDpy.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int ppuCtrlRegDpy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DebuggerTabBar_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebuggerTabBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebuggerTabBar_t qt_meta_stringdata_DebuggerTabBar = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DebuggerTabBar"
QT_MOC_LITERAL(1, 15, 12), // "beginDragOut"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "DebuggerTabBar\0beginDragOut\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebuggerTabBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void DebuggerTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DebuggerTabBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->beginDragOut((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DebuggerTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebuggerTabBar::beginDragOut)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DebuggerTabBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabBar::staticMetaObject>(),
    qt_meta_stringdata_DebuggerTabBar.data,
    qt_meta_data_DebuggerTabBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebuggerTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebuggerTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebuggerTabBar.stringdata0))
        return static_cast<void*>(this);
    return QTabBar::qt_metacast(_clname);
}

int DebuggerTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabBar::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void DebuggerTabBar::beginDragOut(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_DebuggerTabWidget_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebuggerTabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebuggerTabWidget_t qt_meta_stringdata_DebuggerTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 17) // "DebuggerTabWidget"

    },
    "DebuggerTabWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebuggerTabWidget[] = {

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

void DebuggerTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DebuggerTabWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    qt_meta_stringdata_DebuggerTabWidget.data,
    qt_meta_data_DebuggerTabWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebuggerTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebuggerTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebuggerTabWidget.stringdata0))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int DebuggerTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DebugBreakOnDialog_t {
    QByteArrayData data[13];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugBreakOnDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugBreakOnDialog_t qt_meta_stringdata_DebugBreakOnDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DebugBreakOnDialog"
QT_MOC_LITERAL(1, 19, 11), // "closeWindow"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "ret"
QT_MOC_LITERAL(4, 36, 12), // "setThreshold"
QT_MOC_LITERAL(5, 49, 22), // "unsigned long long int"
QT_MOC_LITERAL(6, 72, 3), // "val"
QT_MOC_LITERAL(7, 76, 4), // "text"
QT_MOC_LITERAL(8, 81, 13), // "incrThreshold"
QT_MOC_LITERAL(9, 95, 14), // "refModeChanged"
QT_MOC_LITERAL(10, 110, 13), // "syncToCurrent"
QT_MOC_LITERAL(11, 124, 13), // "resetCounters"
QT_MOC_LITERAL(12, 138, 11) // "resetDeltas"

    },
    "DebugBreakOnDialog\0closeWindow\0\0ret\0"
    "setThreshold\0unsigned long long int\0"
    "val\0text\0incrThreshold\0refModeChanged\0"
    "syncToCurrent\0resetCounters\0resetDeltas"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugBreakOnDialog[] = {

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
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       4,    1,   60,    2, 0x0a /* Public */,
       8,    1,   63,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x0a /* Public */,
      11,    0,   70,    2, 0x0a /* Public */,
      12,    0,   71,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DebugBreakOnDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DebugBreakOnDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setThreshold((*reinterpret_cast< unsigned long long int(*)>(_a[1]))); break;
        case 2: _t->setThreshold((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->incrThreshold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->refModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->syncToCurrent(); break;
        case 6: _t->resetCounters(); break;
        case 7: _t->resetDeltas(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DebugBreakOnDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DebugBreakOnDialog.data,
    qt_meta_data_DebugBreakOnDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebugBreakOnDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugBreakOnDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugBreakOnDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DebugBreakOnDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_ConsoleDebugger_t {
    QByteArrayData data[72];
    char stringdata0[1100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConsoleDebugger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConsoleDebugger_t qt_meta_stringdata_ConsoleDebugger = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ConsoleDebugger"
QT_MOC_LITERAL(1, 16, 11), // "closeWindow"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 18), // "asmViewCtxMenuGoTo"
QT_MOC_LITERAL(4, 48, 19), // "asmViewCtxMenuAddBP"
QT_MOC_LITERAL(5, 68, 19), // "asmViewCtxMenuAddBM"
QT_MOC_LITERAL(6, 88, 20), // "asmViewCtxMenuAddSym"
QT_MOC_LITERAL(7, 109, 25), // "asmViewCtxMenuOpenHexEdit"
QT_MOC_LITERAL(8, 135, 25), // "asmViewCtxMenuRunToCursor"
QT_MOC_LITERAL(9, 161, 7), // "moveTab"
QT_MOC_LITERAL(10, 169, 8), // "QWidget*"
QT_MOC_LITERAL(11, 178, 1), // "w"
QT_MOC_LITERAL(12, 180, 3), // "row"
QT_MOC_LITERAL(13, 184, 6), // "column"
QT_MOC_LITERAL(14, 191, 14), // "updatePeriodic"
QT_MOC_LITERAL(15, 206, 11), // "hbarChanged"
QT_MOC_LITERAL(16, 218, 5), // "value"
QT_MOC_LITERAL(17, 224, 11), // "vbarChanged"
QT_MOC_LITERAL(18, 236, 10), // "debugRunCB"
QT_MOC_LITERAL(19, 247, 15), // "debugStepIntoCB"
QT_MOC_LITERAL(20, 263, 14), // "debugStepOutCB"
QT_MOC_LITERAL(21, 278, 15), // "debugStepOverCB"
QT_MOC_LITERAL(22, 294, 15), // "debugStepBackCB"
QT_MOC_LITERAL(23, 310, 18), // "debugRunToCursorCB"
QT_MOC_LITERAL(24, 329, 14), // "debugRunLineCB"
QT_MOC_LITERAL(25, 344, 17), // "debugRunLine128CB"
QT_MOC_LITERAL(26, 362, 18), // "openGotoAddrDialog"
QT_MOC_LITERAL(27, 381, 18), // "openChangePcDialog"
QT_MOC_LITERAL(28, 400, 8), // "seekPCCB"
QT_MOC_LITERAL(29, 409, 9), // "add_BP_CB"
QT_MOC_LITERAL(30, 419, 10), // "edit_BP_CB"
QT_MOC_LITERAL(31, 430, 12), // "delete_BP_CB"
QT_MOC_LITERAL(32, 443, 9), // "add_BM_CB"
QT_MOC_LITERAL(33, 453, 10), // "edit_BM_CB"
QT_MOC_LITERAL(34, 464, 12), // "delete_BM_CB"
QT_MOC_LITERAL(35, 477, 15), // "setLayoutOption"
QT_MOC_LITERAL(36, 493, 6), // "layout"
QT_MOC_LITERAL(37, 500, 23), // "resizeToMinimumSizeHint"
QT_MOC_LITERAL(38, 524, 15), // "resetCountersCB"
QT_MOC_LITERAL(39, 540, 15), // "reloadSymbolsCB"
QT_MOC_LITERAL(40, 556, 18), // "displayByteCodesCB"
QT_MOC_LITERAL(41, 575, 18), // "displayTraceDataCB"
QT_MOC_LITERAL(42, 594, 18), // "displayROMoffsetCB"
QT_MOC_LITERAL(43, 613, 19), // "symbolDebugEnableCB"
QT_MOC_LITERAL(44, 633, 20), // "registerNameEnableCB"
QT_MOC_LITERAL(45, 654, 15), // "autoOpenDebugCB"
QT_MOC_LITERAL(46, 670, 17), // "debFileAutoLoadCB"
QT_MOC_LITERAL(47, 688, 18), // "breakOnBadOpcodeCB"
QT_MOC_LITERAL(48, 707, 16), // "breakOnNewCodeCB"
QT_MOC_LITERAL(49, 724, 16), // "breakOnNewDataCB"
QT_MOC_LITERAL(50, 741, 15), // "breakOnCyclesCB"
QT_MOC_LITERAL(51, 757, 21), // "breakOnInstructionsCB"
QT_MOC_LITERAL(52, 779, 13), // "bpItemClicked"
QT_MOC_LITERAL(53, 793, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(54, 810, 4), // "item"
QT_MOC_LITERAL(55, 815, 13), // "bmItemClicked"
QT_MOC_LITERAL(56, 829, 19), // "bmItemDoubleClicked"
QT_MOC_LITERAL(57, 849, 20), // "cpuCycleThresChanged"
QT_MOC_LITERAL(58, 870, 3), // "txt"
QT_MOC_LITERAL(59, 874, 24), // "instructionsThresChanged"
QT_MOC_LITERAL(60, 899, 16), // "selBmAddrChanged"
QT_MOC_LITERAL(61, 916, 13), // "pcSetPlaceTop"
QT_MOC_LITERAL(62, 930, 18), // "pcSetPlaceUpperMid"
QT_MOC_LITERAL(63, 949, 16), // "pcSetPlaceCenter"
QT_MOC_LITERAL(64, 966, 18), // "pcSetPlaceLowerMid"
QT_MOC_LITERAL(65, 985, 16), // "pcSetPlaceBottom"
QT_MOC_LITERAL(66, 1002, 16), // "pcSetPlaceCustom"
QT_MOC_LITERAL(67, 1019, 15), // "changeAsmFontCB"
QT_MOC_LITERAL(68, 1035, 17), // "changeStackFontCB"
QT_MOC_LITERAL(69, 1053, 15), // "changeCpuFontCB"
QT_MOC_LITERAL(70, 1069, 13), // "navHistBackCB"
QT_MOC_LITERAL(71, 1083, 16) // "navHistForwardCB"

    },
    "ConsoleDebugger\0closeWindow\0\0"
    "asmViewCtxMenuGoTo\0asmViewCtxMenuAddBP\0"
    "asmViewCtxMenuAddBM\0asmViewCtxMenuAddSym\0"
    "asmViewCtxMenuOpenHexEdit\0"
    "asmViewCtxMenuRunToCursor\0moveTab\0"
    "QWidget*\0w\0row\0column\0updatePeriodic\0"
    "hbarChanged\0value\0vbarChanged\0debugRunCB\0"
    "debugStepIntoCB\0debugStepOutCB\0"
    "debugStepOverCB\0debugStepBackCB\0"
    "debugRunToCursorCB\0debugRunLineCB\0"
    "debugRunLine128CB\0openGotoAddrDialog\0"
    "openChangePcDialog\0seekPCCB\0add_BP_CB\0"
    "edit_BP_CB\0delete_BP_CB\0add_BM_CB\0"
    "edit_BM_CB\0delete_BM_CB\0setLayoutOption\0"
    "layout\0resizeToMinimumSizeHint\0"
    "resetCountersCB\0reloadSymbolsCB\0"
    "displayByteCodesCB\0displayTraceDataCB\0"
    "displayROMoffsetCB\0symbolDebugEnableCB\0"
    "registerNameEnableCB\0autoOpenDebugCB\0"
    "debFileAutoLoadCB\0breakOnBadOpcodeCB\0"
    "breakOnNewCodeCB\0breakOnNewDataCB\0"
    "breakOnCyclesCB\0breakOnInstructionsCB\0"
    "bpItemClicked\0QTreeWidgetItem*\0item\0"
    "bmItemClicked\0bmItemDoubleClicked\0"
    "cpuCycleThresChanged\0txt\0"
    "instructionsThresChanged\0selBmAddrChanged\0"
    "pcSetPlaceTop\0pcSetPlaceUpperMid\0"
    "pcSetPlaceCenter\0pcSetPlaceLowerMid\0"
    "pcSetPlaceBottom\0pcSetPlaceCustom\0"
    "changeAsmFontCB\0changeStackFontCB\0"
    "changeCpuFontCB\0navHistBackCB\0"
    "navHistForwardCB"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConsoleDebugger[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  319,    2, 0x0a /* Public */,
       3,    0,  320,    2, 0x0a /* Public */,
       4,    0,  321,    2, 0x0a /* Public */,
       5,    0,  322,    2, 0x0a /* Public */,
       6,    0,  323,    2, 0x0a /* Public */,
       7,    0,  324,    2, 0x0a /* Public */,
       8,    0,  325,    2, 0x0a /* Public */,
       9,    3,  326,    2, 0x0a /* Public */,
      14,    0,  333,    2, 0x08 /* Private */,
      15,    1,  334,    2, 0x08 /* Private */,
      17,    1,  337,    2, 0x08 /* Private */,
      18,    0,  340,    2, 0x08 /* Private */,
      19,    0,  341,    2, 0x08 /* Private */,
      20,    0,  342,    2, 0x08 /* Private */,
      21,    0,  343,    2, 0x08 /* Private */,
      22,    0,  344,    2, 0x08 /* Private */,
      23,    0,  345,    2, 0x08 /* Private */,
      24,    0,  346,    2, 0x08 /* Private */,
      25,    0,  347,    2, 0x08 /* Private */,
      26,    0,  348,    2, 0x08 /* Private */,
      27,    0,  349,    2, 0x08 /* Private */,
      28,    0,  350,    2, 0x08 /* Private */,
      29,    0,  351,    2, 0x08 /* Private */,
      30,    0,  352,    2, 0x08 /* Private */,
      31,    0,  353,    2, 0x08 /* Private */,
      32,    0,  354,    2, 0x08 /* Private */,
      33,    0,  355,    2, 0x08 /* Private */,
      34,    0,  356,    2, 0x08 /* Private */,
      35,    1,  357,    2, 0x08 /* Private */,
      37,    0,  360,    2, 0x08 /* Private */,
      38,    0,  361,    2, 0x08 /* Private */,
      39,    0,  362,    2, 0x08 /* Private */,
      40,    1,  363,    2, 0x08 /* Private */,
      41,    1,  366,    2, 0x08 /* Private */,
      42,    1,  369,    2, 0x08 /* Private */,
      43,    1,  372,    2, 0x08 /* Private */,
      44,    1,  375,    2, 0x08 /* Private */,
      45,    1,  378,    2, 0x08 /* Private */,
      46,    1,  381,    2, 0x08 /* Private */,
      47,    1,  384,    2, 0x08 /* Private */,
      48,    1,  387,    2, 0x08 /* Private */,
      49,    1,  390,    2, 0x08 /* Private */,
      50,    1,  393,    2, 0x08 /* Private */,
      51,    1,  396,    2, 0x08 /* Private */,
      52,    2,  399,    2, 0x08 /* Private */,
      55,    2,  404,    2, 0x08 /* Private */,
      56,    2,  409,    2, 0x08 /* Private */,
      57,    1,  414,    2, 0x08 /* Private */,
      59,    1,  417,    2, 0x08 /* Private */,
      60,    1,  420,    2, 0x08 /* Private */,
      61,    0,  423,    2, 0x08 /* Private */,
      62,    0,  424,    2, 0x08 /* Private */,
      63,    0,  425,    2, 0x08 /* Private */,
      64,    0,  426,    2, 0x08 /* Private */,
      65,    0,  427,    2, 0x08 /* Private */,
      66,    0,  428,    2, 0x08 /* Private */,
      67,    0,  429,    2, 0x08 /* Private */,
      68,    0,  430,    2, 0x08 /* Private */,
      69,    0,  431,    2, 0x08 /* Private */,
      70,    0,  432,    2, 0x08 /* Private */,
      71,    0,  433,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void,
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
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, 0x80000000 | 53, QMetaType::Int,   54,   13,
    QMetaType::Void, 0x80000000 | 53, QMetaType::Int,   54,   13,
    QMetaType::Void, 0x80000000 | 53, QMetaType::Int,   54,   13,
    QMetaType::Void, QMetaType::QString,   58,
    QMetaType::Void, QMetaType::QString,   58,
    QMetaType::Void, QMetaType::QString,   58,
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

void ConsoleDebugger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConsoleDebugger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->asmViewCtxMenuGoTo(); break;
        case 2: _t->asmViewCtxMenuAddBP(); break;
        case 3: _t->asmViewCtxMenuAddBM(); break;
        case 4: _t->asmViewCtxMenuAddSym(); break;
        case 5: _t->asmViewCtxMenuOpenHexEdit(); break;
        case 6: _t->asmViewCtxMenuRunToCursor(); break;
        case 7: _t->moveTab((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->updatePeriodic(); break;
        case 9: _t->hbarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->vbarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->debugRunCB(); break;
        case 12: _t->debugStepIntoCB(); break;
        case 13: _t->debugStepOutCB(); break;
        case 14: _t->debugStepOverCB(); break;
        case 15: _t->debugStepBackCB(); break;
        case 16: _t->debugRunToCursorCB(); break;
        case 17: _t->debugRunLineCB(); break;
        case 18: _t->debugRunLine128CB(); break;
        case 19: _t->openGotoAddrDialog(); break;
        case 20: _t->openChangePcDialog(); break;
        case 21: _t->seekPCCB(); break;
        case 22: _t->add_BP_CB(); break;
        case 23: _t->edit_BP_CB(); break;
        case 24: _t->delete_BP_CB(); break;
        case 25: _t->add_BM_CB(); break;
        case 26: _t->edit_BM_CB(); break;
        case 27: _t->delete_BM_CB(); break;
        case 28: _t->setLayoutOption((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->resizeToMinimumSizeHint(); break;
        case 30: _t->resetCountersCB(); break;
        case 31: _t->reloadSymbolsCB(); break;
        case 32: _t->displayByteCodesCB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->displayTraceDataCB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->displayROMoffsetCB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->symbolDebugEnableCB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->registerNameEnableCB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->autoOpenDebugCB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->debFileAutoLoadCB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->breakOnBadOpcodeCB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->breakOnNewCodeCB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->breakOnNewDataCB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->breakOnCyclesCB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->breakOnInstructionsCB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->bpItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->bmItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 46: _t->bmItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 47: _t->cpuCycleThresChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 48: _t->instructionsThresChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 49: _t->selBmAddrChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 50: _t->pcSetPlaceTop(); break;
        case 51: _t->pcSetPlaceUpperMid(); break;
        case 52: _t->pcSetPlaceCenter(); break;
        case 53: _t->pcSetPlaceLowerMid(); break;
        case 54: _t->pcSetPlaceBottom(); break;
        case 55: _t->pcSetPlaceCustom(); break;
        case 56: _t->changeAsmFontCB(); break;
        case 57: _t->changeStackFontCB(); break;
        case 58: _t->changeCpuFontCB(); break;
        case 59: _t->navHistBackCB(); break;
        case 60: _t->navHistForwardCB(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConsoleDebugger::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ConsoleDebugger.data,
    qt_meta_data_ConsoleDebugger,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConsoleDebugger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConsoleDebugger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConsoleDebugger.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ConsoleDebugger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
