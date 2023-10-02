/****************************************************************************
** Meta object code from reading C++ file 'TraceLogger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/TraceLogger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TraceLogger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QTraceLogView_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTraceLogView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTraceLogView_t qt_meta_stringdata_QTraceLogView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QTraceLogView"
QT_MOC_LITERAL(1, 14, 12), // "ctxMenuAddBP"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13) // "ctxMenuAddSym"

    },
    "QTraceLogView\0ctxMenuAddBP\0\0ctxMenuAddSym"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTraceLogView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QTraceLogView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QTraceLogView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ctxMenuAddBP(); break;
        case 1: _t->ctxMenuAddSym(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QTraceLogView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QTraceLogView.data,
    qt_meta_data_QTraceLogView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QTraceLogView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTraceLogView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QTraceLogView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QTraceLogView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_TraceLogDiskThread_t_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TraceLogDiskThread_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TraceLogDiskThread_t_t qt_meta_stringdata_TraceLogDiskThread_t = {
    {
QT_MOC_LITERAL(0, 0, 20), // "TraceLogDiskThread_t"
QT_MOC_LITERAL(1, 21, 8), // "finished"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "TraceLogDiskThread_t\0finished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TraceLogDiskThread_t[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void TraceLogDiskThread_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TraceLogDiskThread_t *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TraceLogDiskThread_t::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceLogDiskThread_t::finished)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TraceLogDiskThread_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_TraceLogDiskThread_t.data,
    qt_meta_data_TraceLogDiskThread_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TraceLogDiskThread_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TraceLogDiskThread_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TraceLogDiskThread_t.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int TraceLogDiskThread_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void TraceLogDiskThread_t::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_TraceLoggerDialog_t_t {
    QByteArrayData data[31];
    char stringdata0[562];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TraceLoggerDialog_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TraceLoggerDialog_t_t qt_meta_stringdata_TraceLoggerDialog_t = {
    {
QT_MOC_LITERAL(0, 0, 19), // "TraceLoggerDialog_t"
QT_MOC_LITERAL(1, 20, 11), // "closeWindow"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "updatePeriodic"
QT_MOC_LITERAL(4, 48, 18), // "toggleLoggingOnOff"
QT_MOC_LITERAL(5, 67, 22), // "autoUpdateStateChanged"
QT_MOC_LITERAL(6, 90, 5), // "state"
QT_MOC_LITERAL(7, 96, 21), // "logToFileStateChanged"
QT_MOC_LITERAL(8, 118, 18), // "logRegStateChanged"
QT_MOC_LITERAL(9, 137, 20), // "logFrameStateChanged"
QT_MOC_LITERAL(10, 158, 21), // "logEmuMsgStateChanged"
QT_MOC_LITERAL(11, 180, 23), // "symTraceEnaStateChanged"
QT_MOC_LITERAL(12, 204, 27), // "logProcStatFlagStateChanged"
QT_MOC_LITERAL(13, 232, 26), // "logCyclesCountStateChanged"
QT_MOC_LITERAL(14, 259, 25), // "logBreakpointStateChanged"
QT_MOC_LITERAL(15, 285, 27), // "useStackPointerStateChanged"
QT_MOC_LITERAL(16, 313, 29), // "toLeftDisassemblyStateChanged"
QT_MOC_LITERAL(17, 343, 25), // "logInstrCountStateChanged"
QT_MOC_LITERAL(18, 369, 22), // "logBankNumStateChanged"
QT_MOC_LITERAL(19, 392, 20), // "logNewMapCodeChanged"
QT_MOC_LITERAL(20, 413, 20), // "logNewMapDataChanged"
QT_MOC_LITERAL(21, 434, 18), // "logMaxLinesChanged"
QT_MOC_LITERAL(22, 453, 5), // "index"
QT_MOC_LITERAL(23, 459, 11), // "hbarChanged"
QT_MOC_LITERAL(24, 471, 5), // "value"
QT_MOC_LITERAL(25, 477, 11), // "vbarChanged"
QT_MOC_LITERAL(26, 489, 19), // "vbarActionTriggered"
QT_MOC_LITERAL(27, 509, 15), // "pageUpActivated"
QT_MOC_LITERAL(28, 525, 15), // "pageDnActivated"
QT_MOC_LITERAL(29, 541, 11), // "openLogFile"
QT_MOC_LITERAL(30, 553, 8) // "clearLog"

    },
    "TraceLoggerDialog_t\0closeWindow\0\0"
    "updatePeriodic\0toggleLoggingOnOff\0"
    "autoUpdateStateChanged\0state\0"
    "logToFileStateChanged\0logRegStateChanged\0"
    "logFrameStateChanged\0logEmuMsgStateChanged\0"
    "symTraceEnaStateChanged\0"
    "logProcStatFlagStateChanged\0"
    "logCyclesCountStateChanged\0"
    "logBreakpointStateChanged\0"
    "useStackPointerStateChanged\0"
    "toLeftDisassemblyStateChanged\0"
    "logInstrCountStateChanged\0"
    "logBankNumStateChanged\0logNewMapCodeChanged\0"
    "logNewMapDataChanged\0logMaxLinesChanged\0"
    "index\0hbarChanged\0value\0vbarChanged\0"
    "vbarActionTriggered\0pageUpActivated\0"
    "pageDnActivated\0openLogFile\0clearLog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TraceLoggerDialog_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x0a /* Public */,
       3,    0,  145,    2, 0x08 /* Private */,
       4,    0,  146,    2, 0x08 /* Private */,
       5,    1,  147,    2, 0x08 /* Private */,
       7,    1,  150,    2, 0x08 /* Private */,
       8,    1,  153,    2, 0x08 /* Private */,
       9,    1,  156,    2, 0x08 /* Private */,
      10,    1,  159,    2, 0x08 /* Private */,
      11,    1,  162,    2, 0x08 /* Private */,
      12,    1,  165,    2, 0x08 /* Private */,
      13,    1,  168,    2, 0x08 /* Private */,
      14,    1,  171,    2, 0x08 /* Private */,
      15,    1,  174,    2, 0x08 /* Private */,
      16,    1,  177,    2, 0x08 /* Private */,
      17,    1,  180,    2, 0x08 /* Private */,
      18,    1,  183,    2, 0x08 /* Private */,
      19,    1,  186,    2, 0x08 /* Private */,
      20,    1,  189,    2, 0x08 /* Private */,
      21,    1,  192,    2, 0x08 /* Private */,
      23,    1,  195,    2, 0x08 /* Private */,
      25,    1,  198,    2, 0x08 /* Private */,
      26,    1,  201,    2, 0x08 /* Private */,
      27,    0,  204,    2, 0x08 /* Private */,
      28,    0,  205,    2, 0x08 /* Private */,
      29,    0,  206,    2, 0x08 /* Private */,
      30,    0,  207,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TraceLoggerDialog_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TraceLoggerDialog_t *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->updatePeriodic(); break;
        case 2: _t->toggleLoggingOnOff(); break;
        case 3: _t->autoUpdateStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->logToFileStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->logRegStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->logFrameStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->logEmuMsgStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->symTraceEnaStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->logProcStatFlagStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->logCyclesCountStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->logBreakpointStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->useStackPointerStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->toLeftDisassemblyStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->logInstrCountStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->logBankNumStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->logNewMapCodeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->logNewMapDataChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->logMaxLinesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->hbarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->vbarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->vbarActionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->pageUpActivated(); break;
        case 23: _t->pageDnActivated(); break;
        case 24: _t->openLogFile(); break;
        case 25: _t->clearLog(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TraceLoggerDialog_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TraceLoggerDialog_t.data,
    qt_meta_data_TraceLoggerDialog_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TraceLoggerDialog_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TraceLoggerDialog_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TraceLoggerDialog_t.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TraceLoggerDialog_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
