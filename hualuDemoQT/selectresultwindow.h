#ifndef SELECTRESULTWINDOW_H
#define SELECTRESULTWINDOW_H

#include <QMainWindow>

namespace Ui {
class selectResultWindow;
}

class selectResultWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit selectResultWindow(QWidget *parent = 0);
    ~selectResultWindow();

private slots:

    virtual void keyPressEvent(QKeyEvent *ev);
    virtual void keyReleaseEvent(QKeyEvent *ev);

private:
    Ui::selectResultWindow *ui;
};

#endif // SELECTRESULTWINDOW_H
