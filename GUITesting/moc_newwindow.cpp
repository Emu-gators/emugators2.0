/****************************************************************************
** Meta object code from reading C++ file 'newwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "newwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NewWindow_t {
    QByteArrayData data[12];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewWindow_t qt_meta_stringdata_NewWindow = {
    {
QT_MOC_LITERAL(0, 0, 9), // "NewWindow"
QT_MOC_LITERAL(1, 10, 18), // "on_topLeft_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 22), // "on_bottomRight_clicked"
QT_MOC_LITERAL(4, 53, 11), // "resizeEvent"
QT_MOC_LITERAL(5, 65, 13), // "QResizeEvent*"
QT_MOC_LITERAL(6, 79, 3), // "evt"
QT_MOC_LITERAL(7, 83, 15), // "mousePressEvent"
QT_MOC_LITERAL(8, 99, 12), // "QMouseEvent*"
QT_MOC_LITERAL(9, 112, 5), // "event"
QT_MOC_LITERAL(10, 118, 7), // "explode"
QT_MOC_LITERAL(11, 126, 5) // "close"

    },
    "NewWindow\0on_topLeft_clicked\0\0"
    "on_bottomRight_clicked\0resizeEvent\0"
    "QResizeEvent*\0evt\0mousePressEvent\0"
    "QMouseEvent*\0event\0explode\0close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewWindow[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,
      10,    0,   52,    2, 0x08 /* Private */,
      11,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NewWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_topLeft_clicked(); break;
        case 1: _t->on_bottomRight_clicked(); break;
        case 2: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 3: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->explode(); break;
        case 5: _t->close(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NewWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_NewWindow.data,
    qt_meta_data_NewWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NewWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NewWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int NewWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
