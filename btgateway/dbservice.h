#pragma once

#include <QObject>

// 每次回测都初始化一个数据库，里面放
// 1.account信息
// 2.contract信息
// 3.每笔交易
// 4.每笔盈亏
// 5.回测参数
// ....
// 回测报告根据这个数据库来算=

// DB
class DbService : public QObject {
    Q_OBJECT
public:
    explicit DbService(QObject* parent = 0);
    void init();
    void shutdown();

signals:

public slots:


private:
};
