#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowTitle("Main Window");
    w.resize(300, 200);
    w.show();

    return a.exec();
}
