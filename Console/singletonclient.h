#ifndef SINGLETONCLIENT_H
#define SINGLETONCLIENT_H
#include <QObject>
#include <QTcpSocket>
#include <QTNetwork>
#include <QByteArray>
#include <QDebug>

class SingletonClient;

class SingletonDestroyer
{
    private:
        SingletonClient * p_instance;
    public:
        ~SingletonDestroyer() { delete p_instance;}
        void initialize(SingletonClient * p){p_instance = p;};
};


class SingletonClient : public QObject
{
    Q_OBJECT
    private:
        static SingletonClient * p_instance;
        static SingletonDestroyer destroyer;
        static QTcpSocket* mTcpSocket;
    protected:
        explicit SingletonClient(QObject * parent = nullptr);
        SingletonClient(SingletonClient& ) = delete;
        SingletonClient& operator = (SingletonClient &) = delete;
        ~SingletonClient() {
            mTcpSocket->close();
        }
        friend class SingletonDestroyer;
    public:
        static SingletonClient* getInstance();

        static SingletonClient* send_msg_to_server(QString query);
    signals:
        void message_from_server(QString msg);
    private slots:
        void slotServerRead();

};

#endif // SINGLETONCLIENT_H



