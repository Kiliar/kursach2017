#ifndef TASK_H
#define TASK_H

#include <QString>
#include <QVector>

class Task
{
public:
	Task();
    void fillTask(QString desc, QString start, QString words);
	QString getDescription();
	QString getStartingText();
    QString getCheckWords();
private: 
    QString checkWords,
            startingText,
            taskDescription;
};

#endif // TASK_H
