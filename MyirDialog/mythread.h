#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = 0);
    ~MyThread();

    bool isStop;
protected:
    //QThread的虚函数
    //线程处理函数
    //不能直接调用，通过start()间接调用
    void run();

signals:
    void isDone();  //处理完成信号

signals:

public slots:
};
//#endif // MYTHREAD_H


//class MyThread1 : public QThread
//{
//    Q_OBJECT
//public:
//    explicit MyThread1(QObject *parent = 0);
//    ~MyThread1();

//    bool isStop;
//protected:
//    //QThread的虚函数
//    //线程处理函数
//    //不能直接调用，通过start()间接调用
//    void run();

//signals:
//    void isDone();  //处理完成信号

//signals:

//public slots:
//};

//class MyThread2 : public QThread
//{
//    Q_OBJECT
//public:
//    explicit MyThread2(QObject *parent = 0);
//    ~MyThread2();

//    bool isStop;
//protected:
//    //QThread的虚函数
//    //线程处理函数
//    //不能直接调用，通过start()间接调用
//    void run();

//signals:
//    void isDone();  //处理完成信号

//signals:

//public slots:
//};

//class MyThread3 : public QThread
//{
//    Q_OBJECT
//public:
//    explicit MyThread3(QObject *parent = 0);
//    ~MyThread3();

//    bool isStop;
//protected:
//    //QThread的虚函数
//    //线程处理函数
//    //不能直接调用，通过start()间接调用
//    void run();

//signals:
//    void isDone();  //处理完成信号

//signals:

//public slots:
//};

//class MyThread4 : public QThread
//{
//    Q_OBJECT
//public:
//    explicit MyThread4(QObject *parent = 0);
//    ~MyThread4();

//    bool isStop;
//protected:
//    //QThread的虚函数
//    //线程处理函数
//    //不能直接调用，通过start()间接调用
//    void run();

//signals:
//    void isDone();  //处理完成信号

//signals:

//public slots:
//};

#endif // MYTHREAD_H
