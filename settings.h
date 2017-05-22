#ifndef SETTINGS_H
#define SETTINGS_H

#include "task.h"
#include <QObject>

class Settings
{
public:
    Settings();
    QVector<Task> tasks;
    int curTaskID;
    void setEnteredText(QString text);
    void checkInput();
    QVector<QString> decompose(QString t);
private:
    QString enteredText;
    QVector<QString> test;
};

#endif // SETTINGS_H
