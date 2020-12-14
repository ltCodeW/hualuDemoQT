#include "selectresultwindow.h"
#include "ui_selectresultwindow.h"
#include <iostream>

selectResultWindow::selectResultWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::selectResultWindow)
{
    ui->setupUi(this);
    QIcon icon;
    icon.addFile(":/../resources/定位g.png");
    if(icon.is)

    ui->toolButton->setIcon(icon);


}

selectResultWindow::~selectResultWindow()
{
    delete ui;
}
