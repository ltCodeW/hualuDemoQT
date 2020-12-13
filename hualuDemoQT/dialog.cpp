#include "dialog.h"
#include "ui_dialog.h"
#include"QMessageBox.h"
#include"mainwindow.h"
#include"iostream"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}


Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_loginButton_clicked(bool )
{
    std::cout<<"in here "<<std::endl;
    MainWindow* mainWindow = new MainWindow();
    mainWindow->show();
}
void Dialog::on_loginButton_clicked()
{
    std::cout<<"in here "<<std::endl;
    MainWindow* mainWindow = new MainWindow();
    mainWindow->show();
}
