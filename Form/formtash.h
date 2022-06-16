#ifndef FORMTASK_H
#define FORMTASK_H

#include <QWidget>
#include "functionsforclient351.h"
namespace Ui {
class formTash;
}

class formTash : public QWidget
{
    Q_OBJECT

public:
    explicit formTash(QWidget *parent = nullptr);
    ~formTash();
void set_tash_number(int n);

private slots:
void on_pushButton_Send_clicked();
bool check_answer(QString answer,QString input_for_tash,int tash_number);

private:
    Ui::formTash *ui;
    int task_number;
    QString input_for_tash;
};

#endif // FORMTASK_H
