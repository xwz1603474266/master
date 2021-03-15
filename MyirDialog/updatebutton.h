#ifndef UPDATEBUTTON_H
#define UPDATEBUTTON_H


#include <QWidget>
#include <QPushButton>

namespace viewpushbuttonDatas {
    enum { buttonImage1=1,buttonImage2,buttonImage3,buttonImage4,buttonImage5, buttonImage6};
}

class viewpushbutton : public QPushButton
{
   Q_OBJECT
public:
     explicit viewpushbutton(QWidget *parent=0);
     viewpushbutton(int choice, QWidget *parent=0);
    ~viewpushbutton();
private:
    int Vwidth;
    int Vheight;
    int choiceImage;
 //   void paintEvent(QPaintEvent *);
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *event);

public slots:
    void onClicked();
    void onPressed();

    void onReleaed();

};


#endif // UPDATEBUTTON_H
