#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QMenuBar>
#include <QMenu>
#include <QAction>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , model(new QStringListModel(this))
{
    ui->setupUi(this);
    ui->listView->setModel(model);

    // Подключение сигналов и слотов

    // Настройка диалога
    dialog = new QDialog(this);
    dialog->setWindowTitle("Settings");
    dialog->setModal(true);

    // Настройка меню
    QMenuBar *menuBar = new QMenuBar(this);
    QMenu *fileMenu = new QMenu("File", this);
    QAction *exitAction = fileMenu->addAction("Exit");
    connect(exitAction, &QAction::triggered, this, &MainWindow::close);
    menuBar->addMenu(fileMenu);
    this->setMenuBar(menuBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_calculateButton_clicked()
{
    bool ok1, ok2;
    qint64 num1 = ui->input1->text().toLongLong(&ok1);
    qint64 num2 = ui->input2->text().toLongLong(&ok2);

    if (!ok1 || !ok2) {
        QMessageBox::warning(this, "Error", "Invalid input. Please enter valid numbers.");
        return;
    }

    if (num1 < 0 || num2 < 0) {
        QMessageBox::warning(this, "Error", "Negative numbers are not allowed.");
        return;
    }

    qint64 result = 0;

    if (ui->radioButtonAnd->isChecked()) {
        result = num1 & num2;
    } else if (ui->radioButtonOr->isChecked()) {
        result = num1 | num2;
    } else if (ui->radioButtonXor->isChecked()) {
        result = num1 ^ num2;
    } else if (ui->radioButtonNot->isChecked()) {
        result = ~num1;
    }

    ui->resultLabel->setText("Result: " + QString::number(result));

    QStringList list = model->stringList();
    list.append(QString::number(result));  // Преобразование qint64 в QString
    model->setStringList(list);
}



void MainWindow::on_readFromFileButton_clicked()
{
    inputFile.setFileName("input.txt");

    if (!inputFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Unable to open input file.");
        return;
    }

    QTextStream in(&inputFile);
    QString line1 = in.readLine();
    QString line2 = in.readLine();

    ui->input1->setText(line1);
    ui->input2->setText(line2);

    inputFile.close();
}


void MainWindow::on_showDialogButton_clicked()
{
    dialog->exec();
}


void MainWindow::on_writeToFileButton_clicked()
{
    outputFile.setFileName("output.txt");

    if (!outputFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Unable to open output file.");
        return;
    }

    QTextStream out(&outputFile);
    out << ui->resultLabel->text() << "\n";

    outputFile.close();
}

