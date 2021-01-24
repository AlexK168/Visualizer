#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QThread>
#include <QVector>

class Controller : public QObject
{
    Q_OBJECT
    QVector<QThread> workerThreads;
public:
    explicit Controller(QObject *parent = nullptr);
    ~Controller();
};

#endif // CONTROLLER_H
