/****************************************************************************
** Meta object code from reading C++ file 'waterinvoice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../waterinvoice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waterinvoice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_waterInvoice_t {
    QByteArrayData data[12];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_waterInvoice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_waterInvoice_t qt_meta_stringdata_waterInvoice = {
    {
QT_MOC_LITERAL(0, 0, 12), // "waterInvoice"
QT_MOC_LITERAL(1, 13, 31), // "on_radioRrgisterInvoice_clicked"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "on_buttonExit_clicked"
QT_MOC_LITERAL(4, 68, 27), // "on_radioEditInvoice_clicked"
QT_MOC_LITERAL(5, 96, 21), // "on_buttonSave_clicked"
QT_MOC_LITERAL(6, 118, 23), // "on_buttonDelete_clicked"
QT_MOC_LITERAL(7, 142, 37), // "on_comboBoxEstate_currentInde..."
QT_MOC_LITERAL(8, 180, 5), // "index"
QT_MOC_LITERAL(9, 186, 36), // "on_comboBoxMonth_currentIndex..."
QT_MOC_LITERAL(10, 223, 27), // "on_spinBoxYear_valueChanged"
QT_MOC_LITERAL(11, 251, 4) // "arg1"

    },
    "waterInvoice\0on_radioRrgisterInvoice_clicked\0"
    "\0on_buttonExit_clicked\0"
    "on_radioEditInvoice_clicked\0"
    "on_buttonSave_clicked\0on_buttonDelete_clicked\0"
    "on_comboBoxEstate_currentIndexChanged\0"
    "index\0on_comboBoxMonth_currentIndexChanged\0"
    "on_spinBoxYear_valueChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_waterInvoice[] = {

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
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       9,    1,   62,    2, 0x08 /* Private */,
      10,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void waterInvoice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<waterInvoice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_radioRrgisterInvoice_clicked(); break;
        case 1: _t->on_buttonExit_clicked(); break;
        case 2: _t->on_radioEditInvoice_clicked(); break;
        case 3: _t->on_buttonSave_clicked(); break;
        case 4: _t->on_buttonDelete_clicked(); break;
        case 5: _t->on_comboBoxEstate_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_comboBoxMonth_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_spinBoxYear_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject waterInvoice::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_waterInvoice.data,
    qt_meta_data_waterInvoice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *waterInvoice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *waterInvoice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_waterInvoice.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int waterInvoice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
