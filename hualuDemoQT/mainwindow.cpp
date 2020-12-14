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



void MainWindow::on_carpeopleUPSlider_valueChanged(int value)
{
    int pos = ui->carpeopleUPSlider->value();
    QString str = QString("%1").arg(pos);
    ui->carpeopleMixUP->setText(str);
}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    int pos = ui->carpeopleDownSlider->value();
    QString str = QString("%1").arg(pos);
    ui->carpeopleMixDown->setText(str);
}

void MainWindow::on_comegoRateSlider_valueChanged(int value)
{
    double pos = ui->carpeopleDownSlider->value();
    pos/=100;
    QString str = QString("%1").arg(pos);
    ui->comegoRate->setText(str);
}

void MainWindow::on_carpeopleMixUP_textChanged(const QString &arg1)
{
    QString str = ui->carpeopleMixUP->text();
    int pos = str.toInt();
    ui->carpeopleUPSlider->setValue(pos);
}
