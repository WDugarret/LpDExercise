/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_m_AddInListButton_pressed",
    "",
    "on_m_SortListButton_pressed",
    "on_m_ClearListButton_pressed",
    "on_m_AscRadioButton_clicked",
    "on_m_DescRadioButton_clicked",
    "on_m_KeepOnlyOncecheckBox_stateChanged",
    "arg1"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[29];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[29];
    char stringdata5[28];
    char stringdata6[29];
    char stringdata7[39];
    char stringdata8[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 28),  // "on_m_AddInListButton_pressed"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 27),  // "on_m_SortListButton_pressed"
        QT_MOC_LITERAL(69, 28),  // "on_m_ClearListButton_pressed"
        QT_MOC_LITERAL(98, 27),  // "on_m_AscRadioButton_clicked"
        QT_MOC_LITERAL(126, 28),  // "on_m_DescRadioButton_clicked"
        QT_MOC_LITERAL(155, 38),  // "on_m_KeepOnlyOncecheckBox_sta..."
        QT_MOC_LITERAL(194, 4)   // "arg1"
    },
    "MainWindow",
    "on_m_AddInListButton_pressed",
    "",
    "on_m_SortListButton_pressed",
    "on_m_ClearListButton_pressed",
    "on_m_AscRadioButton_clicked",
    "on_m_DescRadioButton_clicked",
    "on_m_KeepOnlyOncecheckBox_stateChanged",
    "arg1"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    1,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_m_AddInListButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_SortListButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_ClearListButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_AscRadioButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_DescRadioButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_KeepOnlyOncecheckBox_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_m_AddInListButton_pressed(); break;
        case 1: _t->on_m_SortListButton_pressed(); break;
        case 2: _t->on_m_ClearListButton_pressed(); break;
        case 3: _t->on_m_AscRadioButton_clicked(); break;
        case 4: _t->on_m_DescRadioButton_clicked(); break;
        case 5: _t->on_m_KeepOnlyOncecheckBox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
