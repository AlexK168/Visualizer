#include "worker.h"

Worker::Worker(QObject *parent) : QObject(parent)
{

}

void Worker::doWork(const QString &parameter){
    QJsonArray test;
    test = t.toArray();
    QWidget* tab = new QWidget();
    TableConstructor *constructor = new TableConstructor(test, tab);
    constructors.push_back(constructor);
    ui->tabWidget->addTab(tab, "test " + QString::number(i));
    i++;
}
