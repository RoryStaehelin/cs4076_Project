/****************************************************************************
** Meta object code from reading C++ file 'createnewrecipe.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../RecipeMate/createnewrecipe.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createnewrecipe.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CreateNewRecipe_t {
    uint offsetsAndSizes[12];
    char stringdata0[16];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[32];
    char stringdata4[22];
    char stringdata5[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CreateNewRecipe_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CreateNewRecipe_t qt_meta_stringdata_CreateNewRecipe = {
    {
        QT_MOC_LITERAL(0, 15),  // "CreateNewRecipe"
        QT_MOC_LITERAL(16, 30),  // "on_AddIngredientButton_clicked"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 31),  // "on_AddInstructionButton_clicked"
        QT_MOC_LITERAL(80, 21),  // "on_ExitNoSave_clicked"
        QT_MOC_LITERAL(102, 17)   // "on_Submit_clicked"
    },
    "CreateNewRecipe",
    "on_AddIngredientButton_clicked",
    "",
    "on_AddInstructionButton_clicked",
    "on_ExitNoSave_clicked",
    "on_Submit_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CreateNewRecipe[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject CreateNewRecipe::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CreateNewRecipe.offsetsAndSizes,
    qt_meta_data_CreateNewRecipe,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CreateNewRecipe_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CreateNewRecipe, std::true_type>,
        // method 'on_AddIngredientButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_AddInstructionButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ExitNoSave_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Submit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CreateNewRecipe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateNewRecipe *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_AddIngredientButton_clicked(); break;
        case 1: _t->on_AddInstructionButton_clicked(); break;
        case 2: _t->on_ExitNoSave_clicked(); break;
        case 3: _t->on_Submit_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *CreateNewRecipe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateNewRecipe::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateNewRecipe.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CreateNewRecipe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
