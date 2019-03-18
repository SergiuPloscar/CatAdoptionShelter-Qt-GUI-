/****************************************************************************
** Meta object code from reading C++ file 'LAB_12_14.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../LAB_12_14.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LAB_12_14.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LAB_12_14_t {
    QByteArrayData data[16];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LAB_12_14_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LAB_12_14_t qt_meta_stringdata_LAB_12_14 = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LAB_12_14"
QT_MOC_LITERAL(1, 10, 8), // "goToTab2"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "goToTab3"
QT_MOC_LITERAL(4, 29, 8), // "goToTab1"
QT_MOC_LITERAL(5, 38, 6), // "addCat"
QT_MOC_LITERAL(6, 45, 9), // "deleteCat"
QT_MOC_LITERAL(7, 55, 9), // "updateCat"
QT_MOC_LITERAL(8, 65, 9), // "shortform"
QT_MOC_LITERAL(9, 75, 5), // "adopt"
QT_MOC_LITERAL(10, 81, 4), // "next"
QT_MOC_LITERAL(11, 86, 6), // "adoptF"
QT_MOC_LITERAL(12, 93, 5), // "nextF"
QT_MOC_LITERAL(13, 99, 6), // "filter"
QT_MOC_LITERAL(14, 106, 3), // "CSV"
QT_MOC_LITERAL(15, 110, 4) // "HTML"

    },
    "LAB_12_14\0goToTab2\0\0goToTab3\0goToTab1\0"
    "addCat\0deleteCat\0updateCat\0shortform\0"
    "adopt\0next\0adoptF\0nextF\0filter\0CSV\0"
    "HTML"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LAB_12_14[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LAB_12_14::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LAB_12_14 *_t = static_cast<LAB_12_14 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->goToTab2(); break;
        case 1: _t->goToTab3(); break;
        case 2: _t->goToTab1(); break;
        case 3: _t->addCat(); break;
        case 4: _t->deleteCat(); break;
        case 5: _t->updateCat(); break;
        case 6: _t->shortform(); break;
        case 7: _t->adopt(); break;
        case 8: _t->next(); break;
        case 9: _t->adoptF(); break;
        case 10: _t->nextF(); break;
        case 11: _t->filter(); break;
        case 12: _t->CSV(); break;
        case 13: _t->HTML(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LAB_12_14::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_LAB_12_14.data,
      qt_meta_data_LAB_12_14,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LAB_12_14::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LAB_12_14::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LAB_12_14.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int LAB_12_14::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
