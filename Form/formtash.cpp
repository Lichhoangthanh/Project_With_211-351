#include "formTash.h"
#include "ui_formtash.h"

formTash::formTash(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::formTash)
{
    ui->setupUi(this);
}

formTash::~formTash()
{
    delete ui;
}

void formTash::set_tash_number(int n)
{
    task_number = n;
    input_for_tash=generate_inputa_for_task();
    ui->textBrowser_Tash->setText(generate_text_tash(tash_number,input_for_tash));
}

void formTash::on_pushButton_Send_clicked()
{
    QString answer = ui->lineEdit_answer->text();
    check_answer(answer,input_for_tash,tash_number);
     ui->lineEdit_answer->setText("");
    hide();
}

