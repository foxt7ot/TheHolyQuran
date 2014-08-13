/****************************************************************************
** Meta object code from reading C++ file 'AyatDataModel.h'
**
** Created: Mon 14. Oct 21:24:35 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AyatDataModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AyatDataModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AyatDataModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      39,   31,   14,   14, 0x05,
      62,   14,   14,   14, 0x05,
      83,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     111,  107,   14,   14, 0x0a,
     146,   14,   14,   14, 0x0a,
     169,  165,   14,   14, 0x0a,

 // methods: signature, parameters, type, tag, flags
     215,  194,  189,   14, 0x02,
     257,  194,  189,   14, 0x02,
     302,  194,  189,   14, 0x02,
     373,  347,  189,   14, 0x02,
     422,  194,  189,   14, 0x02,
     475,  463,   14,   14, 0x02,
     493,   14,   14,   14, 0x02,
     509,   14,   14,   14, 0x02,
     530,  521,   14,   14, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_AyatDataModel[] = {
    "AyatDataModel\0\0startLoadData()\0message\0"
    "allItemLoaded(QString)\0loadSQLData(QString)\0"
    "connectionNameChanged()\0dar\0"
    "onReply(bb::data::DataAccessReply)\0"
    "onReloadDatabase()\0sql\0onLoadData(QString)\0"
    "bool\0indexPath,surah,ayat\0"
    "addBookmark(QVariantList,QString,QString)\0"
    "removeBookmark(QVariantList,QString,QString)\0"
    "deleteBookmark(QVariantList,QString,QString)\0"
    "indexPath,surah,ayat,note\0"
    "updateNote(QVariantList,QString,QString,QString)\0"
    "deleteNote(QVariantList,QString,QString)\0"
    "surahNumber\0loadData(QString)\0"
    "loadBookmarks()\0loadNotes()\0keywords\0"
    "searchAyat(QString)\0"
};

void AyatDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AyatDataModel *_t = static_cast<AyatDataModel *>(_o);
        switch (_id) {
        case 0: _t->startLoadData(); break;
        case 1: _t->allItemLoaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->loadSQLData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->connectionNameChanged(); break;
        case 4: _t->onReply((*reinterpret_cast< const bb::data::DataAccessReply(*)>(_a[1]))); break;
        case 5: _t->onReloadDatabase(); break;
        case 6: _t->onLoadData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: { bool _r = _t->addBookmark((*reinterpret_cast< QVariantList(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->removeBookmark((*reinterpret_cast< QVariantList(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->deleteBookmark((*reinterpret_cast< QVariantList(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->updateNote((*reinterpret_cast< QVariantList(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->deleteNote((*reinterpret_cast< QVariantList(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->loadData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->loadBookmarks(); break;
        case 14: _t->loadNotes(); break;
        case 15: _t->searchAyat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AyatDataModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AyatDataModel::staticMetaObject = {
    { &GroupDataModel::staticMetaObject, qt_meta_stringdata_AyatDataModel,
      qt_meta_data_AyatDataModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AyatDataModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AyatDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AyatDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AyatDataModel))
        return static_cast<void*>(const_cast< AyatDataModel*>(this));
    return GroupDataModel::qt_metacast(_clname);
}

int AyatDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GroupDataModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void AyatDataModel::startLoadData()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AyatDataModel::allItemLoaded(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AyatDataModel::loadSQLData(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AyatDataModel::connectionNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
