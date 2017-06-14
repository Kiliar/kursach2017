#include "settings.h"

Settings::Settings(QObject *parent) : QObject(parent)
{
    for (int i; i<10;i++){
            Task tmp;
            QString desc = "Test 1236", text = "#include <iosream>\n\nint a, b, c;\n\nint main {\ncin >> a >> b;\nc = a+b;\ncout << c;\nreturn 0;\n} ";
            QString words = "#include <iosream>\n\nint a, b, c;\n\nint main {\ncin >> a >> b;\nc = a+b;\ncout << c;\nreturn 0;\n} ";
            tmp.fillTask(desc,text,words);
            tasks.append(tmp);
        }
        tasks[5].fillTask("ХУЙ","#include <iosream>\n\nint a, b, c;\n\nint main {\ncin >> a >> b;\nc = a+b;\ncout << c;\nreturn 0;\n} ","#include <iosream>\n\nint a, b, c;\n\nint main {\ncin >> a >> b;\nc = a+b;\ncout << c;\nreturn 0;\n} ");
        curTaskID = 0;
}
void Settings::setEnteredText(QString text)
{
    enteredText = text;
}

bool Settings::checkInput()
{
      QVector<QString> checkWords = decompose(tasks[curTaskID].getCheckWords()),
                       text = decompose(enteredText);
      for (int i = 0; i < text.length(); i++) {
          if(i >= checkWords.length() || text[i] != checkWords[i]) {
                  return false;
          }
      }
     return true;
}

QVector<QString> Settings::decompose(QString t)
{
//    t.push_back("\n");
    QString word,specialSymbols = ";,.+-/*><=[]{}()'\"" ;
    QVector<QString> readedWords;

    for(int i = 0; i < t.length(); i++) {
        if(specialSymbols.contains(t[i])) {
            if(!word.isEmpty())
            readedWords.push_back(word);
            word.clear();
            readedWords.push_back(QString(t[i]));
        } else if (t[i] == ' ' || t[i] == '\n') {
           if(!word.isEmpty())
           readedWords.push_back(word);
           word.clear();
        } else {
            word.push_back(t[i]);
        }
    }
    return readedWords;
}
