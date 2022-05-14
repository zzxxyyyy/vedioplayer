/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_openfile_triggered"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "on_exit_triggered"
QT_MOC_LITERAL(4, 52, 18), // "on_playbtn_clicked"
QT_MOC_LITERAL(5, 71, 17), // "on_bigbtn_clicked"
QT_MOC_LITERAL(6, 89, 12), // "playbtnstate"
QT_MOC_LITERAL(7, 102, 22), // "onPlayerdurationChange"
QT_MOC_LITERAL(8, 125, 8), // "duration"
QT_MOC_LITERAL(9, 134, 22), // "onPlayerPositionChange"
QT_MOC_LITERAL(10, 157, 8), // "position"
QT_MOC_LITERAL(11, 166, 12), // "onsildermove"
QT_MOC_LITERAL(12, 179, 5), // "value"
QT_MOC_LITERAL(13, 185, 16), // "on_gobtn_clicked"
QT_MOC_LITERAL(14, 202, 18), // "on_backbtn_clicked"
QT_MOC_LITERAL(15, 221, 11), // "volumchange"
QT_MOC_LITERAL(16, 233, 20) // "on_volumnBtn_clicked"

    },
    "MainWindow\0on_openfile_triggered\0\0"
    "on_exit_triggered\0on_playbtn_clicked\0"
    "on_bigbtn_clicked\0playbtnstate\0"
    "onPlayerdurationChange\0duration\0"
    "onPlayerPositionChange\0position\0"
    "onsildermove\0value\0on_gobtn_clicked\0"
    "on_backbtn_clicked\0volumchange\0"
    "on_volumnBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    1,   79,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x08 /* Private */,
      11,    1,   85,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,
      15,    0,   90,    2, 0x08 /* Private */,
      16,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, QMetaType::LongLong,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_openfile_triggered(); break;
        case 1: _t->on_exit_triggered(); break;
        case 2: _t->on_playbtn_clicked(); break;
        case 3: _t->on_bigbtn_clicked(); break;
        case 4: _t->playbtnstate(); break;
        case 5: _t->onPlayerdurationChange((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->onPlayerPositionChange((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->onsildermove((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_gobtn_clicked(); break;
        case 9: _t->on_backbtn_clicked(); break;
        case 10: _t->volumchange(); break;
        case 11: _t->on_volumnBtn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
