#include "selectresultwindow.h"
#include "ui_selectresultwindow.h"

selectResultWindow::selectResultWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::selectResultWindow)
{
    ui->setupUi(this);
}

selectResultWindow::~selectResultWindow()
{
    delete ui;
}
