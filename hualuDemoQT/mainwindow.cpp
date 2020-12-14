#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"selectresultwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("智慧城市");
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_selectButton_clicked()
{
    selectResultWindow* newwin = new selectResultWindow();
    newwin->setWindowTitle("查询结果");
    newwin->show();

}
