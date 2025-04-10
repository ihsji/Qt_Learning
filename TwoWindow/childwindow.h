#include <QWidget>
#include <QPushButton>

class ChildWindow : public QWidget
{
    Q_OBJECT
public:
    explicit ChildWindow(QWidget *parent = nullptr);

signals:
    void returnToMain();

private slots:
    void returnToParent();

private:
    QPushButton *backBtn;
    QPushButton *closeBtn;
};
