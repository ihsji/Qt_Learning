#include "userwidget.h"
#include <QVBoxLayout>
userWidget::userWidget(QWidget *parent) : QWidget(parent)
{
    logout_PB_ptr = new QPushButton(this);
    logout_PB_ptr->setText("登出");
    logout_PB_ptr->setFont(QFont("黑体",30));
    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(logout_PB_ptr);

    connect(logout_PB_ptr,&QPushButton::clicked,this,&userWidget::onButtonClicked);
}

void userWidget::onButtonClicked()
{
    emit logout();
}

