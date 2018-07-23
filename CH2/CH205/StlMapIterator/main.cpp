#include <QCoreApplication>
#include <QDebug>

/* STL风格 - 通过查找键值来修改值 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* 初始化map */
    QMap<QString, QString> map;
    map.insert("BeiJing", "111");
    map.insert("ShangHai", "021");
    map.insert("NanJing", "025");
    /* 设定迭代器 - 输出 */
    QMap<QString, QString>::const_iterator i;
    for(i = map.constBegin(); i != map.constEnd(); ++i)
        qDebug()<<"   "<<i.key()<<"   "<<i.value();
    /* 设定迭代器 - 查找，修改 */
    QMap<QString, QString>::iterator mi;
    mi = map.find("BeiJing");
    if(mi != map.end())
        mi.value() = "010";
    qDebug()<<"   ";
    /* 设定迭代器 - 输出 */
    QMap<QString, QString>::const_iterator modi;
    for(modi = map.constBegin(); modi != map.constEnd(); ++modi)
        qDebug()<<"   "<<modi.key()<<"   "<<modi.value();

    return a.exec();
}
