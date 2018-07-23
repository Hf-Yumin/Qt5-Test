#include "dialog.h"
#include <QGridLayout>
const static double PI = 3.1416;
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    /* 创建对象 - new 返回一个指针 */
    label1 = new QLabel(this);
    label1->setText(tr("请输入圆的半径："));
    lineEdit = new QLineEdit(this);
    label2 = new QLabel(this);
    button = new QPushButton(this);
    button->setText(tr("显示对应圆的面积"));
    /* 布局 */
    QGridLayout *mainLayout = new QGridLayout(this);    //布局管理器：固定控件位置
    mainLayout->addWidget(label1, 0, 0);
    mainLayout->addWidget(lineEdit, 0, 1);
    mainLayout->addWidget(label2, 1, 0);
    mainLayout->addWidget(button, 1, 1);
    connect(button, SIGNAL(clicked()), this, SLOT(showArea())); //连接信号和槽
}

void Dialog::showArea()         //槽函数
{
    bool ok;
    QString outStr;
    QString valueStr = lineEdit->text();
    int valueInt = valueStr.toInt(&ok);
    double area = valueInt * valueInt * PI; //计算面积
    label2->setText(outStr.setNum(area));   //输出
}

Dialog::~Dialog()
{

}
