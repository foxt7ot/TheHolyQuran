/****************************************************************************
** Meta object code from reading C++ file 'QuranDbHelper.h'
**
** Created: Mon 14. Oct 21:24:38 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/QuranDbHelper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QuranDbHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QuranDbHelper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x02,
      46,   35,   14,   14, 0x02,
      75,   35,   14,   14, 0x02,
     115,   14,  107,   14, 0x02,
     146,  130,   14,   14, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_QuranDbHelper[] = {
    "QuranDbHelper\0\0loadDataBookmarks()\0"
    "surah,ayat\0addBookmark(QString,QString)\0"
    "removeBookmark(QString,QString)\0QString\0"
    "loadDataNote()\0surah,ayat,note\0"
    "updateNote(QString,QString,QString)\0"
};

void QuranDbHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QuranDbHelper *_t = static_cast<QuranDbHelper *>(_o);
        switch (_id) {
        case 0: _t->loadDataBookmarks(); break;
        case 1: _t->addBookmark((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->removeBookmark((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: { QString _r = _t->loadDataNote();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->updateNote((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QuranDbHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QuranDbHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QuranDbHelper,
      qt_meta_data_QuranDbHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QuranDbHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QuranDbHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QuranDbHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuranDbHelper))
        return static_cast<void*>(const_cast< QuranDbHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int QuranDbHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
