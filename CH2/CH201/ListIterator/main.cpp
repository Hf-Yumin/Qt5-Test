#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> list;
    list<<1<<3<<5<<7<<9;
     /* QListIterator - java风格的迭代器 */
    /* QListIterator - 只读迭代器，不能删除、插入列表项 */
    QListIterator<int> i(list); //迭代点在1前面
    for(;i.hasNext();)
        qDebug()<<i.next();
    for(;i.hasPrevious();)      //此时迭代点移动到最后面
        qDebug()<<i.previous();

    return a.exec();
}
