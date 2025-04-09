#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QMap>
#include "userwidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    void gui_Setup();
    QLineEdit * nameInput_LE_ptr; //用户名输入对象的指针
    QLineEdit * pswdInput_LE_ptr; //用户密码输入对象的指针
    QPushButton * regist_PB_ptr; //注册按钮对象的指针
    QPushButton * login_PB_ptr; //登录按钮对象的指针
    userWidget* userWidget_ptr = nullptr;
    QMap<QString,QString> userCredentials;   // 存储用户名密码的容器


private slots:
    void onLogin();
    void onLogout();
    void onRegister();

};
#endif // MAINWINDOW_H
