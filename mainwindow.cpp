#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCursor>
#include <QPoint>
#include <QStatusBar>
#include <QThread>
#include <QEventLoop>
#include <QEvent>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::update()
{
    QPoint mouseLoc = QCursor::pos();
    statusBar()->showMessage(QString("Mouse move (%1,%2)").arg(mouseLoc.x()).arg(mouseLoc.y()));

}
