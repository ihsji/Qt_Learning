#ifndef USERWIDGET_H
#define USERWIDGET_H

#include <QObject>
#include <QWidget>
#include <QPushButton>

class userWidget : public QWidget
{
    Q_OBJECT
public:
    explicit userWidget(QWidget *parent = nullptr);

private:
    QPushButton* logout_PB_ptr;

signals:
    void logout();

private slots:
    void onButtonClicked();  
};

#endif // USERWIDGET_H
