#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui_auth = new FormAuth;
    ui_task =new FormTask;
    ui_auth->show();
    connect(ui_auth, &FormAuth::logged_in, this, &MainWindow::slot_show);
}

MainWindow::~MainWindow()
{
    delete ui_auth;
    delete ui_task;
    delete ui;
}

void MainWindow::slot_show(QString log)
{
    ui->label->setText(log);
    show();
}




void MainWindow::on_pushButton_Task1_clicked()
{
    ui_task->set_task_number(1);
    ui_task->show();
}

void MainWindow::on_pushButton_Task2_clicked()
{
    ui_task->set_task_number(2);
    ui_task->show();
}

void MainWindow::on_pushButton_Task3_clicked()
{
    ui_task->set_task_number(3);
    ui_task->show();
}

void MainWindow::on_actionTask1_triggered()
{
    on_pushButton_Task1_clicked();
}

void MainWindow::on_actionTask2_triggered()
{
    on_pushButton_Task2_clicked();
}

void MainWindow::on_actionTask3_triggered()
{
    on_pushButton_Task3_clicked();
}




void MainWindow::on_pushButton_Exit_clicked()
{
    close();
}


void MainWindow::on_pushButton_Start_clicked()
{
    QMessageBox temp;
    temp.setText("Statistics:\n Task 1 -12, Task 2-4, Task 3 - -2");
    temp.exec();
}

