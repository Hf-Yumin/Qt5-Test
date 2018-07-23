#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QMap<QString, QString> map;

    /* 栈对象插入 */
    map.insert("BeiJing", "111");
    map.insert("ShangHai", "021");
    map.insert("NanJing", "025");
    /* 输出 */
    QMapIterator<QString, QString> i(map);
    for(;i.hasNext();)
        qDebug()<<"   "<<i.key()<<"   "<<i.next().value();  //输出键值的时候不需要移动到下一个迭代点
    /* 修改 - 读写迭代器 */
    QMutableMapIterator<QString, QString> mi(map);
    if(mi.findNext("111"))
        mi.setValue("010");
    /* 重新输出 */
    QMapIterator<QString, QString> modi(map);
    qDebug()<<"   ";
    for(;modi.hasNext();)
        qDebug()<<"   "<<modi.key()<<"   "<<modi.next().value();

    return a.exec();
}
