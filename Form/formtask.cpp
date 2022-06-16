#include "formtask.h"
#include "ui_formtask.h"

FormTask::FormTask(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormTask)
{
    ui->setupUi(this);
}

FormTask::~FormTask()
{
    delete ui;
}

void FormTask::set_task_number(int n)
{
    task_number = n;
    input_for_task = genarate_input_for_task();
    ui->textBrowser_Task->setText(genarate_text_task(task_number,input_for_task));
}

void FormTask::on_pushButton_Send_clicked()
{
    QString answer = ui->lineEdit_answer->text();
    check_answer(answer,input_for_task,task_number);
    ui->lineEdit_answer->setText("");
    hide();
}

