#include <QCoreApplication>
#include "singletonclient.h"

SingletonClient* SingletonClient::p_instance;
SingletonDestroyer SingletonClient::destroyer;
QTcpSocket * SingletonClient::mTcpSocket;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    SingletonClient::getInstance();

    SingletonClient::send_msg_to_server("auth&user&123");



    return a.exec();
}
