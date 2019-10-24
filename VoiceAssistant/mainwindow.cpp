#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "voiceassistant.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //TODO: Чтение с микрофона
    QMessageBox::warning(this, "Оповещение", "Чтение с микрофона (Заглушка)");


}
