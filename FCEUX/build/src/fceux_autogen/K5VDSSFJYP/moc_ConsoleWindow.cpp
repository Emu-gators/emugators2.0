/****************************************************************************
** Meta object code from reading C++ file 'ConsoleWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/drivers/Qt/ConsoleWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConsoleWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_emulatorThread_t_t {
    QByteArrayData data[7];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_emulatorThread_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_emulatorThread_t_t qt_meta_stringdata_emulatorThread_t = {
    {
QT_MOC_LITERAL(0, 0, 16), // "emulatorThread_t"
QT_MOC_LITERAL(1, 17, 8), // "finished"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "frameFinished"
QT_MOC_LITERAL(4, 41, 14), // "loadRomRequest"
QT_MOC_LITERAL(5, 56, 1), // "s"
QT_MOC_LITERAL(6, 58, 15) // "closeROMRequest"

    },
    "emulatorThread_t\0finished\0\0frameFinished\0"
    "loadRomRequest\0s\0closeROMRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_emulatorThread_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    1,   36,    2, 0x06 /* Public */,
       6,    0,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void emulatorThread_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<emulatorThread_t *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->frameFinished(); break;
        case 2: _t->loadRomRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->closeROMRequest(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (emulatorThread_t::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&emulatorThread_t::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (emulatorThread_t::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&emulatorThread_t::frameFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (emulatorThread_t::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&emulatorThread_t::loadRomRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (emulatorThread_t::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&emulatorThread_t::closeROMRequest)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject emulatorThread_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_emulatorThread_t.data,
    qt_meta_data_emulatorThread_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *emulatorThread_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *emulatorThread_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_emulatorThread_t.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int emulatorThread_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void emulatorThread_t::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void emulatorThread_t::frameFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void emulatorThread_t::loadRomRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void emulatorThread_t::closeROMRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_autoFireMenuAction_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_autoFireMenuAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_autoFireMenuAction_t qt_meta_stringdata_autoFireMenuAction = {
    {
QT_MOC_LITERAL(0, 0, 18), // "autoFireMenuAction"
QT_MOC_LITERAL(1, 19, 10), // "activateCB"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "autoFireMenuAction\0activateCB\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_autoFireMenuAction[] = {

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

void autoFireMenuAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<autoFireMenuAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activateCB(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject autoFireMenuAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_autoFireMenuAction.data,
    qt_meta_data_autoFireMenuAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *autoFireMenuAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *autoFireMenuAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_autoFireMenuAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int autoFireMenuAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_consoleRecentRomAction_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_consoleRecentRomAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_consoleRecentRomAction_t qt_meta_stringdata_consoleRecentRomAction = {
    {
QT_MOC_LITERAL(0, 0, 22), // "consoleRecentRomAction"
QT_MOC_LITERAL(1, 23, 10), // "activateCB"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "consoleRecentRomAction\0activateCB\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_consoleRecentRomAction[] = {

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

void consoleRecentRomAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<consoleRecentRomAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activateCB(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject consoleRecentRomAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_consoleRecentRomAction.data,
    qt_meta_data_consoleRecentRomAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *consoleRecentRomAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *consoleRecentRomAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_consoleRecentRomAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int consoleRecentRomAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_consoleWin_t_t {
    QByteArrayData data[153];
    char stringdata0[2183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_consoleWin_t_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_consoleWin_t_t qt_meta_stringdata_consoleWin_t = {
    {
QT_MOC_LITERAL(0, 0, 12), // "consoleWin_t"
QT_MOC_LITERAL(1, 13, 15), // "openDebugWindow"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "openHexEditor"
QT_MOC_LITERAL(4, 44, 18), // "openGamePadConfWin"
QT_MOC_LITERAL(5, 63, 16), // "toggleFullscreen"
QT_MOC_LITERAL(6, 80, 13), // "toggleMenuVis"
QT_MOC_LITERAL(7, 94, 11), // "recordMovie"
QT_MOC_LITERAL(8, 106, 11), // "winResizeIx"
QT_MOC_LITERAL(9, 118, 6), // "iScale"
QT_MOC_LITERAL(10, 125, 16), // "loadRomRequestCB"
QT_MOC_LITERAL(11, 142, 1), // "s"
QT_MOC_LITERAL(12, 144, 10), // "closeROMCB"
QT_MOC_LITERAL(13, 155, 8), // "closeApp"
QT_MOC_LITERAL(14, 164, 11), // "openROMFile"
QT_MOC_LITERAL(15, 176, 7), // "loadNSF"
QT_MOC_LITERAL(16, 184, 13), // "loadStateFrom"
QT_MOC_LITERAL(17, 198, 11), // "saveStateAs"
QT_MOC_LITERAL(18, 210, 9), // "quickLoad"
QT_MOC_LITERAL(19, 220, 9), // "quickSave"
QT_MOC_LITERAL(20, 230, 10), // "aboutFCEUX"
QT_MOC_LITERAL(21, 241, 7), // "aboutQt"
QT_MOC_LITERAL(22, 249, 14), // "openOnlineDocs"
QT_MOC_LITERAL(23, 264, 15), // "openOfflineDocs"
QT_MOC_LITERAL(24, 280, 13), // "openTasEditor"
QT_MOC_LITERAL(25, 294, 13), // "openMsgLogWin"
QT_MOC_LITERAL(26, 308, 16), // "openInputConfWin"
QT_MOC_LITERAL(27, 325, 18), // "openGameSndConfWin"
QT_MOC_LITERAL(28, 344, 20), // "openGameVideoConfWin"
QT_MOC_LITERAL(29, 365, 17), // "openHotkeyConfWin"
QT_MOC_LITERAL(30, 383, 18), // "openPaletteConfWin"
QT_MOC_LITERAL(31, 402, 14), // "openGuiConfWin"
QT_MOC_LITERAL(32, 417, 17), // "openTimingConfWin"
QT_MOC_LITERAL(33, 435, 20), // "openPaletteEditorWin"
QT_MOC_LITERAL(34, 456, 17), // "openAviRiffViewer"
QT_MOC_LITERAL(35, 474, 17), // "openTimingStatWin"
QT_MOC_LITERAL(36, 492, 15), // "openMovieOptWin"
QT_MOC_LITERAL(37, 508, 18), // "openCodeDataLogger"
QT_MOC_LITERAL(38, 527, 15), // "openTraceLogger"
QT_MOC_LITERAL(39, 543, 18), // "openFamilyKeyboard"
QT_MOC_LITERAL(40, 562, 16), // "toggleAutoResume"
QT_MOC_LITERAL(41, 579, 14), // "updatePeriodic"
QT_MOC_LITERAL(42, 594, 12), // "changeState0"
QT_MOC_LITERAL(43, 607, 12), // "changeState1"
QT_MOC_LITERAL(44, 620, 12), // "changeState2"
QT_MOC_LITERAL(45, 633, 12), // "changeState3"
QT_MOC_LITERAL(46, 646, 12), // "changeState4"
QT_MOC_LITERAL(47, 659, 12), // "changeState5"
QT_MOC_LITERAL(48, 672, 12), // "changeState6"
QT_MOC_LITERAL(49, 685, 12), // "changeState7"
QT_MOC_LITERAL(50, 698, 12), // "changeState8"
QT_MOC_LITERAL(51, 711, 12), // "changeState9"
QT_MOC_LITERAL(52, 724, 14), // "incrementState"
QT_MOC_LITERAL(53, 739, 14), // "decrementState"
QT_MOC_LITERAL(54, 754, 7), // "loadLua"
QT_MOC_LITERAL(55, 762, 14), // "takeScreenShot"
QT_MOC_LITERAL(56, 777, 17), // "prepareScreenShot"
QT_MOC_LITERAL(57, 795, 14), // "powerConsoleCB"
QT_MOC_LITERAL(58, 810, 16), // "consoleHardReset"
QT_MOC_LITERAL(59, 827, 16), // "consoleSoftReset"
QT_MOC_LITERAL(60, 844, 12), // "consolePause"
QT_MOC_LITERAL(61, 857, 15), // "toggleGameGenie"
QT_MOC_LITERAL(62, 873, 7), // "checked"
QT_MOC_LITERAL(63, 881, 16), // "loadGameGenieROM"
QT_MOC_LITERAL(64, 898, 17), // "loadMostRecentROM"
QT_MOC_LITERAL(65, 916, 13), // "setRegionNTSC"
QT_MOC_LITERAL(66, 930, 12), // "setRegionPAL"
QT_MOC_LITERAL(67, 943, 14), // "setRegionDendy"
QT_MOC_LITERAL(68, 958, 11), // "setRamInit0"
QT_MOC_LITERAL(69, 970, 11), // "setRamInit1"
QT_MOC_LITERAL(70, 982, 11), // "setRamInit2"
QT_MOC_LITERAL(71, 994, 11), // "setRamInit3"
QT_MOC_LITERAL(72, 1006, 10), // "insertCoin"
QT_MOC_LITERAL(73, 1017, 13), // "fdsSwitchDisk"
QT_MOC_LITERAL(74, 1031, 12), // "fdsEjectDisk"
QT_MOC_LITERAL(75, 1044, 15), // "fdsLoadBiosFile"
QT_MOC_LITERAL(76, 1060, 10), // "emuSpeedUp"
QT_MOC_LITERAL(77, 1071, 11), // "emuSlowDown"
QT_MOC_LITERAL(78, 1083, 13), // "emuSlowestSpd"
QT_MOC_LITERAL(79, 1097, 12), // "emuNormalSpd"
QT_MOC_LITERAL(80, 1110, 13), // "emuFastestSpd"
QT_MOC_LITERAL(81, 1124, 12), // "emuCustomSpd"
QT_MOC_LITERAL(82, 1137, 19), // "emuSetFrameAdvDelay"
QT_MOC_LITERAL(83, 1157, 13), // "openPPUViewer"
QT_MOC_LITERAL(84, 1171, 13), // "openOAMViewer"
QT_MOC_LITERAL(85, 1185, 12), // "openNTViewer"
QT_MOC_LITERAL(86, 1198, 13), // "openGGEncoder"
QT_MOC_LITERAL(87, 1212, 19), // "openNesHeaderEditor"
QT_MOC_LITERAL(88, 1232, 10), // "openCheats"
QT_MOC_LITERAL(89, 1243, 12), // "openRamWatch"
QT_MOC_LITERAL(90, 1256, 13), // "openRamSearch"
QT_MOC_LITERAL(91, 1270, 9), // "openMovie"
QT_MOC_LITERAL(92, 1280, 9), // "stopMovie"
QT_MOC_LITERAL(93, 1290, 22), // "playMovieFromBeginning"
QT_MOC_LITERAL(94, 1313, 17), // "setCustomAutoFire"
QT_MOC_LITERAL(95, 1331, 15), // "incrSoundVolume"
QT_MOC_LITERAL(96, 1347, 15), // "decrSoundVolume"
QT_MOC_LITERAL(97, 1363, 23), // "toggleLagCounterDisplay"
QT_MOC_LITERAL(98, 1387, 21), // "toggleFrameAdvLagSkip"
QT_MOC_LITERAL(99, 1409, 24), // "toggleMovieBindSaveState"
QT_MOC_LITERAL(100, 1434, 23), // "toggleMovieFrameDisplay"
QT_MOC_LITERAL(101, 1458, 20), // "toggleMovieReadWrite"
QT_MOC_LITERAL(102, 1479, 18), // "toggleInputDisplay"
QT_MOC_LITERAL(103, 1498, 15), // "toggleTurboMode"
QT_MOC_LITERAL(104, 1514, 16), // "toggleBackground"
QT_MOC_LITERAL(105, 1531, 16), // "toggleForeground"
QT_MOC_LITERAL(106, 1548, 21), // "toggleFamKeyBrdEnable"
QT_MOC_LITERAL(107, 1570, 23), // "toggleGlobalCheatEnable"
QT_MOC_LITERAL(108, 1594, 10), // "saveState0"
QT_MOC_LITERAL(109, 1605, 10), // "saveState1"
QT_MOC_LITERAL(110, 1616, 10), // "saveState2"
QT_MOC_LITERAL(111, 1627, 10), // "saveState3"
QT_MOC_LITERAL(112, 1638, 10), // "saveState4"
QT_MOC_LITERAL(113, 1649, 10), // "saveState5"
QT_MOC_LITERAL(114, 1660, 10), // "saveState6"
QT_MOC_LITERAL(115, 1671, 10), // "saveState7"
QT_MOC_LITERAL(116, 1682, 10), // "saveState8"
QT_MOC_LITERAL(117, 1693, 10), // "saveState9"
QT_MOC_LITERAL(118, 1704, 10), // "loadState0"
QT_MOC_LITERAL(119, 1715, 10), // "loadState1"
QT_MOC_LITERAL(120, 1726, 10), // "loadState2"
QT_MOC_LITERAL(121, 1737, 10), // "loadState3"
QT_MOC_LITERAL(122, 1748, 10), // "loadState4"
QT_MOC_LITERAL(123, 1759, 10), // "loadState5"
QT_MOC_LITERAL(124, 1770, 10), // "loadState6"
QT_MOC_LITERAL(125, 1781, 10), // "loadState7"
QT_MOC_LITERAL(126, 1792, 10), // "loadState8"
QT_MOC_LITERAL(127, 1803, 10), // "loadState9"
QT_MOC_LITERAL(128, 1814, 12), // "mainMenuOpen"
QT_MOC_LITERAL(129, 1827, 13), // "mainMenuClose"
QT_MOC_LITERAL(130, 1841, 21), // "warnAmbiguousShortcut"
QT_MOC_LITERAL(131, 1863, 10), // "QShortcut*"
QT_MOC_LITERAL(132, 1874, 14), // "aviRecordStart"
QT_MOC_LITERAL(133, 1889, 16), // "aviRecordAsStart"
QT_MOC_LITERAL(134, 1906, 13), // "aviRecordStop"
QT_MOC_LITERAL(135, 1920, 20), // "aviAudioEnableChange"
QT_MOC_LITERAL(136, 1941, 21), // "aviVideoFormatChanged"
QT_MOC_LITERAL(137, 1963, 3), // "idx"
QT_MOC_LITERAL(138, 1967, 15), // "setAviHudEnable"
QT_MOC_LITERAL(139, 1983, 15), // "setAviMsgEnable"
QT_MOC_LITERAL(140, 1999, 14), // "wavRecordStart"
QT_MOC_LITERAL(141, 2014, 16), // "wavRecordAsStart"
QT_MOC_LITERAL(142, 2031, 13), // "wavRecordStop"
QT_MOC_LITERAL(143, 2045, 16), // "winScreenChanged"
QT_MOC_LITERAL(144, 2062, 8), // "QScreen*"
QT_MOC_LITERAL(145, 2071, 3), // "scr"
QT_MOC_LITERAL(146, 2075, 16), // "winActiveChanged"
QT_MOC_LITERAL(147, 2092, 14), // "emuFrameFinish"
QT_MOC_LITERAL(148, 2107, 18), // "toggleMenuAutoHide"
QT_MOC_LITERAL(149, 2126, 26), // "toggleUseBgPaletteForVideo"
QT_MOC_LITERAL(150, 2153, 19), // "videoBgColorChanged"
QT_MOC_LITERAL(151, 2173, 7), // "QColor&"
QT_MOC_LITERAL(152, 2181, 1) // "c"

    },
    "consoleWin_t\0openDebugWindow\0\0"
    "openHexEditor\0openGamePadConfWin\0"
    "toggleFullscreen\0toggleMenuVis\0"
    "recordMovie\0winResizeIx\0iScale\0"
    "loadRomRequestCB\0s\0closeROMCB\0closeApp\0"
    "openROMFile\0loadNSF\0loadStateFrom\0"
    "saveStateAs\0quickLoad\0quickSave\0"
    "aboutFCEUX\0aboutQt\0openOnlineDocs\0"
    "openOfflineDocs\0openTasEditor\0"
    "openMsgLogWin\0openInputConfWin\0"
    "openGameSndConfWin\0openGameVideoConfWin\0"
    "openHotkeyConfWin\0openPaletteConfWin\0"
    "openGuiConfWin\0openTimingConfWin\0"
    "openPaletteEditorWin\0openAviRiffViewer\0"
    "openTimingStatWin\0openMovieOptWin\0"
    "openCodeDataLogger\0openTraceLogger\0"
    "openFamilyKeyboard\0toggleAutoResume\0"
    "updatePeriodic\0changeState0\0changeState1\0"
    "changeState2\0changeState3\0changeState4\0"
    "changeState5\0changeState6\0changeState7\0"
    "changeState8\0changeState9\0incrementState\0"
    "decrementState\0loadLua\0takeScreenShot\0"
    "prepareScreenShot\0powerConsoleCB\0"
    "consoleHardReset\0consoleSoftReset\0"
    "consolePause\0toggleGameGenie\0checked\0"
    "loadGameGenieROM\0loadMostRecentROM\0"
    "setRegionNTSC\0setRegionPAL\0setRegionDendy\0"
    "setRamInit0\0setRamInit1\0setRamInit2\0"
    "setRamInit3\0insertCoin\0fdsSwitchDisk\0"
    "fdsEjectDisk\0fdsLoadBiosFile\0emuSpeedUp\0"
    "emuSlowDown\0emuSlowestSpd\0emuNormalSpd\0"
    "emuFastestSpd\0emuCustomSpd\0"
    "emuSetFrameAdvDelay\0openPPUViewer\0"
    "openOAMViewer\0openNTViewer\0openGGEncoder\0"
    "openNesHeaderEditor\0openCheats\0"
    "openRamWatch\0openRamSearch\0openMovie\0"
    "stopMovie\0playMovieFromBeginning\0"
    "setCustomAutoFire\0incrSoundVolume\0"
    "decrSoundVolume\0toggleLagCounterDisplay\0"
    "toggleFrameAdvLagSkip\0toggleMovieBindSaveState\0"
    "toggleMovieFrameDisplay\0toggleMovieReadWrite\0"
    "toggleInputDisplay\0toggleTurboMode\0"
    "toggleBackground\0toggleForeground\0"
    "toggleFamKeyBrdEnable\0toggleGlobalCheatEnable\0"
    "saveState0\0saveState1\0saveState2\0"
    "saveState3\0saveState4\0saveState5\0"
    "saveState6\0saveState7\0saveState8\0"
    "saveState9\0loadState0\0loadState1\0"
    "loadState2\0loadState3\0loadState4\0"
    "loadState5\0loadState6\0loadState7\0"
    "loadState8\0loadState9\0mainMenuOpen\0"
    "mainMenuClose\0warnAmbiguousShortcut\0"
    "QShortcut*\0aviRecordStart\0aviRecordAsStart\0"
    "aviRecordStop\0aviAudioEnableChange\0"
    "aviVideoFormatChanged\0idx\0setAviHudEnable\0"
    "setAviMsgEnable\0wavRecordStart\0"
    "wavRecordAsStart\0wavRecordStop\0"
    "winScreenChanged\0QScreen*\0scr\0"
    "winActiveChanged\0emuFrameFinish\0"
    "toggleMenuAutoHide\0toggleUseBgPaletteForVideo\0"
    "videoBgColorChanged\0QColor&\0c"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_consoleWin_t[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     142,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  724,    2, 0x0a /* Public */,
       3,    0,  725,    2, 0x0a /* Public */,
       4,    0,  726,    2, 0x0a /* Public */,
       5,    0,  727,    2, 0x0a /* Public */,
       6,    0,  728,    2, 0x0a /* Public */,
       7,    0,  729,    2, 0x0a /* Public */,
       8,    1,  730,    2, 0x0a /* Public */,
      10,    1,  733,    2, 0x0a /* Public */,
      12,    0,  736,    2, 0x0a /* Public */,
      13,    0,  737,    2, 0x08 /* Private */,
      14,    0,  738,    2, 0x08 /* Private */,
      15,    0,  739,    2, 0x08 /* Private */,
      16,    0,  740,    2, 0x08 /* Private */,
      17,    0,  741,    2, 0x08 /* Private */,
      18,    0,  742,    2, 0x08 /* Private */,
      19,    0,  743,    2, 0x08 /* Private */,
      20,    0,  744,    2, 0x08 /* Private */,
      21,    0,  745,    2, 0x08 /* Private */,
      22,    0,  746,    2, 0x08 /* Private */,
      23,    0,  747,    2, 0x08 /* Private */,
      24,    0,  748,    2, 0x08 /* Private */,
      25,    0,  749,    2, 0x08 /* Private */,
      26,    0,  750,    2, 0x08 /* Private */,
      27,    0,  751,    2, 0x08 /* Private */,
      28,    0,  752,    2, 0x08 /* Private */,
      29,    0,  753,    2, 0x08 /* Private */,
      30,    0,  754,    2, 0x08 /* Private */,
      31,    0,  755,    2, 0x08 /* Private */,
      32,    0,  756,    2, 0x08 /* Private */,
      33,    0,  757,    2, 0x08 /* Private */,
      34,    0,  758,    2, 0x08 /* Private */,
      35,    0,  759,    2, 0x08 /* Private */,
      36,    0,  760,    2, 0x08 /* Private */,
      37,    0,  761,    2, 0x08 /* Private */,
      38,    0,  762,    2, 0x08 /* Private */,
      39,    0,  763,    2, 0x08 /* Private */,
      40,    0,  764,    2, 0x08 /* Private */,
      41,    0,  765,    2, 0x08 /* Private */,
      42,    0,  766,    2, 0x08 /* Private */,
      43,    0,  767,    2, 0x08 /* Private */,
      44,    0,  768,    2, 0x08 /* Private */,
      45,    0,  769,    2, 0x08 /* Private */,
      46,    0,  770,    2, 0x08 /* Private */,
      47,    0,  771,    2, 0x08 /* Private */,
      48,    0,  772,    2, 0x08 /* Private */,
      49,    0,  773,    2, 0x08 /* Private */,
      50,    0,  774,    2, 0x08 /* Private */,
      51,    0,  775,    2, 0x08 /* Private */,
      52,    0,  776,    2, 0x08 /* Private */,
      53,    0,  777,    2, 0x08 /* Private */,
      54,    0,  778,    2, 0x08 /* Private */,
      55,    0,  779,    2, 0x08 /* Private */,
      56,    0,  780,    2, 0x08 /* Private */,
      57,    0,  781,    2, 0x08 /* Private */,
      58,    0,  782,    2, 0x08 /* Private */,
      59,    0,  783,    2, 0x08 /* Private */,
      60,    0,  784,    2, 0x08 /* Private */,
      61,    1,  785,    2, 0x08 /* Private */,
      63,    0,  788,    2, 0x08 /* Private */,
      64,    0,  789,    2, 0x08 /* Private */,
      65,    0,  790,    2, 0x08 /* Private */,
      66,    0,  791,    2, 0x08 /* Private */,
      67,    0,  792,    2, 0x08 /* Private */,
      68,    0,  793,    2, 0x08 /* Private */,
      69,    0,  794,    2, 0x08 /* Private */,
      70,    0,  795,    2, 0x08 /* Private */,
      71,    0,  796,    2, 0x08 /* Private */,
      72,    0,  797,    2, 0x08 /* Private */,
      73,    0,  798,    2, 0x08 /* Private */,
      74,    0,  799,    2, 0x08 /* Private */,
      75,    0,  800,    2, 0x08 /* Private */,
      76,    0,  801,    2, 0x08 /* Private */,
      77,    0,  802,    2, 0x08 /* Private */,
      78,    0,  803,    2, 0x08 /* Private */,
      79,    0,  804,    2, 0x08 /* Private */,
      80,    0,  805,    2, 0x08 /* Private */,
      81,    0,  806,    2, 0x08 /* Private */,
      82,    0,  807,    2, 0x08 /* Private */,
      83,    0,  808,    2, 0x08 /* Private */,
      84,    0,  809,    2, 0x08 /* Private */,
      85,    0,  810,    2, 0x08 /* Private */,
      86,    0,  811,    2, 0x08 /* Private */,
      87,    0,  812,    2, 0x08 /* Private */,
      88,    0,  813,    2, 0x08 /* Private */,
      89,    0,  814,    2, 0x08 /* Private */,
      90,    0,  815,    2, 0x08 /* Private */,
      91,    0,  816,    2, 0x08 /* Private */,
      92,    0,  817,    2, 0x08 /* Private */,
      93,    0,  818,    2, 0x08 /* Private */,
      94,    0,  819,    2, 0x08 /* Private */,
      95,    0,  820,    2, 0x08 /* Private */,
      96,    0,  821,    2, 0x08 /* Private */,
      97,    0,  822,    2, 0x08 /* Private */,
      98,    0,  823,    2, 0x08 /* Private */,
      99,    0,  824,    2, 0x08 /* Private */,
     100,    0,  825,    2, 0x08 /* Private */,
     101,    0,  826,    2, 0x08 /* Private */,
     102,    0,  827,    2, 0x08 /* Private */,
     103,    0,  828,    2, 0x08 /* Private */,
     104,    0,  829,    2, 0x08 /* Private */,
     105,    0,  830,    2, 0x08 /* Private */,
     106,    0,  831,    2, 0x08 /* Private */,
     107,    0,  832,    2, 0x08 /* Private */,
     108,    0,  833,    2, 0x08 /* Private */,
     109,    0,  834,    2, 0x08 /* Private */,
     110,    0,  835,    2, 0x08 /* Private */,
     111,    0,  836,    2, 0x08 /* Private */,
     112,    0,  837,    2, 0x08 /* Private */,
     113,    0,  838,    2, 0x08 /* Private */,
     114,    0,  839,    2, 0x08 /* Private */,
     115,    0,  840,    2, 0x08 /* Private */,
     116,    0,  841,    2, 0x08 /* Private */,
     117,    0,  842,    2, 0x08 /* Private */,
     118,    0,  843,    2, 0x08 /* Private */,
     119,    0,  844,    2, 0x08 /* Private */,
     120,    0,  845,    2, 0x08 /* Private */,
     121,    0,  846,    2, 0x08 /* Private */,
     122,    0,  847,    2, 0x08 /* Private */,
     123,    0,  848,    2, 0x08 /* Private */,
     124,    0,  849,    2, 0x08 /* Private */,
     125,    0,  850,    2, 0x08 /* Private */,
     126,    0,  851,    2, 0x08 /* Private */,
     127,    0,  852,    2, 0x08 /* Private */,
     128,    0,  853,    2, 0x08 /* Private */,
     129,    0,  854,    2, 0x08 /* Private */,
     130,    1,  855,    2, 0x08 /* Private */,
     132,    0,  858,    2, 0x08 /* Private */,
     133,    0,  859,    2, 0x08 /* Private */,
     134,    0,  860,    2, 0x08 /* Private */,
     135,    1,  861,    2, 0x08 /* Private */,
     136,    1,  864,    2, 0x08 /* Private */,
     138,    1,  867,    2, 0x08 /* Private */,
     139,    1,  870,    2, 0x08 /* Private */,
     140,    0,  873,    2, 0x08 /* Private */,
     141,    0,  874,    2, 0x08 /* Private */,
     142,    0,  875,    2, 0x08 /* Private */,
     143,    1,  876,    2, 0x08 /* Private */,
     146,    0,  879,    2, 0x08 /* Private */,
     147,    0,  880,    2, 0x08 /* Private */,
     148,    1,  881,    2, 0x08 /* Private */,
     149,    1,  884,    2, 0x08 /* Private */,
     150,    1,  887,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   11,
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
    QMetaType::Void, QMetaType::Bool,   62,
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
    QMetaType::Void, 0x80000000 | 131,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,  137,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 144,  145,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 151,  152,

       0        // eod
};

void consoleWin_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<consoleWin_t *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openDebugWindow(); break;
        case 1: _t->openHexEditor(); break;
        case 2: _t->openGamePadConfWin(); break;
        case 3: _t->toggleFullscreen(); break;
        case 4: _t->toggleMenuVis(); break;
        case 5: _t->recordMovie(); break;
        case 6: _t->winResizeIx((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->loadRomRequestCB((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->closeROMCB(); break;
        case 9: _t->closeApp(); break;
        case 10: _t->openROMFile(); break;
        case 11: _t->loadNSF(); break;
        case 12: _t->loadStateFrom(); break;
        case 13: _t->saveStateAs(); break;
        case 14: _t->quickLoad(); break;
        case 15: _t->quickSave(); break;
        case 16: _t->aboutFCEUX(); break;
        case 17: _t->aboutQt(); break;
        case 18: _t->openOnlineDocs(); break;
        case 19: _t->openOfflineDocs(); break;
        case 20: _t->openTasEditor(); break;
        case 21: _t->openMsgLogWin(); break;
        case 22: _t->openInputConfWin(); break;
        case 23: _t->openGameSndConfWin(); break;
        case 24: _t->openGameVideoConfWin(); break;
        case 25: _t->openHotkeyConfWin(); break;
        case 26: _t->openPaletteConfWin(); break;
        case 27: _t->openGuiConfWin(); break;
        case 28: _t->openTimingConfWin(); break;
        case 29: _t->openPaletteEditorWin(); break;
        case 30: _t->openAviRiffViewer(); break;
        case 31: _t->openTimingStatWin(); break;
        case 32: _t->openMovieOptWin(); break;
        case 33: _t->openCodeDataLogger(); break;
        case 34: _t->openTraceLogger(); break;
        case 35: _t->openFamilyKeyboard(); break;
        case 36: _t->toggleAutoResume(); break;
        case 37: _t->updatePeriodic(); break;
        case 38: _t->changeState0(); break;
        case 39: _t->changeState1(); break;
        case 40: _t->changeState2(); break;
        case 41: _t->changeState3(); break;
        case 42: _t->changeState4(); break;
        case 43: _t->changeState5(); break;
        case 44: _t->changeState6(); break;
        case 45: _t->changeState7(); break;
        case 46: _t->changeState8(); break;
        case 47: _t->changeState9(); break;
        case 48: _t->incrementState(); break;
        case 49: _t->decrementState(); break;
        case 50: _t->loadLua(); break;
        case 51: _t->takeScreenShot(); break;
        case 52: _t->prepareScreenShot(); break;
        case 53: _t->powerConsoleCB(); break;
        case 54: _t->consoleHardReset(); break;
        case 55: _t->consoleSoftReset(); break;
        case 56: _t->consolePause(); break;
        case 57: _t->toggleGameGenie((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: _t->loadGameGenieROM(); break;
        case 59: _t->loadMostRecentROM(); break;
        case 60: _t->setRegionNTSC(); break;
        case 61: _t->setRegionPAL(); break;
        case 62: _t->setRegionDendy(); break;
        case 63: _t->setRamInit0(); break;
        case 64: _t->setRamInit1(); break;
        case 65: _t->setRamInit2(); break;
        case 66: _t->setRamInit3(); break;
        case 67: _t->insertCoin(); break;
        case 68: _t->fdsSwitchDisk(); break;
        case 69: _t->fdsEjectDisk(); break;
        case 70: _t->fdsLoadBiosFile(); break;
        case 71: _t->emuSpeedUp(); break;
        case 72: _t->emuSlowDown(); break;
        case 73: _t->emuSlowestSpd(); break;
        case 74: _t->emuNormalSpd(); break;
        case 75: _t->emuFastestSpd(); break;
        case 76: _t->emuCustomSpd(); break;
        case 77: _t->emuSetFrameAdvDelay(); break;
        case 78: _t->openPPUViewer(); break;
        case 79: _t->openOAMViewer(); break;
        case 80: _t->openNTViewer(); break;
        case 81: _t->openGGEncoder(); break;
        case 82: _t->openNesHeaderEditor(); break;
        case 83: _t->openCheats(); break;
        case 84: _t->openRamWatch(); break;
        case 85: _t->openRamSearch(); break;
        case 86: _t->openMovie(); break;
        case 87: _t->stopMovie(); break;
        case 88: _t->playMovieFromBeginning(); break;
        case 89: _t->setCustomAutoFire(); break;
        case 90: _t->incrSoundVolume(); break;
        case 91: _t->decrSoundVolume(); break;
        case 92: _t->toggleLagCounterDisplay(); break;
        case 93: _t->toggleFrameAdvLagSkip(); break;
        case 94: _t->toggleMovieBindSaveState(); break;
        case 95: _t->toggleMovieFrameDisplay(); break;
        case 96: _t->toggleMovieReadWrite(); break;
        case 97: _t->toggleInputDisplay(); break;
        case 98: _t->toggleTurboMode(); break;
        case 99: _t->toggleBackground(); break;
        case 100: _t->toggleForeground(); break;
        case 101: _t->toggleFamKeyBrdEnable(); break;
        case 102: _t->toggleGlobalCheatEnable(); break;
        case 103: _t->saveState0(); break;
        case 104: _t->saveState1(); break;
        case 105: _t->saveState2(); break;
        case 106: _t->saveState3(); break;
        case 107: _t->saveState4(); break;
        case 108: _t->saveState5(); break;
        case 109: _t->saveState6(); break;
        case 110: _t->saveState7(); break;
        case 111: _t->saveState8(); break;
        case 112: _t->saveState9(); break;
        case 113: _t->loadState0(); break;
        case 114: _t->loadState1(); break;
        case 115: _t->loadState2(); break;
        case 116: _t->loadState3(); break;
        case 117: _t->loadState4(); break;
        case 118: _t->loadState5(); break;
        case 119: _t->loadState6(); break;
        case 120: _t->loadState7(); break;
        case 121: _t->loadState8(); break;
        case 122: _t->loadState9(); break;
        case 123: _t->mainMenuOpen(); break;
        case 124: _t->mainMenuClose(); break;
        case 125: _t->warnAmbiguousShortcut((*reinterpret_cast< QShortcut*(*)>(_a[1]))); break;
        case 126: _t->aviRecordStart(); break;
        case 127: _t->aviRecordAsStart(); break;
        case 128: _t->aviRecordStop(); break;
        case 129: _t->aviAudioEnableChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 130: _t->aviVideoFormatChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 131: _t->setAviHudEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 132: _t->setAviMsgEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 133: _t->wavRecordStart(); break;
        case 134: _t->wavRecordAsStart(); break;
        case 135: _t->wavRecordStop(); break;
        case 136: _t->winScreenChanged((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 137: _t->winActiveChanged(); break;
        case 138: _t->emuFrameFinish(); break;
        case 139: _t->toggleMenuAutoHide((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 140: _t->toggleUseBgPaletteForVideo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 141: _t->videoBgColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 125:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QShortcut* >(); break;
            }
            break;
        case 136:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject consoleWin_t::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_consoleWin_t.data,
    qt_meta_data_consoleWin_t,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *consoleWin_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *consoleWin_t::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_consoleWin_t.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int consoleWin_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 142)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 142;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 142)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 142;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
