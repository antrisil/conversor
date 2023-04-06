/****************************************************************************
** Meta object code from reading C++ file 'useractivitydetector.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../conversor_frequencias/useractivitydetector.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'useractivitydetector.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_UserActivityDetector_t {
    uint offsetsAndSizes[26];
    char stringdata0[21];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[15];
    char stringdata5[13];
    char stringdata6[11];
    char stringdata7[6];
    char stringdata8[11];
    char stringdata9[9];
    char stringdata10[8];
    char stringdata11[8];
    char stringdata12[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_UserActivityDetector_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_UserActivityDetector_t qt_meta_stringdata_UserActivityDetector = {
    {
        QT_MOC_LITERAL(0, 20),  // "UserActivityDetector"
        QT_MOC_LITERAL(21, 20),  // "userActivityDetected"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 14),  // "SecondsChanged"
        QT_MOC_LITERAL(58, 14),  // "MinutesChanged"
        QT_MOC_LITERAL(73, 12),  // "HoursChanged"
        QT_MOC_LITERAL(86, 10),  // "setSeconds"
        QT_MOC_LITERAL(97, 5),  // "value"
        QT_MOC_LITERAL(103, 10),  // "setMinutes"
        QT_MOC_LITERAL(114, 8),  // "setHours"
        QT_MOC_LITERAL(123, 7),  // "seconds"
        QT_MOC_LITERAL(131, 7),  // "minutes"
        QT_MOC_LITERAL(139, 5)   // "hours"
    },
    "UserActivityDetector",
    "userActivityDetected",
    "",
    "SecondsChanged",
    "MinutesChanged",
    "HoursChanged",
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

Q_CONSTINIT static const uint qt_meta_data_UserActivityDetector[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   69, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    4 /* Public */,
       3,    0,   57,    2, 0x06,    5 /* Public */,
       4,    0,   58,    2, 0x06,    6 /* Public */,
       5,    0,   59,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   60,    2, 0x0a,    8 /* Public */,
       8,    1,   63,    2, 0x0a,   10 /* Public */,
       9,    1,   66,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00015103, uint(1), 0,
      11, QMetaType::Int, 0x00015103, uint(2), 0,
      12, QMetaType::Int, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject UserActivityDetector::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_UserActivityDetector.offsetsAndSizes,
    qt_meta_data_UserActivityDetector,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_UserActivityDetector_t,
        // property 'seconds'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'minutes'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'hours'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserActivityDetector, std::true_type>,
        // method 'userActivityDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SecondsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MinutesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'HoursChanged'
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

void UserActivityDetector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserActivityDetector *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->userActivityDetected(); break;
        case 1: _t->SecondsChanged(); break;
        case 2: _t->MinutesChanged(); break;
        case 3: _t->HoursChanged(); break;
        case 4: _t->setSeconds((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setMinutes((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setHours((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserActivityDetector::*)();
            if (_t _q_method = &UserActivityDetector::userActivityDetected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserActivityDetector::*)();
            if (_t _q_method = &UserActivityDetector::SecondsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UserActivityDetector::*)();
            if (_t _q_method = &UserActivityDetector::MinutesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UserActivityDetector::*)();
            if (_t _q_method = &UserActivityDetector::HoursChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UserActivityDetector *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getSeconds(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getMinutes(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getHours(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<UserActivityDetector *>(_o);
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

const QMetaObject *UserActivityDetector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserActivityDetector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserActivityDetector.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UserActivityDetector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void UserActivityDetector::userActivityDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UserActivityDetector::SecondsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UserActivityDetector::MinutesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void UserActivityDetector::HoursChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
