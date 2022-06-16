#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "formauth.h"
#include "formtask.h"
#include "QMessageBox"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    FormAuth *ui_auth;
    FormTask *ui_task;

private slots:
    void slot_show(QString log);
    void on_pushButton_Task1_clicked();
    void on_pushButton_Task2_clicked();
    void on_pushButton_Task3_clicked();
    void on_actionTask1_triggered();
    void on_actionTask2_triggered();
    void on_actionTask3_triggered();
    void on_pushButton_Exit_clicked();
    void on_pushButton_Start_clicked();
};
#endif // MAINWINDOW_H
