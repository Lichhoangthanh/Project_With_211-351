#ifndef FUNCTIONSFORCLIENT351_H
#define FUNCTIONSFORCLIENT351_H
#include <QString>
#include <QDebug>

void auth(QString log, QString pass);
void reg (QString log, QString pass, QString email);
void update_stat(int n, QString upd);

QString genarate_input_for_task();
QString genarate_text_task(int task_number,QString input_for_task);
QString solve_task(int task_number,QString input_for_task);
bool check_answer(QString answer,QString input_for_task,int task_number);
#endif // FUNCTIONSFORCLIENT351_H
