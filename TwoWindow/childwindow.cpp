#include "childwindow.h"
#include <QVBoxLayout>
#include <QApplication>

ChildWindow::ChildWindow(QWidget *parent)
    : QWidget(parent)
{
    // 界面布局
    backBtn = new QPushButton("Back", this);
    closeBtn = new QPushButton("Close", this);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(backBtn);
    layout->addWidget(closeBtn);
    setLayout(layout);

    // 信号连接
    connect(backBtn, &QPushButton::clicked, this, &ChildWindow::returnToParent);
    connect(closeBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}

void ChildWindow::returnToParent()
{
    emit returnToMain();
    this->close();
}
