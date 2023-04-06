/****************************************************************************
** Meta object code from reading C++ file 'dbmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../conversor_frequencias/dbmanager.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbmanager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_DbManager_t {
    uint offsetsAndSizes[86];
    char stringdata0[10];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[13];
    char stringdata5[17];
    char stringdata6[12];
    char stringdata7[12];
    char stringdata8[15];
    char stringdata9[15];
    char stringdata10[21];
    char stringdata11[14];
    char stringdata12[20];
    char stringdata13[14];
    char stringdata14[10];
    char stringdata15[10];
    char stringdata16[14];
    char stringdata17[13];
    char stringdata18[15];
    char stringdata19[13];
    char stringdata20[11];
    char stringdata21[6];
    char stringdata22[11];
    char stringdata23[9];
    char stringdata24[10];
    char stringdata25[10];
    char stringdata26[12];
    char stringdata27[14];
    char stringdata28[14];
    char stringdata29[13];
    char stringdata30[8];
    char stringdata31[9];
    char stringdata32[16];
    char stringdata33[5];
    char stringdata34[6];
    char stringdata35[8];
    char stringdata36[12];
    char stringdata37[9];
    char stringdata38[11];
    char stringdata39[11];
    char stringdata40[7];
    char stringdata41[9];
    char stringdata42[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DbManager_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DbManager_t qt_meta_stringdata_DbManager = {
    {
        QT_MOC_LITERAL(0, 9),  // "DbManager"
        QT_MOC_LITERAL(10, 15),  // "LanguageChanged"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 11),  // "LoadChanged"
        QT_MOC_LITERAL(39, 12),  // "LoadChanged2"
        QT_MOC_LITERAL(52, 16),  // "AllTablesChanged"
        QT_MOC_LITERAL(69, 11),  // "LastChanged"
        QT_MOC_LITERAL(81, 11),  // "HourChanged"
        QT_MOC_LITERAL(93, 14),  // "MinutesChanged"
        QT_MOC_LITERAL(108, 14),  // "SecondsChanged"
        QT_MOC_LITERAL(123, 20),  // "UpdateStandbyChanged"
        QT_MOC_LITERAL(144, 13),  // "OutputChanged"
        QT_MOC_LITERAL(158, 19),  // "UpdateOutputChanged"
        QT_MOC_LITERAL(178, 13),  // "BypassChanged"
        QT_MOC_LITERAL(192, 9),  // "getOutput"
        QT_MOC_LITERAL(202, 9),  // "getBypass"
        QT_MOC_LITERAL(212, 13),  // "updateStandby"
        QT_MOC_LITERAL(226, 12),  // "updateOutput"
        QT_MOC_LITERAL(239, 14),  // "updateLanguage"
        QT_MOC_LITERAL(254, 12),  // "updateBypass"
        QT_MOC_LITERAL(267, 10),  // "setSeconds"
        QT_MOC_LITERAL(278, 5),  // "value"
        QT_MOC_LITERAL(284, 10),  // "setMinutes"
        QT_MOC_LITERAL(295, 8),  // "setHours"
        QT_MOC_LITERAL(304, 9),  // "setOutput"
        QT_MOC_LITERAL(314, 9),  // "setBypass"
        QT_MOC_LITERAL(324, 11),  // "setLanguage"
        QT_MOC_LITERAL(336, 13),  // "loadParameter"
        QT_MOC_LITERAL(350, 13),  // "QList<double>"
        QT_MOC_LITERAL(364, 12),  // "currentTable"
        QT_MOC_LITERAL(377, 7),  // "getLoad"
        QT_MOC_LITERAL(385, 8),  // "getLoad2"
        QT_MOC_LITERAL(394, 15),  // "selectAllTables"
        QT_MOC_LITERAL(410, 4),  // "load"
        QT_MOC_LITERAL(415, 5),  // "load2"
        QT_MOC_LITERAL(421, 7),  // "getlast"
        QT_MOC_LITERAL(429, 11),  // "deleteFirst"
        QT_MOC_LITERAL(441, 8),  // "getHours"
        QT_MOC_LITERAL(450, 10),  // "getMinutes"
        QT_MOC_LITERAL(461, 10),  // "getSeconds"
        QT_MOC_LITERAL(472, 6),  // "output"
        QT_MOC_LITERAL(479, 8),  // "language"
        QT_MOC_LITERAL(488, 6)   // "bypass"
    },
    "DbManager",
    "LanguageChanged",
    "",
    "LoadChanged",
    "LoadChanged2",
    "AllTablesChanged",
    "LastChanged",
    "HourChanged",
    "MinutesChanged",
    "SecondsChanged",
    "UpdateStandbyChanged",
    "OutputChanged",
    "UpdateOutputChanged",
    "BypassChanged",
    "getOutput",
    "getBypass",
    "updateStandby",
    "updateOutput",
    "updateLanguage",
    "updateBypass",
    "setSeconds",
    "value",
    "setMinutes",
    "setHours",
    "setOutput",
    "setBypass",
    "setLanguage",
    "loadParameter",
    "QList<double>",
    "currentTable",
    "getLoad",
    "getLoad2",
    "selectAllTables",
    "load",
    "load2",
    "getlast",
    "deleteFirst",
    "getHours",
    "getMinutes",
    "getSeconds",
    "output",
    "language",
    "bypass"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DbManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
      10,  224, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  182,    2, 0x06,   11 /* Public */,
       3,    0,  183,    2, 0x06,   12 /* Public */,
       4,    0,  184,    2, 0x06,   13 /* Public */,
       5,    0,  185,    2, 0x06,   14 /* Public */,
       6,    0,  186,    2, 0x06,   15 /* Public */,
       7,    0,  187,    2, 0x06,   16 /* Public */,
       8,    0,  188,    2, 0x06,   17 /* Public */,
       9,    0,  189,    2, 0x06,   18 /* Public */,
      10,    0,  190,    2, 0x06,   19 /* Public */,
      11,    0,  191,    2, 0x06,   20 /* Public */,
      12,    0,  192,    2, 0x06,   21 /* Public */,
      13,    0,  193,    2, 0x06,   22 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    0,  194,    2, 0x10a,   23 /* Public | MethodIsConst  */,
      15,    0,  195,    2, 0x10a,   24 /* Public | MethodIsConst  */,
      16,    0,  196,    2, 0x0a,   25 /* Public */,
      17,    0,  197,    2, 0x0a,   26 /* Public */,
      18,    0,  198,    2, 0x0a,   27 /* Public */,
      19,    0,  199,    2, 0x0a,   28 /* Public */,
      20,    1,  200,    2, 0x0a,   29 /* Public */,
      22,    1,  203,    2, 0x0a,   31 /* Public */,
      23,    1,  206,    2, 0x0a,   33 /* Public */,
      24,    1,  209,    2, 0x0a,   35 /* Public */,
      25,    1,  212,    2, 0x0a,   37 /* Public */,
      26,    1,  215,    2, 0x0a,   39 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      27,    1,  218,    2, 0x02,   41 /* Public */,
      30,    0,  221,    2, 0x102,   43 /* Public | MethodIsConst  */,
      31,    0,  222,    2, 0x102,   44 /* Public | MethodIsConst  */,
      32,    0,  223,    2, 0x02,   45 /* Public */,

 // signals: parameters
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

 // slots: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::QString,   21,

 // methods: parameters
    0x80000000 | 28, QMetaType::QString,   29,
    0x80000000 | 28,
    0x80000000 | 28,
    QMetaType::QStringList,

 // properties: name, type, flags
      33, 0x80000000 | 28, 0x00015009, uint(1), 0,
      34, 0x80000000 | 28, 0x00015009, uint(2), 0,
      35, QMetaType::QString, 0x00015001, uint(4), 0,
      36, QMetaType::QString, 0x00015001, uint(-1), 0,
      37, QMetaType::Int, 0x00015003, uint(5), 0,
      38, QMetaType::Int, 0x00015003, uint(6), 0,
      39, QMetaType::Int, 0x00015003, uint(7), 0,
      40, QMetaType::Int, 0x00015103, uint(9), 0,
      41, QMetaType::QString, 0x00015103, uint(0), 0,
      42, QMetaType::Int, 0x00015103, uint(11), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject DbManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DbManager.offsetsAndSizes,
    qt_meta_data_DbManager,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DbManager_t,
        // property 'load'
        QtPrivate::TypeAndForceComplete<QList<double>, std::true_type>,
        // property 'load2'
        QtPrivate::TypeAndForceComplete<QList<double>, std::true_type>,
        // property 'getlast'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'deleteFirst'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'getHours'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'getMinutes'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'getSeconds'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'output'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'language'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'bypass'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DbManager, std::true_type>,
        // method 'LanguageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoadChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoadChanged2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AllTablesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LastChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'HourChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MinutesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SecondsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateStandbyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OutputChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateOutputChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'BypassChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getOutput'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getBypass'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateStandby'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateLanguage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateBypass'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSeconds'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setMinutes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setHours'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setBypass'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setLanguage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'loadParameter'
        QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getLoad'
        QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>,
        // method 'getLoad2'
        QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>,
        // method 'selectAllTables'
        QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>
    >,
    nullptr
} };

void DbManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DbManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->LanguageChanged(); break;
        case 1: _t->LoadChanged(); break;
        case 2: _t->LoadChanged2(); break;
        case 3: _t->AllTablesChanged(); break;
        case 4: _t->LastChanged(); break;
        case 5: _t->HourChanged(); break;
        case 6: _t->MinutesChanged(); break;
        case 7: _t->SecondsChanged(); break;
        case 8: _t->UpdateStandbyChanged(); break;
        case 9: _t->OutputChanged(); break;
        case 10: _t->UpdateOutputChanged(); break;
        case 11: _t->BypassChanged(); break;
        case 12: { int _r = _t->getOutput();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: { int _r = _t->getBypass();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->updateStandby(); break;
        case 15: _t->updateOutput(); break;
        case 16: _t->updateLanguage(); break;
        case 17: _t->updateBypass(); break;
        case 18: _t->setSeconds((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->setMinutes((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->setHours((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->setOutput((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->setBypass((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->setLanguage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: { QList<double> _r = _t->loadParameter((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<double>*>(_a[0]) = std::move(_r); }  break;
        case 25: { QList<double> _r = _t->getLoad();
            if (_a[0]) *reinterpret_cast< QList<double>*>(_a[0]) = std::move(_r); }  break;
        case 26: { QList<double> _r = _t->getLoad2();
            if (_a[0]) *reinterpret_cast< QList<double>*>(_a[0]) = std::move(_r); }  break;
        case 27: { QList<QString> _r = _t->selectAllTables();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::LanguageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::LoadChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::LoadChanged2; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::AllTablesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::LastChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::HourChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::MinutesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::SecondsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::UpdateStandbyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::OutputChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::UpdateOutputChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::BypassChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DbManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<double>*>(_v) = _t->getLoad(); break;
        case 1: *reinterpret_cast< QList<double>*>(_v) = _t->getLoad2(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getlast(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->deleteFirst(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getHours(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getMinutes(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getSeconds(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getOutput(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getLanguage(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->getBypass(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DbManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setHours(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setMinutes(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setSeconds(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setOutput(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setLanguage(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setBypass(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *DbManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DbManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DbManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DbManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DbManager::LanguageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DbManager::LoadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DbManager::LoadChanged2()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DbManager::AllTablesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DbManager::LastChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DbManager::HourChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DbManager::MinutesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void DbManager::SecondsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void DbManager::UpdateStandbyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void DbManager::OutputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void DbManager::UpdateOutputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void DbManager::BypassChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
