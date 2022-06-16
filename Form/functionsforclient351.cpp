#include "functionsforclient351.h"

void auth(QString log, QString pass)
{
    QString reg= "auth&"+log+"&"+pass;
    qDebug()<<reg;
}
void reg (QString log, QString pass, QString email)
{
     QString reg= "reg&"+log+"&"+pass+"&"+email;
     qDebug()<<reg;
}
void update_stat(int n, QString upd)
{
    QString reg= "updstat&"+QString::number(n)+"&"+upd;
    qDebug()<<reg;
}

bool check_answer(QString answer,QString input_for_task,int task_number)
{
  bool res = (answer==solve_task(task_number,input_for_task));
  QString tmp ="";
  if(res) tmp="+";
  else tmp="-";
  update_stat(task_number, tmp);
  return res;

}

QString solve_task(int task_number, QString input_for_task)
{
    return "ans"+QString::number(task_number);
}

QString genarate_input_for_task()
{
    return "jsdhfajsdha";
}

QString genarate_text_task(int task_number,QString input_for_task)
{
    return "Task" +QString::number(task_number)+"  "+input_for_task;

}
