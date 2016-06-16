#include "dbservice.h"
#include "file_utils.h"
#include "profile.h"
#include "servicemgr.h"
#include "leveldb/comparator.h"
#include "leveldb/db.h"
#include "leveldb/env.h"
#include "leveldb/write_batch.h"

DbService::DbService(QObject* parent)
    : QObject(parent)
{
}

void DbService::init()
{
    BfDebug(__FUNCTION__);
    g_sm->checkCurrentOn(ServiceMgr::DB);

    // init env
    leveldb::Env::Default();
    leveldb::BytewiseComparator();
}

void DbService::shutdown()
{
    BfDebug(__FUNCTION__);
    g_sm->checkCurrentOn(ServiceMgr::DB);

    // free env
    delete leveldb::BytewiseComparator();
    delete leveldb::Env::Default();
}
