/********************************************************************************
** Form generated from reading UI file 'selectresultwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTRESULTWINDOW_H
#define UI_SELECTRESULTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectResultWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QDateTimeEdit *dateTimeEdit;
    QDateTimeEdit *dateTimeEdit_2;
    QLabel *label_2;
    QGroupBox *groupBox_3;
    QComboBox *comboBox;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *selectResultWindow)
    {
        if (selectResultWindow->objectName().isEmpty())
            selectResultWindow->setObjectName(QStringLiteral("selectResultWindow"));
        selectResultWindow->resize(1676, 989);
        centralwidget = new QWidget(selectResultWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(30, 20, 971, 931));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-590, -30, 1701, 1021));
        label->setMinimumSize(QSize(1701, 0));
        label->setMaximumSize(QSize(1701, 16777215));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/QQ\345\233\276\347\211\20720201212221406.png")));
        label->setScaledContents(false);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(1030, 10, 581, 931));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 40, 511, 121));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(40, 30, 115, 19));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(40, 70, 115, 19));
        radioButton_2->setChecked(true);
        dateTimeEdit = new QDateTimeEdit(groupBox_2);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(340, 70, 141, 22));
        dateTimeEdit_2 = new QDateTimeEdit(groupBox_2);
        dateTimeEdit_2->setObjectName(QStringLiteral("dateTimeEdit_2"));
        dateTimeEdit_2->setGeometry(QRect(160, 70, 141, 21));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 70, 21, 16));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 170, 511, 741));
        comboBox = new QComboBox(groupBox_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(130, 40, 261, 22));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 50, 72, 15));
        selectResultWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(selectResultWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1676, 26));
        selectResultWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(selectResultWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        selectResultWindow->setStatusBar(statusbar);

        retranslateUi(selectResultWindow);

        QMetaObject::connectSlotsByName(selectResultWindow);
    } // setupUi

    void retranslateUi(QMainWindow *selectResultWindow)
    {
        selectResultWindow->setWindowTitle(QApplication::translate("selectResultWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("selectResultWindow", "\347\255\233\351\200\211\346\235\241\344\273\266", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("selectResultWindow", "\346\227\266\351\227\264\350\214\203\345\233\264", Q_NULLPTR));
        radioButton->setText(QApplication::translate("selectResultWindow", "\345\256\236\346\227\266", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("selectResultWindow", "\345\216\206\345\217\262\346\225\260\346\215\256", Q_NULLPTR));
        label_2->setText(QApplication::translate("selectResultWindow", "-", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("selectResultWindow", "\347\255\233\351\200\211\346\235\241\344\273\266", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("selectResultWindow", "\346\255\246\344\276\257\345\214\272", Q_NULLPTR)
         << QApplication::translate("selectResultWindow", "\351\224\246\346\261\237\345\214\272", Q_NULLPTR)
         << QApplication::translate("selectResultWindow", "\351\235\222\347\276\212\345\214\272", Q_NULLPTR)
         << QApplication::translate("selectResultWindow", "\346\226\260\351\203\275\345\214\272", Q_NULLPTR)
         << QApplication::translate("selectResultWindow", "\345\217\214\346\265\201\345\214\272", Q_NULLPTR)
         << QApplication::translate("selectResultWindow", "\346\270\251\346\261\237\345\214\272", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("selectResultWindow", "\345\234\260\347\220\206\350\214\203\345\233\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class selectResultWindow: public Ui_selectResultWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTRESULTWINDOW_H
