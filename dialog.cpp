#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

void Dialog::setText(QString text)
{
    ui->diagText->setText(text);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_diagButton_clicked()
{
   this->close();
}
