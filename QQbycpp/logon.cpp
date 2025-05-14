#include "logon.h"
#include "ui_logon.h"
Logon::Logon(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Logon)
{
    setWindowTitle("QQ");
    ui->setupUi(this);
    socket =new QTcpSocket;
    QString ip("127.0.0.1");
    QString port("8000");
    socket->connectToHost(QHostAddress(ip), port.toUShort()); // 使用 toUShort() 转换端口号
    connect(socket, &QTcpSocket::connected, this, [this]() {
        QMessageBox::information(this, "提示", "已连接到服务器");
    });
    connect(socket, &QTcpSocket::disconnected, this, [this]() {
        QMessageBox::warning(this, "提示", "与服务器的连接已断开");
    });
    connect(socket, &QTcpSocket::errorOccurred, this, [this]() {
        QMessageBox::critical(this, "错误", "无法连接到服务器");
    });
}

Logon::~Logon()
{
    delete ui;
}



void Logon::on_logpushButton_clicked()
{
    qDebug()<<"登录调试";

    QString accountdata=QString
    ("account:%1|password:%2").arg(ui->AccountlineEdit->text(),ui->PasswordlineEdit->text());
    QByteArray data;
    data.append(accountdata.toUtf8());
    //qDebug()<<data;
    socket->write(data);
}

