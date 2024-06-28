#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QRadioButton>
#include <QListView>
#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QStringListModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_calculateButton_clicked();
    void on_readFromFileButton_clicked();
    void on_showDialogButton_clicked();
    void on_writeToFileButton_clicked();

private:
    Ui::MainWindow *ui;
    QStringListModel *model;

    QDialog *dialog;
    QFile inputFile;
    QFile outputFile;

    void calculate();
};

#endif // MAINWINDOW_H
