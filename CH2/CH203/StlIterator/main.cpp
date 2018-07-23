#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> list;
    for(int j = 0; j < 10; j++)
        list.insert(list.end(), j); //end()返回一个迭代器

    /* QList<int>::iterator - STL风格的迭代器 */
    QList<int>::iterator i;         //返回指针，interator是QList类的成员
    for(i = list.begin(); i != list.end(); ++i)
    {
        qDebug()<<(*i);
        *i = (*i) * 10;
    }

    QList<int>::const_iterator ci;
    for(ci = list.constBegin(); ci != list.constEnd(); ++ci)
        qDebug()<<(*ci);

    return a.exec();
}
