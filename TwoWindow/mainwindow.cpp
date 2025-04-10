#include "mainwindow.h"
#include "childwindow.h"
#include <QVBoxLayout>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    // 界面布局
    nextBtn = new QPushButton("Next", this);
    closeBtn = new QPushButton("Close", this);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(nextBtn);
    layout->addWidget(closeBtn);
    setLayout(layout);

    // 信号连接
    connect(nextBtn, &QPushButton::clicked, this, &MainWindow::showChildWindow);
    connect(closeBtn, &QPushButton::clicked, this, &MainWindow::closeApp);
}

void MainWindow::showChildWindow()
{
    ChildWindow *child = new ChildWindow;
    connect(child, &ChildWindow::returnToMain, [=](){
        child->deleteLater();
        this->show();
    });
    child->show();
    this->hide();
}

void MainWindow::closeApp()
{
    qApp->quit();
}
