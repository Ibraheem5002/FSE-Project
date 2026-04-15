/****************************************************************************
** Meta object code from reading C++ file 'authentication.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../authentication.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'authentication.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14AuthenticationE_t {};
} // unnamed namespace

template <> constexpr inline auto Authentication::qt_create_metaobjectdata<qt_meta_tag_ZN14AuthenticationE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Authentication",
        "Password_Is_Correct",
        "",
        "Lock_Admin_Button",
        "on_Cancel_Button_clicked",
        "on_lineEdit_textChanged",
        "arg1",
        "on_lineEdit_textEdited",
        "on_Ok_Button_clicked",
        "on_Eye_Button_toggled",
        "checked",
        "show_window"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'Password_Is_Correct'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'Lock_Admin_Button'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_Cancel_Button_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_lineEdit_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Slot 'on_lineEdit_textEdited'
        QtMocHelpers::SlotData<void(const QString &)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Slot 'on_Ok_Button_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_Eye_Button_toggled'
        QtMocHelpers::SlotData<void(bool)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'show_window'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Authentication, qt_meta_tag_ZN14AuthenticationE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Authentication::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14AuthenticationE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14AuthenticationE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14AuthenticationE_t>.metaTypes,
    nullptr
} };

void Authentication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Authentication *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Password_Is_Correct(); break;
        case 1: _t->Lock_Admin_Button(); break;
        case 2: _t->on_Cancel_Button_clicked(); break;
        case 3: _t->on_lineEdit_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_lineEdit_textEdited((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_Ok_Button_clicked(); break;
        case 6: _t->on_Eye_Button_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->show_window(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Authentication::*)()>(_a, &Authentication::Password_Is_Correct, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Authentication::*)()>(_a, &Authentication::Lock_Admin_Button, 1))
            return;
    }
}

const QMetaObject *Authentication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Authentication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14AuthenticationE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Authentication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Authentication::Password_Is_Correct()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Authentication::Lock_Admin_Button()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
