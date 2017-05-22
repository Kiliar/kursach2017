#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupTask();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setDescription(QString text)
{
    ui->taskField->setText(text);
}

void MainWindow::setText(QString text)
{
    ui->inputField->setPlainText(text);
}

void MainWindow::setupTask()
{
    ui->taskField->setText(settings.tasks[settings.curTaskID].getDescription());
    ui->inputField->setPlainText(settings.tasks[settings.curTaskID].getStartingText());
}


void MainWindow::on_checkButton_clicked()
{
    QString text = ui->inputField->toPlainText();
    settings.setEnteredText(text);
    settings.checkInput();
    qDebug() << text;
}
