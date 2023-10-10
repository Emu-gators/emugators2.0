/****************************************************************************
** Meta object code from reading C++ file 'TasEditorWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/TasEditor/TasEditorWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TasEditorWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_bookmarkPreviewPopup_t {
    QByteArrayData data[4];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bookmarkPreviewPopup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bookmarkPreviewPopup_t qt_meta_stringdata_bookmarkPreviewPopup = {
    {
QT_MOC_LITERAL(0, 0, 20), // "bookmarkPreviewPopup"
QT_MOC_LITERAL(1, 21, 14), // "periodicUpdate"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17) // "imageIndexChanged"

    },
    "bookmarkPreviewPopup\0periodicUpdate\0"
    "\0imageIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bookmarkPreviewPopup[] = {

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
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void bookmarkPreviewPopup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<bookmarkPreviewPopup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->periodicUpdate(); break;
        case 1: _t->imageIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject bookmarkPreviewPopup::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_bookmarkPreviewPopup.data,
    qt_meta_data_bookmarkPreviewPopup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *bookmarkPreviewPopup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bookmarkPreviewPopup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_bookmarkPreviewPopup.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int bookmarkPreviewPopup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_markerDragPopup_t {
    QByteArrayData data[3];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_markerDragPopup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_markerDragPopup_t qt_meta_stringdata_markerDragPopup = {
    {
QT_MOC_LITERAL(0, 0, 15), // "markerDragPopup"
QT_MOC_LITERAL(1, 16, 8), // "fadeAway"
QT_MOC_LITERAL(2, 25, 0) // ""

    },
    "markerDragPopup\0fadeAway\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_markerDragPopup[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void markerDragPopup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<markerDragPopup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fadeAway(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject markerDragPopup::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_markerDragPopup.data,
    qt_meta_data_markerDragPopup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *markerDragPopup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *markerDragPopup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_markerDragPopup.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int markerDragPopup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_QPianoRoll_t {
    QByteArrayData data[6];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPianoRoll_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPianoRoll_t qt_meta_stringdata_QPianoRoll = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QPianoRoll"
QT_MOC_LITERAL(1, 11, 11), // "hbarChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "val"
QT_MOC_LITERAL(4, 28, 11), // "vbarChanged"
QT_MOC_LITERAL(5, 40, 15) // "setupMarkerDrag"

    },
    "QPianoRoll\0hbarChanged\0\0val\0vbarChanged\0"
    "setupMarkerDrag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPianoRoll[] = {

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
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       5,    0,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void QPianoRoll::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPianoRoll *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hbarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->vbarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setupMarkerDrag(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QPianoRoll::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QPianoRoll.data,
    qt_meta_data_QPianoRoll,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPianoRoll::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPianoRoll::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPianoRoll.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QPianoRoll::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PianoRollScrollBar_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PianoRollScrollBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PianoRollScrollBar_t qt_meta_stringdata_PianoRollScrollBar = {
    {
QT_MOC_LITERAL(0, 0, 18) // "PianoRollScrollBar"

    },
    "PianoRollScrollBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PianoRollScrollBar[] = {

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

void PianoRollScrollBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PianoRollScrollBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollBar::staticMetaObject>(),
    qt_meta_stringdata_PianoRollScrollBar.data,
    qt_meta_data_PianoRollScrollBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PianoRollScrollBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PianoRollScrollBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PianoRollScrollBar.stringdata0))
        return static_cast<void*>(this);
    return QScrollBar::qt_metacast(_clname);
}

int PianoRollScrollBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollBar::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TasRecentProjectAction_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TasRecentProjectAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TasRecentProjectAction_t qt_meta_stringdata_TasRecentProjectAction = {
    {
QT_MOC_LITERAL(0, 0, 22), // "TasRecentProjectAction"
QT_MOC_LITERAL(1, 23, 10), // "activateCB"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "TasRecentProjectAction\0activateCB\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TasRecentProjectAction[] = {

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

void TasRecentProjectAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TasRecentProjectAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activateCB(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TasRecentProjectAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_TasRecentProjectAction.data,
    qt_meta_data_TasRecentProjectAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TasRecentProjectAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TasRecentProjectAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TasRecentProjectAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int TasRecentProjectAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_TasFindNoteWindow_t {
    QByteArrayData data[8];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TasFindNoteWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TasFindNoteWindow_t qt_meta_stringdata_TasFindNoteWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TasFindNoteWindow"
QT_MOC_LITERAL(1, 18, 11), // "closeWindow"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 16), // "matchCaseChanged"
QT_MOC_LITERAL(4, 48, 19), // "upDirectionSelected"
QT_MOC_LITERAL(5, 68, 21), // "downDirectionSelected"
QT_MOC_LITERAL(6, 90, 15), // "findNextClicked"
QT_MOC_LITERAL(7, 106, 20) // "searchPatternChanged"

    },
    "TasFindNoteWindow\0closeWindow\0\0"
    "matchCaseChanged\0upDirectionSelected\0"
    "downDirectionSelected\0findNextClicked\0"
    "searchPatternChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TasFindNoteWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    1,   45,    2, 0x08 /* Private */,
       4,    0,   48,    2, 0x08 /* Private */,
       5,    0,   49,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void TasFindNoteWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TasFindNoteWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->matchCaseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->upDirectionSelected(); break;
        case 3: _t->downDirectionSelected(); break;
        case 4: _t->findNextClicked(); break;
        case 5: _t->searchPatternChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TasFindNoteWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TasFindNoteWindow.data,
    qt_meta_data_TasFindNoteWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TasFindNoteWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TasFindNoteWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TasFindNoteWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TasFindNoteWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_TasEditorSplitter_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TasEditorSplitter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TasEditorSplitter_t qt_meta_stringdata_TasEditorSplitter = {
    {
QT_MOC_LITERAL(0, 0, 17) // "TasEditorSplitter"

    },
    "TasEditorSplitter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TasEditorSplitter[] = {

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

void TasEditorSplitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TasEditorSplitter::staticMetaObject = { {
    QMetaObject::SuperData::link<QSplitter::staticMetaObject>(),
    qt_meta_stringdata_TasEditorSplitter.data,
    qt_meta_data_TasEditorSplitter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TasEditorSplitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TasEditorSplitter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TasEditorSplitter.stringdata0))
        return static_cast<void*>(this);
    return QSplitter::qt_metacast(_clname);
}

int TasEditorSplitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TasEditorWindow_t {
    QByteArrayData data[92];
    char stringdata0[1660];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TasEditorWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TasEditorWindow_t qt_meta_stringdata_TasEditorWindow = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TasEditorWindow"
QT_MOC_LITERAL(1, 16, 11), // "closeWindow"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "frameUpdate"
QT_MOC_LITERAL(4, 41, 18), // "updateCheckedItems"
QT_MOC_LITERAL(5, 60, 18), // "updateRecordStatus"
QT_MOC_LITERAL(6, 79, 11), // "openProject"
QT_MOC_LITERAL(7, 91, 13), // "saveProjectCb"
QT_MOC_LITERAL(8, 105, 15), // "saveProjectAsCb"
QT_MOC_LITERAL(9, 121, 20), // "saveProjectCompactCb"
QT_MOC_LITERAL(10, 142, 16), // "createNewProject"
QT_MOC_LITERAL(11, 159, 15), // "importMovieFile"
QT_MOC_LITERAL(12, 175, 15), // "exportMovieFile"
QT_MOC_LITERAL(13, 191, 14), // "openOnlineDocs"
QT_MOC_LITERAL(14, 206, 16), // "recordingChanged"
QT_MOC_LITERAL(15, 223, 18), // "recordInputChanged"
QT_MOC_LITERAL(16, 242, 19), // "superImposedChanged"
QT_MOC_LITERAL(17, 262, 17), // "usePatternChanged"
QT_MOC_LITERAL(18, 280, 15), // "playbackPauseCB"
QT_MOC_LITERAL(19, 296, 19), // "playbackFrameRewind"
QT_MOC_LITERAL(20, 316, 20), // "playbackFrameForward"
QT_MOC_LITERAL(21, 337, 23), // "playbackFrameRewindFull"
QT_MOC_LITERAL(22, 361, 24), // "playbackFrameForwardFull"
QT_MOC_LITERAL(23, 386, 20), // "scrollSelectionUpOne"
QT_MOC_LITERAL(24, 407, 20), // "scrollSelectionDnOne"
QT_MOC_LITERAL(25, 428, 10), // "editUndoCB"
QT_MOC_LITERAL(26, 439, 10), // "editRedoCB"
QT_MOC_LITERAL(27, 450, 13), // "editUndoSelCB"
QT_MOC_LITERAL(28, 464, 13), // "editRedoSelCB"
QT_MOC_LITERAL(29, 478, 15), // "editDeselectAll"
QT_MOC_LITERAL(30, 494, 13), // "editSelectAll"
QT_MOC_LITERAL(31, 508, 14), // "editSelBtwMkrs"
QT_MOC_LITERAL(32, 523, 21), // "editReselectClipboard"
QT_MOC_LITERAL(33, 545, 9), // "editCutCB"
QT_MOC_LITERAL(34, 555, 10), // "editCopyCB"
QT_MOC_LITERAL(35, 566, 11), // "editPasteCB"
QT_MOC_LITERAL(36, 578, 17), // "editPasteInsertCB"
QT_MOC_LITERAL(37, 596, 11), // "editClearCB"
QT_MOC_LITERAL(38, 608, 12), // "editDeleteCB"
QT_MOC_LITERAL(39, 621, 11), // "editCloneCB"
QT_MOC_LITERAL(40, 633, 12), // "editInsertCB"
QT_MOC_LITERAL(41, 646, 21), // "editInsertNumFramesCB"
QT_MOC_LITERAL(42, 668, 19), // "editTruncateMovieCB"
QT_MOC_LITERAL(43, 688, 18), // "openFindNoteWindow"
QT_MOC_LITERAL(44, 707, 19), // "dpyBrnchScrnChanged"
QT_MOC_LITERAL(45, 727, 19), // "dpyBrnchDescChanged"
QT_MOC_LITERAL(46, 747, 16), // "enaHotChgChanged"
QT_MOC_LITERAL(47, 764, 20), // "followUndoActChanged"
QT_MOC_LITERAL(48, 785, 19), // "followMkrActChanged"
QT_MOC_LITERAL(49, 805, 18), // "enaGrnznActChanged"
QT_MOC_LITERAL(50, 824, 23), // "afPtrnSkipLagActChanged"
QT_MOC_LITERAL(51, 848, 21), // "adjInputLagActChanged"
QT_MOC_LITERAL(52, 870, 23), // "drawInputDragActChanged"
QT_MOC_LITERAL(53, 894, 20), // "cmbRecDrawActChanged"
QT_MOC_LITERAL(54, 915, 21), // "use1PforRecActChanged"
QT_MOC_LITERAL(55, 937, 24), // "useInputColSetActChanged"
QT_MOC_LITERAL(56, 962, 22), // "bindMkrInputActChanged"
QT_MOC_LITERAL(57, 985, 26), // "emptyNewMkrNotesActChanged"
QT_MOC_LITERAL(58, 1012, 26), // "oldCtlBrnhSchemeActChanged"
QT_MOC_LITERAL(59, 1039, 27), // "brnchRestoreMovieActChanged"
QT_MOC_LITERAL(60, 1067, 25), // "hudInScrnBranchActChanged"
QT_MOC_LITERAL(61, 1093, 20), // "pauseAtEndActChanged"
QT_MOC_LITERAL(62, 1114, 22), // "showToolTipsActChanged"
QT_MOC_LITERAL(63, 1137, 23), // "upperMarkerLabelClicked"
QT_MOC_LITERAL(64, 1161, 23), // "lowerMarkerLabelClicked"
QT_MOC_LITERAL(65, 1185, 21), // "histTreeItemActivated"
QT_MOC_LITERAL(66, 1207, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(67, 1224, 22), // "playbackFollowCursorCb"
QT_MOC_LITERAL(68, 1247, 21), // "playbackAutoRestoreCb"
QT_MOC_LITERAL(69, 1269, 19), // "playbackTurboSeekCb"
QT_MOC_LITERAL(70, 1289, 22), // "openProjectSaveOptions"
QT_MOC_LITERAL(71, 1312, 20), // "setGreenzoneCapacity"
QT_MOC_LITERAL(72, 1333, 18), // "setMaxUndoCapacity"
QT_MOC_LITERAL(73, 1352, 17), // "setCurrentPattern"
QT_MOC_LITERAL(74, 1370, 14), // "tabViewChanged"
QT_MOC_LITERAL(75, 1385, 15), // "findSimilarNote"
QT_MOC_LITERAL(76, 1401, 19), // "findNextSimilarNote"
QT_MOC_LITERAL(77, 1421, 20), // "jumpToPreviousMarker"
QT_MOC_LITERAL(78, 1442, 16), // "jumpToNextMarker"
QT_MOC_LITERAL(79, 1459, 15), // "openAboutWindow"
QT_MOC_LITERAL(80, 1475, 17), // "autoLuaRunChanged"
QT_MOC_LITERAL(81, 1493, 9), // "manLuaRun"
QT_MOC_LITERAL(82, 1503, 10), // "setMarkers"
QT_MOC_LITERAL(83, 1514, 13), // "removeMarkers"
QT_MOC_LITERAL(84, 1528, 25), // "ungreenzoneSelectedFrames"
QT_MOC_LITERAL(85, 1554, 14), // "activateHotkey"
QT_MOC_LITERAL(86, 1569, 5), // "hkIdx"
QT_MOC_LITERAL(87, 1575, 10), // "QShortcut*"
QT_MOC_LITERAL(88, 1586, 8), // "shortcut"
QT_MOC_LITERAL(89, 1595, 21), // "changePianoRollFontCB"
QT_MOC_LITERAL(90, 1617, 21), // "changeBookmarksFontCB"
QT_MOC_LITERAL(91, 1639, 20) // "changeBranchesFontCB"

    },
    "TasEditorWindow\0closeWindow\0\0frameUpdate\0"
    "updateCheckedItems\0updateRecordStatus\0"
    "openProject\0saveProjectCb\0saveProjectAsCb\0"
    "saveProjectCompactCb\0createNewProject\0"
    "importMovieFile\0exportMovieFile\0"
    "openOnlineDocs\0recordingChanged\0"
    "recordInputChanged\0superImposedChanged\0"
    "usePatternChanged\0playbackPauseCB\0"
    "playbackFrameRewind\0playbackFrameForward\0"
    "playbackFrameRewindFull\0"
    "playbackFrameForwardFull\0scrollSelectionUpOne\0"
    "scrollSelectionDnOne\0editUndoCB\0"
    "editRedoCB\0editUndoSelCB\0editRedoSelCB\0"
    "editDeselectAll\0editSelectAll\0"
    "editSelBtwMkrs\0editReselectClipboard\0"
    "editCutCB\0editCopyCB\0editPasteCB\0"
    "editPasteInsertCB\0editClearCB\0"
    "editDeleteCB\0editCloneCB\0editInsertCB\0"
    "editInsertNumFramesCB\0editTruncateMovieCB\0"
    "openFindNoteWindow\0dpyBrnchScrnChanged\0"
    "dpyBrnchDescChanged\0enaHotChgChanged\0"
    "followUndoActChanged\0followMkrActChanged\0"
    "enaGrnznActChanged\0afPtrnSkipLagActChanged\0"
    "adjInputLagActChanged\0drawInputDragActChanged\0"
    "cmbRecDrawActChanged\0use1PforRecActChanged\0"
    "useInputColSetActChanged\0"
    "bindMkrInputActChanged\0"
    "emptyNewMkrNotesActChanged\0"
    "oldCtlBrnhSchemeActChanged\0"
    "brnchRestoreMovieActChanged\0"
    "hudInScrnBranchActChanged\0"
    "pauseAtEndActChanged\0showToolTipsActChanged\0"
    "upperMarkerLabelClicked\0lowerMarkerLabelClicked\0"
    "histTreeItemActivated\0QTreeWidgetItem*\0"
    "playbackFollowCursorCb\0playbackAutoRestoreCb\0"
    "playbackTurboSeekCb\0openProjectSaveOptions\0"
    "setGreenzoneCapacity\0setMaxUndoCapacity\0"
    "setCurrentPattern\0tabViewChanged\0"
    "findSimilarNote\0findNextSimilarNote\0"
    "jumpToPreviousMarker\0jumpToNextMarker\0"
    "openAboutWindow\0autoLuaRunChanged\0"
    "manLuaRun\0setMarkers\0removeMarkers\0"
    "ungreenzoneSelectedFrames\0activateHotkey\0"
    "hkIdx\0QShortcut*\0shortcut\0"
    "changePianoRollFontCB\0changeBookmarksFontCB\0"
    "changeBranchesFontCB"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TasEditorWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      86,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  444,    2, 0x0a /* Public */,
       3,    0,  445,    2, 0x0a /* Public */,
       4,    0,  446,    2, 0x0a /* Public */,
       5,    0,  447,    2, 0x0a /* Public */,
       6,    0,  448,    2, 0x08 /* Private */,
       7,    0,  449,    2, 0x08 /* Private */,
       8,    0,  450,    2, 0x08 /* Private */,
       9,    0,  451,    2, 0x08 /* Private */,
      10,    0,  452,    2, 0x08 /* Private */,
      11,    0,  453,    2, 0x08 /* Private */,
      12,    0,  454,    2, 0x08 /* Private */,
      13,    0,  455,    2, 0x08 /* Private */,
      14,    1,  456,    2, 0x08 /* Private */,
      15,    1,  459,    2, 0x08 /* Private */,
      16,    1,  462,    2, 0x08 /* Private */,
      17,    1,  465,    2, 0x08 /* Private */,
      18,    0,  468,    2, 0x08 /* Private */,
      19,    0,  469,    2, 0x08 /* Private */,
      20,    0,  470,    2, 0x08 /* Private */,
      21,    0,  471,    2, 0x08 /* Private */,
      22,    0,  472,    2, 0x08 /* Private */,
      23,    0,  473,    2, 0x08 /* Private */,
      24,    0,  474,    2, 0x08 /* Private */,
      25,    0,  475,    2, 0x08 /* Private */,
      26,    0,  476,    2, 0x08 /* Private */,
      27,    0,  477,    2, 0x08 /* Private */,
      28,    0,  478,    2, 0x08 /* Private */,
      29,    0,  479,    2, 0x08 /* Private */,
      30,    0,  480,    2, 0x08 /* Private */,
      31,    0,  481,    2, 0x08 /* Private */,
      32,    0,  482,    2, 0x08 /* Private */,
      33,    0,  483,    2, 0x08 /* Private */,
      34,    0,  484,    2, 0x08 /* Private */,
      35,    0,  485,    2, 0x08 /* Private */,
      36,    0,  486,    2, 0x08 /* Private */,
      37,    0,  487,    2, 0x08 /* Private */,
      38,    0,  488,    2, 0x08 /* Private */,
      39,    0,  489,    2, 0x08 /* Private */,
      40,    0,  490,    2, 0x08 /* Private */,
      41,    0,  491,    2, 0x08 /* Private */,
      42,    0,  492,    2, 0x08 /* Private */,
      43,    0,  493,    2, 0x08 /* Private */,
      44,    1,  494,    2, 0x08 /* Private */,
      45,    1,  497,    2, 0x08 /* Private */,
      46,    1,  500,    2, 0x08 /* Private */,
      47,    1,  503,    2, 0x08 /* Private */,
      48,    1,  506,    2, 0x08 /* Private */,
      49,    1,  509,    2, 0x08 /* Private */,
      50,    1,  512,    2, 0x08 /* Private */,
      51,    1,  515,    2, 0x08 /* Private */,
      52,    1,  518,    2, 0x08 /* Private */,
      53,    1,  521,    2, 0x08 /* Private */,
      54,    1,  524,    2, 0x08 /* Private */,
      55,    1,  527,    2, 0x08 /* Private */,
      56,    1,  530,    2, 0x08 /* Private */,
      57,    1,  533,    2, 0x08 /* Private */,
      58,    1,  536,    2, 0x08 /* Private */,
      59,    1,  539,    2, 0x08 /* Private */,
      60,    1,  542,    2, 0x08 /* Private */,
      61,    1,  545,    2, 0x08 /* Private */,
      62,    1,  548,    2, 0x08 /* Private */,
      63,    0,  551,    2, 0x08 /* Private */,
      64,    0,  552,    2, 0x08 /* Private */,
      65,    2,  553,    2, 0x08 /* Private */,
      67,    1,  558,    2, 0x08 /* Private */,
      68,    1,  561,    2, 0x08 /* Private */,
      69,    1,  564,    2, 0x08 /* Private */,
      70,    0,  567,    2, 0x08 /* Private */,
      71,    0,  568,    2, 0x08 /* Private */,
      72,    0,  569,    2, 0x08 /* Private */,
      73,    1,  570,    2, 0x08 /* Private */,
      74,    1,  573,    2, 0x08 /* Private */,
      75,    0,  576,    2, 0x08 /* Private */,
      76,    0,  577,    2, 0x08 /* Private */,
      77,    0,  578,    2, 0x08 /* Private */,
      78,    0,  579,    2, 0x08 /* Private */,
      79,    0,  580,    2, 0x08 /* Private */,
      80,    1,  581,    2, 0x08 /* Private */,
      81,    0,  584,    2, 0x08 /* Private */,
      82,    0,  585,    2, 0x08 /* Private */,
      83,    0,  586,    2, 0x08 /* Private */,
      84,    0,  587,    2, 0x08 /* Private */,
      85,    2,  588,    2, 0x08 /* Private */,
      89,    0,  593,    2, 0x08 /* Private */,
      90,    0,  594,    2, 0x08 /* Private */,
      91,    0,  595,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 66, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
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
    QMetaType::Void, QMetaType::Int, 0x80000000 | 87,   86,   88,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TasEditorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TasEditorWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->frameUpdate(); break;
        case 2: _t->updateCheckedItems(); break;
        case 3: _t->updateRecordStatus(); break;
        case 4: _t->openProject(); break;
        case 5: _t->saveProjectCb(); break;
        case 6: _t->saveProjectAsCb(); break;
        case 7: _t->saveProjectCompactCb(); break;
        case 8: _t->createNewProject(); break;
        case 9: _t->importMovieFile(); break;
        case 10: _t->exportMovieFile(); break;
        case 11: _t->openOnlineDocs(); break;
        case 12: _t->recordingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->recordInputChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->superImposedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->usePatternChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->playbackPauseCB(); break;
        case 17: _t->playbackFrameRewind(); break;
        case 18: _t->playbackFrameForward(); break;
        case 19: _t->playbackFrameRewindFull(); break;
        case 20: _t->playbackFrameForwardFull(); break;
        case 21: _t->scrollSelectionUpOne(); break;
        case 22: _t->scrollSelectionDnOne(); break;
        case 23: _t->editUndoCB(); break;
        case 24: _t->editRedoCB(); break;
        case 25: _t->editUndoSelCB(); break;
        case 26: _t->editRedoSelCB(); break;
        case 27: _t->editDeselectAll(); break;
        case 28: _t->editSelectAll(); break;
        case 29: _t->editSelBtwMkrs(); break;
        case 30: _t->editReselectClipboard(); break;
        case 31: _t->editCutCB(); break;
        case 32: _t->editCopyCB(); break;
        case 33: _t->editPasteCB(); break;
        case 34: _t->editPasteInsertCB(); break;
        case 35: _t->editClearCB(); break;
        case 36: _t->editDeleteCB(); break;
        case 37: _t->editCloneCB(); break;
        case 38: _t->editInsertCB(); break;
        case 39: _t->editInsertNumFramesCB(); break;
        case 40: _t->editTruncateMovieCB(); break;
        case 41: _t->openFindNoteWindow(); break;
        case 42: _t->dpyBrnchScrnChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->dpyBrnchDescChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->enaHotChgChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->followUndoActChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->followMkrActChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->enaGrnznActChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->afPtrnSkipLagActChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->adjInputLagActChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->drawInputDragActChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->cmbRecDrawActChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->use1PforRecActChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->useInputColSetActChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->bindMkrInputActChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->emptyNewMkrNotesActChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->oldCtlBrnhSchemeActChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->brnchRestoreMovieActChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: _t->hudInScrnBranchActChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->pauseAtEndActChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: _t->showToolTipsActChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 61: _t->upperMarkerLabelClicked(); break;
        case 62: _t->lowerMarkerLabelClicked(); break;
        case 63: _t->histTreeItemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 64: _t->playbackFollowCursorCb((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: _t->playbackAutoRestoreCb((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: _t->playbackTurboSeekCb((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 67: _t->openProjectSaveOptions(); break;
        case 68: _t->setGreenzoneCapacity(); break;
        case 69: _t->setMaxUndoCapacity(); break;
        case 70: _t->setCurrentPattern((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 71: _t->tabViewChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 72: _t->findSimilarNote(); break;
        case 73: _t->findNextSimilarNote(); break;
        case 74: _t->jumpToPreviousMarker(); break;
        case 75: _t->jumpToNextMarker(); break;
        case 76: _t->openAboutWindow(); break;
        case 77: _t->autoLuaRunChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 78: _t->manLuaRun(); break;
        case 79: _t->setMarkers(); break;
        case 80: _t->removeMarkers(); break;
        case 81: _t->ungreenzoneSelectedFrames(); break;
        case 82: _t->activateHotkey((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QShortcut*(*)>(_a[2]))); break;
        case 83: _t->changePianoRollFontCB(); break;
        case 84: _t->changeBookmarksFontCB(); break;
        case 85: _t->changeBranchesFontCB(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 82:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QShortcut* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TasEditorWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TasEditorWindow.data,
    qt_meta_data_TasEditorWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TasEditorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TasEditorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TasEditorWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TasEditorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 86)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 86;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 86)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 86;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
