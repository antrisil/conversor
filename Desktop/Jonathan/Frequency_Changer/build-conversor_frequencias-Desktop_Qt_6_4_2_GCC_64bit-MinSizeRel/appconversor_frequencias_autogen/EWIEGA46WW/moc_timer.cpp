/****************************************************************************
** Meta object code from reading C++ file 'timer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../conversor_frequencias/timer.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_timer_t {
    uint offsetsAndSizes[30];
    char stringdata0[6];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[15];
    char stringdata5[13];
    char stringdata6[8];
    char stringdata7[11];
    char stringdata8[11];
    char stringdata9[6];
    char stringdata10[11];
    char stringdata11[9];
    char stringdata12[8];
    char stringdata13[8];
    char stringdata14[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_timer_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_timer_t qt_meta_stringdata_timer = {
    {
        QT_MOC_LITERAL(0, 5),  // "timer"
        QT_MOC_LITERAL(6, 12),  // "userActivity"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 14),  // "SecondsChanged"
        QT_MOC_LITERAL(35, 14),  // "MinutesChanged"
        QT_MOC_LITERAL(50, 12),  // "HoursChanged"
        QT_MOC_LITERAL(63, 7),  // "standby"
        QT_MOC_LITERAL(71, 10),  // "resetTimer"
        QT_MOC_LITERAL(82, 10),  // "setSeconds"
        QT_MOC_LITERAL(93, 5),  // "value"
        QT_MOC_LITERAL(99, 10),  // "setMinutes"
        QT_MOC_LITERAL(110, 8),  // "setHours"
        QT_MOC_LITERAL(119, 7),  // "seconds"
        QT_MOC_LITERAL(127, 7),  // "minutes"
        QT_MOC_LITERAL(135, 5)   // "hours"
    },
    "timer",
    "userActivity",
    "",
    "SecondsChanged",
    "MinutesChanged",
    "HoursChanged",
    "standby",
    "resetTimer",
    "setSeconds",
    "value",
    "setMinutes",
    "setHours",
    "seconds",
    "minutes",
    "hours"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_timer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   83, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    4 /* Public */,
       3,    0,   69,    2, 0x06,    5 /* Public */,
       4,    0,   70,    2, 0x06,    6 /* Public */,
       5,    0,   71,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   72,    2, 0x0a,    8 /* Public */,
       7,    0,   73,    2, 0x0a,    9 /* Public */,
       8,    1,   74,    2, 0x0a,   10 /* Public */,
      10,    1,   77,    2, 0x0a,   12 /* Public */,
      11,    1,   80,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00015103, uint(1), 0,
      13, QMetaType::Int, 0x00015103, uint(2), 0,
      14, QMetaType::Int, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject timer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_timer.offsetsAndSizes,
    qt_meta_data_timer,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_timer_t,
        // property 'seconds'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'minutes'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'hours'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<timer, std::true_type>,
        // method 'userActivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SecondsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MinutesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'HoursChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'standby'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetTimer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSeconds'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setMinutes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setHours'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void timer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<timer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->userActivity(); break;
        case 1: _t->SecondsChanged(); break;
        case 2: _t->MinutesChanged(); break;
        case 3: _t->HoursChanged(); break;
        case 4: _t->standby(); break;
        case 5: _t->resetTimer(); break;
        case 6: _t->setSeconds((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setMinutes((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setHours((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (timer::*)();
            if (_t _q_method = &timer::userActivity; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (timer::*)();
            if (_t _q_method = &timer::SecondsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (timer::*)();
            if (_t _q_method = &timer::MinutesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (timer::*)();
            if (_t _q_method = &timer::HoursChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<timer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getSeconds(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getMinutes(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getHours(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<timer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSeconds(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMinutes(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setHours(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *timer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *timer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_timer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int timer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void timer::userActivity()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void timer::SecondsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void timer::MinutesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void timer::HoursChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
