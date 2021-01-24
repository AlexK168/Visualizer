#ifndef WORKER_H
#define WORKER_H

#include <QObject>

class Worker : public QObject
{
    Q_OBJECT

public:
    explicit Worker(QObject *parent = nullptr);
    void doWork(const QString &parameter);
private:
    QJsonArray test;

//    QJsonArray test;
//    test = t.toArray();
//    QWidget* tab = new QWidget();
//    TableConstructor *constructor = new TableConstructor(test, tab);
//    constructors.push_back(constructor);
//    ui->tabWidget->addTab(tab, "test " + QString::number(i));
//    i++;
};

#endif // WORKER_H
