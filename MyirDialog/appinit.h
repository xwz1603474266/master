﻿#ifndef APPINIT_H
#define APPINIT_H

#include <QObject>
#include <QProxyStyle>

class AppInit : public QObject
{
    Q_OBJECT
public:
    static AppInit *Instance();
    explicit AppInit(QObject *parent = 0);    

    void start();
    void startEvent();
    void stopEvent();
    int getEventState();
protected:
    bool eventFilter(QObject *obj, QEvent *evt);

private:
    static AppInit *self;

signals:

public slots:
};

#endif // APPINIT_H
