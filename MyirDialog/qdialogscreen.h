#ifndef QDIALOGSCREEN_H
#define QDIALOGSCREEN_H

#include<QDialog>
#include<QDialog>
#include<QLabel>
#include<QVBoxLayout>
#include<QPushButton>
#include<QMouseEvent>
#include <QTimer>


namespace Ui {
class QDialogbtn;
}

class QDialogScreen : public QDialog
{
    Q_OBJECT
public:
    explicit QDialogScreen(QWidget *parent = 0,Qt::WindowFlags f = 0);

    QPushButton *btnok;
    QPushButton *btnno;

    QPoint xdialogStart;
    QPoint xdialogEnd;
    QPoint ydialogStart;
    QPoint ydialogEnd;

    QTimer *timer;

signals:
    void ok();
    void no();

public slots:
    void onClickOk();
    void onClickNo();

protected:
    void mousePressEvent(QMouseEvent *enent);
    void mouseReleaseEvent(QMouseEvent *enent);
    void accept();
    void reject();

    void keyPressEvent(QKeyEvent* evt)
    {
        if(evt->key()==Qt::Key_Enter||evt->key()==Qt::Key_Return)
            return;

    }
};

#endif // QDIALOGSCREEN_H
