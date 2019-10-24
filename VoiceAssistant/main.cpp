#include "mainwindow.h"
#include "commandmanager.h"
#include <QMessageBox>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    CommandManager CommandManager;

    w.show();
    return a.exec();
}
