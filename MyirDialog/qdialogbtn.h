#ifndef QDIALOGBTN_H
#define QDIALOGBTN_H
#include<QLineEdit>
#include "qdialogbutton.h"
#include <QTextBrowser>
#include<QDialog>
#include<QThread>
#include<QKeyEvent>
#include <QLabel>

class UpdataThread;
namespace Ui {
class QDialogbtn;
}

class QDialogbtn : public QDialog
{
    Q_OBJECT
public:
    explicit QDialogbtn(QWidget *parent = 0, Qt::WindowFlags f = 0);

    qdialogbutton* uboot_update;
    qdialogbutton* kernel_update;
    qdialogbutton* dtb_update;
    qdialogbutton* rootfs_update;
    qdialogbutton* close;

    QTextBrowser* USBtext;
    QLabel* tytle_u;

    UpdataThread* workthread;
 //   MyThread* ts_celibrateThread;

    ~QDialogbtn();

private:
    int Vwidth;
    int Vheight;
    Ui::QDialogbtn *ui;

private slots:
    void on_UbootClicked();
    void on_KernelClicked();
    void on_DtbClicked();
    void on_RootfsClicked();
    void on_CloseClicked();
    int control_select();

signals:
    void decrypt();//解密成功

public slots:
    void accept();
//    void onUboot();
//    void onKernel();
//    void onDtb();
//    void onRootfs();
//    void onQuite();
    void reject();

protected:
    void keyPressEvent(QKeyEvent* evt)
    {
        if(evt->key() == Qt::Key_Enter || evt->key() == Qt::Key_Return)
            return;

        QDialog::keyPressEvent(evt);
    }
};



class UpdataThread : public QThread
{
    Q_OBJECT


public:
    enum Updata
    {
        Up_uboot,
        Up_kernel,
        Up_dtb,
        Up_all
    };

    UpdataThread(QObject* parent = NULL);
    void run() override;

    int step;
signals:


protected:


};
#endif // QDIALOGBTN_H
