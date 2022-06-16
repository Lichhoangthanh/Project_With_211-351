#include "formauth.h"
#include "ui_formauth.h"

FormAuth::FormAuth(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAuth)
{
    ui->setupUi(this);
    ui->lineEdit_Mail->setVisible(false);
    ui->pushButton_Canc->setVisible(false);
}

FormAuth::~FormAuth()
{
    delete ui;
}

void FormAuth::on_pushButton_Reg_clicked()
{
    ui->lineEdit_Mail->setVisible(true);
    ui->pushButton_Canc->setVisible(true);
    ui->pushButton_Reg->setVisible(false);
}


void FormAuth::on_pushButton_Canc_clicked()
{
    ui->lineEdit_Mail->setVisible(false);
    ui->pushButton_Canc->setVisible(false);
    ui->pushButton_Reg->setVisible(true);
}


void FormAuth::on_pushButton_Ok_clicked()
{
    QString log=ui->lineEdit_log->text();
    QString pass=ui->lineEdit_Pass->text();
            if(ui->lineEdit_Mail->isVisible())
            {
                QString mail=ui->lineEdit_Mail->text();
                //reg(log,pass,mail)

            }
            else
            {
auth(log,pass);
            }
            emit logged_in(log);
            hide();
}

