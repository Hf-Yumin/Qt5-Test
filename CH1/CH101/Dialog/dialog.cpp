#include "dialog.h"
#include "ui_dialog.h"
const static double PI = 3.1416;
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_countBtn_clicked()  //槽函数
{
    bool ok;
    QString tempStr;                                //输出
    QString valueStr = ui->radiusLineEdit->text();  //输入
    int valueInt = valueStr.toInt(&ok);
    double area = valueInt * valueInt * PI;         //计算
    ui->areaLabel_2->setText(tempStr.setNum(area)); //输出
}

void Dialog::on_radiusLineEdit_textChanged(const QString &arg1)
{
    bool ok;
    QString tempStr;                                //输出
    QString valueStr = ui->radiusLineEdit->text();  //输入
    int valueInt = valueStr.toInt(&ok);
    double area = valueInt * valueInt * PI;         //计算
    ui->areaLabel_2->setText(tempStr.setNum(area)); //输出
}
