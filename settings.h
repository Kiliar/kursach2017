#ifndef SETTINGS_H
#define SETTINGS_H

#include <QObject>
#include "task.h"
#include <QDebug>

class Settings : public QObject
{
    Q_OBJECT
public:
    explicit Settings(QObject *parent = 0);
    QVector<Task> tasks;
        int curTaskID;
        void setEnteredText(QString text);
        bool checkInput();
        QVector<QString> decompose(QString t);
private:
        QString enteredText;
           QVector<QString> test;
signals:
       void sucessMessege();
       void failMessege();

public slots:
};

#endif // SETTINGS_H
