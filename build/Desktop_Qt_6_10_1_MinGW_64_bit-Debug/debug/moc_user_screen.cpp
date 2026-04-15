/****************************************************************************
** Meta object code from reading C++ file 'user_screen.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../user_screen.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user_screen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
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
struct qt_meta_tag_ZN11User_ScreenE_t {};
} // unnamed namespace

template <> constexpr inline auto User_Screen::qt_create_metaobjectdata<qt_meta_tag_ZN11User_ScreenE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "User_Screen",
        "Back_Button_Is_Clicked",
        "",
        "Review_Button_Is_Clicked",
        "show_window",
        "on_Back_Button_clicked",
        "on_Exit_Button_clicked",
        "on_listWidget_doubleClicked",
        "QModelIndex",
        "index",
        "on_listWidget_itemDoubleClicked",
        "QListWidgetItem*",
        "item",
        "on_Search_Bar_textChanged",
        "arg1",
        "on_Review_Button_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'Back_Button_Is_Clicked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'Review_Button_Is_Clicked'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'show_window'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_Back_Button_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_Exit_Button_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listWidget_doubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'on_listWidget_itemDoubleClicked'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'on_Search_Bar_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 14 },
        }}),
        // Slot 'on_Review_Button_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<User_Screen, qt_meta_tag_ZN11User_ScreenE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject User_Screen::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11User_ScreenE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11User_ScreenE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11User_ScreenE_t>.metaTypes,
    nullptr
} };

void User_Screen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<User_Screen *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Back_Button_Is_Clicked(); break;
        case 1: _t->Review_Button_Is_Clicked(); break;
        case 2: _t->show_window(); break;
        case 3: _t->on_Back_Button_clicked(); break;
        case 4: _t->on_Exit_Button_clicked(); break;
        case 5: _t->on_listWidget_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 6: _t->on_listWidget_itemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 7: _t->on_Search_Bar_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->on_Review_Button_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (User_Screen::*)()>(_a, &User_Screen::Back_Button_Is_Clicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (User_Screen::*)()>(_a, &User_Screen::Review_Button_Is_Clicked, 1))
            return;
    }
}

const QMetaObject *User_Screen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *User_Screen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11User_ScreenE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int User_Screen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void User_Screen::Back_Button_Is_Clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void User_Screen::Review_Button_Is_Clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
