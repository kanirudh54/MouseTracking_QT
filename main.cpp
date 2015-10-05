#include "mainwindow.h"
#include <QApplication>
#include <QTimer>
#include <QObject>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QTimer *timer = new QTimer();
    QObject::connect(timer,&QTimer::timeout,&w,&MainWindow::update);
    timer->start(10);
    return a.exec();
}
