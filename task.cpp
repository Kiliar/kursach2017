#include "task.h"

Task::Task()
{

}

void Task::fillTask(QString desc, QString start, QString words)
{
    taskDescription = desc;
    startingText = start;
    checkWords = words;
}
QString Task::getDescription()
{
	return taskDescription;
}

QString Task::getStartingText()
{
    return startingText;
}

QString Task::getCheckWords()
{
    return checkWords;
}


