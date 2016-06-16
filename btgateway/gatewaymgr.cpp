#include "gatewaymgr.h"
#include "logger.h"
#include "servicemgr.h"

GatewayMgr::GatewayMgr(QObject* parent)
    : QObject(parent)
{
}

void GatewayMgr::init()
{
    g_sm->checkCurrentOn(ServiceMgr::LOGIC);

    // qRegisterMetaType
    qRegisterMetaType<BfAccountData>("BfAccountData");
    qRegisterMetaType<BfPositionData>("BfPositionData");
    qRegisterMetaType<BfOrderData>("BfOrderData");
    qRegisterMetaType<BfTradeData>("BfTradeData");
    qRegisterMetaType<BfNotificationData>("BfNotificationData");
    qRegisterMetaType<BfContractData>("BfContractData");
    qRegisterMetaType<BfErrorData>("BfErrorData");
    qRegisterMetaType<BfLogData>("BfLogData");

    qRegisterMetaType<BfConnectPushReq>("BfConnectPushReq");
    qRegisterMetaType<BfGetContractReq>("BfGetContractReq");
    qRegisterMetaType<BfSendOrderReq>("BfSendOrderReq");
    qRegisterMetaType<BfCancelOrderReq>("BfCancelOrderReq");
}

void GatewayMgr::shutdown()
{
    g_sm->checkCurrentOn(ServiceMgr::LOGIC);
}

//TODO(hege): do it
QString GatewayMgr::genOrderId()
{
    BfDebug(__FUNCTION__);
    g_sm->checkCurrentOn(ServiceMgr::EXTERNAL);
    return "";
}

//TODO(hege): do it
void GatewayMgr::start()
{
    BfDebug(__FUNCTION__);
    g_sm->checkCurrentOn(ServiceMgr::LOGIC);
}

//TODO(hege): do it
void GatewayMgr::stop()
{
    BfDebug(__FUNCTION__);
    g_sm->checkCurrentOn(ServiceMgr::LOGIC);
}

//TODO(hege): do it
void GatewayMgr::queryAccount()
{
    BfDebug(__FUNCTION__);
    g_sm->checkCurrentOn(ServiceMgr::LOGIC);
}

//TODO(hege): do it
void GatewayMgr::sendOrderWithId(QString byOrderId, const BfSendOrderReq& req)
{
    BfDebug(__FUNCTION__);
    g_sm->checkCurrentOn(ServiceMgr::LOGIC);
}

//TODO(hege): do it
void GatewayMgr::sendOrder(const BfSendOrderReq& req)
{
    BfDebug(__FUNCTION__);
    g_sm->checkCurrentOn(ServiceMgr::LOGIC);
}

//TODO(hege): do it
void GatewayMgr::queryPosition()
{
    BfDebug(__FUNCTION__);
    g_sm->checkCurrentOn(ServiceMgr::LOGIC);
}

//TODO(hege): do it
void GatewayMgr::cancelOrder(const BfCancelOrderReq& req)
{
    BfDebug(__FUNCTION__);
    g_sm->checkCurrentOn(ServiceMgr::LOGIC);
}

//TODO(hege): do it
void GatewayMgr::queryOrders()
{
    BfDebug(__FUNCTION__);
    g_sm->checkCurrentOn(ServiceMgr::LOGIC);
}
