#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class Dialog : public QDialog
{
    Q_OBJECT    //Qt5元对象系统(支持信号和槽等)，私有

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
private:        //定义各个控件
    QLabel *label1, *label2;
    QLineEdit *lineEdit;
    QPushButton *button;
private slots:  //定义槽函数
    void showArea();
};

#endif // DIALOG_H
