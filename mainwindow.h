#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "settings.h"
#include "dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setDescription(QString);
    void setText(QString);
    void setupTask();
    void testFail();
    void testSuccess();


public slots:
    void on_checkButton_clicked();

private:
    Ui::MainWindow *ui;
    Settings settings;
};

#endif // MAINWINDOW_H
