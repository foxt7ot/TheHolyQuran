/****************************************************************************
** Meta object code from reading C++ file 'TheHolyQuran.hpp'
**
** Created: Mon 14. Oct 21:24:43 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/TheHolyQuran.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TheHolyQuran.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Quran[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x0a,
      26,   14,    6,    6, 0x0a,
      62,   57,    6,    6, 0x2a,
      96,   89,    6,    6, 0x0a,
     126,    6,    6,    6, 0x08,
     145,   89,    6,    6, 0x08,
     164,   89,    6,    6, 0x08,
     207,  185,    6,    6, 0x08,

 // methods: signature, parameters, type, tag, flags
     304,  280,  272,    6, 0x02,
     355,  333,    6,    6, 0x02,
     385,    6,    6,    6, 0x02,
     406,  398,    6,    6, 0x02,
     430,  398,    6,    6, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_Quran[] = {
    "Quran\0\0show()\0text,iconId\0"
    "addProfileBoxItem(QString,int)\0text\0"
    "addProfileBoxItem(QString)\0itemId\0"
    "removeProfileBoxItem(QString)\0"
    "loadProfileBoxes()\0itemAdded(QString)\0"
    "itemRemoved(QString)\0iconId,type,imageData\0"
    "iconRetrieved(int,bb::platform::bbm::ImageType::Type,QByteArray)\0"
    "QString\0objectName,defaultValue\0"
    "getValueFor(QString,QString)\0"
    "objectName,inputValue\0"
    "saveValueFor(QString,QString)\0"
    "sendInvite()\0message\0setAsBBMStatus(QString)\0"
    "setAsPersonalMessage(QString)\0"
};

void Quran::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Quran *_t = static_cast<Quran *>(_o);
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->addProfileBoxItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->addProfileBoxItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->removeProfileBoxItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->loadProfileBoxes(); break;
        case 5: _t->itemAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->itemRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->iconRetrieved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bb::platform::bbm::ImageType::Type(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 8: { QString _r = _t->getValueFor((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: _t->saveValueFor((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->sendInvite(); break;
        case 11: _t->setAsBBMStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setAsPersonalMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Quran::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Quran::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Quran,
      qt_meta_data_Quran, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Quran::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Quran::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Quran::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Quran))
        return static_cast<void*>(const_cast< Quran*>(this));
    return QObject::qt_metacast(_clname);
}

int Quran::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
