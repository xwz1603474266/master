#ifndef FILECOPY_H
#define FILECOPY_H

#include <QObject>
#include <QDir>

class SFileCopy : public QObject
{
    Q_OBJECT
public:
    explicit SFileCopy(QObject *parent = 0);
    ~SFileCopy();

    //拷贝文件：
    bool copyFileToPath(QString sourceDir ,QString toDir, bool coverFileIfExist);

    //拷贝文件夹：
    bool copyDirectoryFiles(const QString &fromDir, const QString &toDir, bool coverFileIfExist);
signals:
    void sigCopyDirStation(float num);
    void sigCopyDirOver();
private:
    //QDir * m_createfile = Q_NULLPTR;
    QDir * m_createfile = NULL;
    float m_total = 0;
    float m_value = 0;
    bool m_firstRead = true;
};

#endif // FILECOPY_H
