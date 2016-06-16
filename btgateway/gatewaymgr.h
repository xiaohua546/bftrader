#ifndef GATEWAYMGR_H
#define GATEWAYMGR_H

#include "bfgateway.pb.h"

#include <QObject>

using namespace bfgateway;

class GatewayMgr : public QObject {
    Q_OBJECT
public:
    explicit GatewayMgr(QObject* parent = 0);
    void init();
    void shutdown();

    // 分配BfOrderId
    QString genOrderId();

signals:
    void tradeWillBegin();
    void gotContracts(QStringList symbolsMy, QStringList symbolsAll);
    void gotTick(void* curTick, void* preTick);
    void gotAccount(const BfAccountData& account);
    void gotOrder(const BfOrderData& order);
    void gotTrade(const BfTradeData& trade);
    void gotPosition(const BfPositionData& pos);
    void gotGatewayError(int code, QString msg, QString msgEx);

public slots:
    void start();
    void stop();
    void queryAccount();
    void sendOrderWithId(QString byOrderId, const BfSendOrderReq& req);
    void sendOrder(const BfSendOrderReq& req);
    void queryPosition();
    void cancelOrder(const BfCancelOrderReq& req);
    void queryOrders();
};

#endif // GATEWAYMGR_H
