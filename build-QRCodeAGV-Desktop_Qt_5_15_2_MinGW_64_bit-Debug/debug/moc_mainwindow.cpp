/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../QRCodeAGV_SW/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "updateFrame"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "cv::Mat*"
QT_MOC_LITERAL(4, 33, 3), // "mat"
QT_MOC_LITERAL(5, 37, 15), // "serialport_read"
QT_MOC_LITERAL(6, 53, 21), // "on_openButton_clicked"
QT_MOC_LITERAL(7, 75, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(8, 98, 20), // "on_runButton_clicked"
QT_MOC_LITERAL(9, 119, 26), // "on_senparamsButton_clicked"
QT_MOC_LITERAL(10, 146, 24), // "on_sendpidButton_clicked"
QT_MOC_LITERAL(11, 171, 24), // "on_tunningButton_clicked"
QT_MOC_LITERAL(12, 196, 24), // "on_requestButton_clicked"
QT_MOC_LITERAL(13, 221, 21), // "on_infoButton_clicked"
QT_MOC_LITERAL(14, 243, 24), // "on_openCamButton_clicked"
QT_MOC_LITERAL(15, 268, 25), // "on_generateButton_clicked"
QT_MOC_LITERAL(16, 294, 23) // "on_exportButton_clicked"

    },
    "MainWindow\0updateFrame\0\0cv::Mat*\0mat\0"
    "serialport_read\0on_openButton_clicked\0"
    "on_closeButton_clicked\0on_runButton_clicked\0"
    "on_senparamsButton_clicked\0"
    "on_sendpidButton_clicked\0"
    "on_tunningButton_clicked\0"
    "on_requestButton_clicked\0on_infoButton_clicked\0"
    "on_openCamButton_clicked\0"
    "on_generateButton_clicked\0"
    "on_exportButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,
      15,    0,   92,    2, 0x08 /* Private */,
      16,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateFrame((*reinterpret_cast< cv::Mat*(*)>(_a[1]))); break;
        case 1: _t->serialport_read(); break;
        case 2: _t->on_openButton_clicked(); break;
        case 3: _t->on_closeButton_clicked(); break;
        case 4: _t->on_runButton_clicked(); break;
        case 5: _t->on_senparamsButton_clicked(); break;
        case 6: _t->on_sendpidButton_clicked(); break;
        case 7: _t->on_tunningButton_clicked(); break;
        case 8: _t->on_requestButton_clicked(); break;
        case 9: _t->on_infoButton_clicked(); break;
        case 10: _t->on_openCamButton_clicked(); break;
        case 11: _t->on_generateButton_clicked(); break;
        case 12: _t->on_exportButton_clicked(); break;
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
