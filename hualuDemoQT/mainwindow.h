#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_selectButton_clicked();

    void on_carpeopleUPSlider_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

    void on_comegoRateSlider_valueChanged(int value);

    void on_carpeopleMixUP_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
