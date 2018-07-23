#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> list;
    /* QMutableListIterator - java风格的迭代器 */
    QMutableListIterator<int> i(list);
    for(int j = 0; j < 10; ++j)
        i.insert(j);
    for(i.toFront(); i.hasNext();)
        qDebug()<<i.next();
    for(i.toBack(); i.hasPrevious();)
    {
        if(i.previous() % 2 == 0)           //previous()移动迭代点
            i.remove();
        else
            i.setValue(i.peekNext() * 10); //peekNext()不移动迭代点
    }
    for(i.toFront(); i.hasNext();)
        qDebug()<<i.next();

    return a.exec();
}
