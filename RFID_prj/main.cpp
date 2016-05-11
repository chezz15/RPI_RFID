#include "mainwindow.h"
#include "low_level_lib.h"
#include <QApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    if (lib_init() < 0) {
        qDebug() << "Error during lib_init";
        return -1;
    }

    return a.exec();
}
