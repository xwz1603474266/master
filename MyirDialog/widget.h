#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "updatebutton.h"
#include "qdialogbtn.h"
#include <QTextBrowser>
#include <mythread.h>
#include <QProxyStyle>
#include <QLabel>

namespace Ui {
class Widget;
}
class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    viewpushbutton* BHMI_update;
    viewpushbutton* BTest_update;
    viewpushbutton* BQuite;
    viewpushbutton* BReboot;
    viewpushbutton* touchCheck;

    viewpushbutton* System_update;

    QTextBrowser* USBtext;
    QLabel* tytle_u;
    QLabel* version;
    QFont fon1;
    QFont fon2;

    MyThread* ts_celibrateThread;


    ~Widget();


private:
    int Vwidth;
    int Vheight;
    Ui::Widget *ui;
    QDialogbtn *new_ui;

public slots:
    void show();

private slots:
    int control_select();
    void on_BHMIClicked();
    void on_BTestClicked();
    void on_BQuiteClicked();
    void on_BRebootClicked();
    void on_BtouchCheckClicked();
    void on_Check_isDone();


    void on_BupdateCheckClicked();
protected:
    void paintEvent(QPaintEvent *event);


};


class MyProxyStyle : public QProxyStyle
{
public:
     void drawPrimitive(PrimitiveElement element, const QStyleOption *option, QPainter *painter, const QWidget *widget = 0) const
     {
         if(PE_FrameFocusRect ==element )
         {

         }
         else
         {
             QProxyStyle::drawPrimitive(element,option, painter,widget);
         }
     }
};


#endif // WIDGET_H
