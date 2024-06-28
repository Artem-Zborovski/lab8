/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *input1;
    QLineEdit *input2;
    QLabel *resultLabel;
    QPushButton *calculateButton;
    QRadioButton *radioButtonAnd;
    QRadioButton *radioButtonOr;
    QRadioButton *radioButtonXor;
    QRadioButton *radioButtonNot;
    QListView *listView;
    QPushButton *readFromFileButton;
    QPushButton *writeToFileButton;
    QPushButton *showDialogButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        input1 = new QLineEdit(centralwidget);
        input1->setObjectName("input1");
        input1->setGeometry(QRect(70, 10, 131, 28));
        input2 = new QLineEdit(centralwidget);
        input2->setObjectName("input2");
        input2->setGeometry(QRect(240, 10, 131, 28));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setGeometry(QRect(60, 230, 191, 20));
        calculateButton = new QPushButton(centralwidget);
        calculateButton->setObjectName("calculateButton");
        calculateButton->setGeometry(QRect(150, 160, 83, 29));
        radioButtonAnd = new QRadioButton(centralwidget);
        radioButtonAnd->setObjectName("radioButtonAnd");
        radioButtonAnd->setGeometry(QRect(90, 70, 112, 26));
        radioButtonOr = new QRadioButton(centralwidget);
        radioButtonOr->setObjectName("radioButtonOr");
        radioButtonOr->setGeometry(QRect(230, 70, 112, 26));
        radioButtonXor = new QRadioButton(centralwidget);
        radioButtonXor->setObjectName("radioButtonXor");
        radioButtonXor->setGeometry(QRect(90, 110, 112, 26));
        radioButtonNot = new QRadioButton(centralwidget);
        radioButtonNot->setObjectName("radioButtonNot");
        radioButtonNot->setGeometry(QRect(230, 110, 112, 26));
        listView = new QListView(centralwidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(410, 70, 256, 192));
        readFromFileButton = new QPushButton(centralwidget);
        readFromFileButton->setObjectName("readFromFileButton");
        readFromFileButton->setGeometry(QRect(310, 300, 121, 29));
        writeToFileButton = new QPushButton(centralwidget);
        writeToFileButton->setObjectName("writeToFileButton");
        writeToFileButton->setGeometry(QRect(650, 300, 111, 29));
        showDialogButton = new QPushButton(centralwidget);
        showDialogButton->setObjectName("showDialogButton");
        showDialogButton->setGeometry(QRect(490, 300, 101, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        resultLabel->setText(QCoreApplication::translate("MainWindow", "resuit:", nullptr));
        calculateButton->setText(QCoreApplication::translate("MainWindow", "calculate", nullptr));
        radioButtonAnd->setText(QCoreApplication::translate("MainWindow", "AND", nullptr));
        radioButtonOr->setText(QCoreApplication::translate("MainWindow", "OR", nullptr));
        radioButtonXor->setText(QCoreApplication::translate("MainWindow", "XOR", nullptr));
        radioButtonNot->setText(QCoreApplication::translate("MainWindow", "NOT", nullptr));
        readFromFileButton->setText(QCoreApplication::translate("MainWindow", "ReadFromFile", nullptr));
        writeToFileButton->setText(QCoreApplication::translate("MainWindow", "WriteFromFile", nullptr));
        showDialogButton->setText(QCoreApplication::translate("MainWindow", "ShowDialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
