#include "selectresultwindow.h"
#include "ui_selectresultwindow.h"
#include <iostream>
#include<QKeyEvent>


selectResultWindow::selectResultWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::selectResultWindow)
{
    ui->setupUi(this);
    ui->widget->setVisible(false);



}

selectResultWindow::~selectResultWindow()
{
    delete ui;
}


void  selectResultWindow::keyPressEvent(QKeyEvent *ev){
    if(ev->key() == Qt::Key_A)
    {
       ui->widget->setVisible(true);
       return;
    }

}
void  selectResultWindow::keyReleaseEvent(QKeyEvent *ev){
    if(ev->key() == Qt::Key_A)
    {
       ui->widget->setVisible(false);
       return;
    }
}
