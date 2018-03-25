/****************************************************************************
** Meta object code from reading C++ file 'qlcioplugin.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/qlcioplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlcioplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLCIOPlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   13,   12,   12, 0x05,
     127,   98,   12,   12, 0x25,
     171,   12,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QLCIOPlugin[] = {
    "QLCIOPlugin\0\0universe,input,channel,value,key\0"
    "valueChanged(quint32,quint32,quint32,uchar,QString)\0"
    "universe,input,channel,value\0"
    "valueChanged(quint32,quint32,quint32,uchar)\0"
    "configurationChanged()\0"
};

void QLCIOPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QLCIOPlugin *_t = static_cast<QLCIOPlugin *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< uchar(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< uchar(*)>(_a[4]))); break;
        case 2: _t->configurationChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QLCIOPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QLCIOPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLCIOPlugin,
      qt_meta_data_QLCIOPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLCIOPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLCIOPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLCIOPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLCIOPlugin))
        return static_cast<void*>(const_cast< QLCIOPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int QLCIOPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QLCIOPlugin::valueChanged(quint32 _t1, quint32 _t2, quint32 _t3, uchar _t4, const QString & _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void QLCIOPlugin::configurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
