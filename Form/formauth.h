#ifndef FORMAUTH_H
#define FORMAUTH_H
#include "functionsforclient351.h"
#include <QWidget>

namespace Ui {
class FormAuth;
}

class FormAuth : public QWidget
{
    Q_OBJECT

public:
    explicit FormAuth(QWidget *parent = nullptr);
    ~FormAuth();

private slots:
    void on_pushButton_Reg_clicked();

    void on_pushButton_Canc_clicked();

    void on_pushButton_Ok_clicked();

signals:
    void logged_in (QString log);

private:
    Ui::FormAuth *ui;
};

#endif // FORMAUTH_H
