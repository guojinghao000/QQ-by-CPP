#ifndef LOGON_H
#define LOGON_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <QTcpSocket>
#define dbip "localhost"
namespace Ui {
class Logon;
}

class Logon : public QMainWindow
{
    Q_OBJECT

public:
    explicit Logon(QWidget *parent = nullptr);
    ~Logon();
private slots:

    void on_logpushButton_clicked();

private:
    Ui::Logon *ui;
    QTcpSocket *socket;
};

#endif // LOGON_H
