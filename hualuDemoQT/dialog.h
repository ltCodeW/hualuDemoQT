#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    void on_click_loginButton();
    ~Dialog();

private slots:
    void on_loginButton_clicked(bool checked);

    void on_loginButton_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
