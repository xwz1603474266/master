#ifndef QDIALOGBUTTON_H
#define QDIALOGBUTTON_H


#include <QWidget>
#include <QPushButton>

namespace qdialogbuttonDatas {
    enum { buttonImage1=1,buttonImage2,buttonImage3,buttonImage4,buttonImage5 };
}

class qdialogbutton : public QPushButton
{
   Q_OBJECT
public:
     explicit qdialogbutton(QWidget *parent=0);
     qdialogbutton(int choice, QWidget *parent=0);
    ~qdialogbutton();
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

#endif // QDIALOGBUTTON_H
