#include <QWidget>
#include <QPushButton>

class MainWindow : public QWidget
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);

private slots:
    void showChildWindow();
    void closeApp();

private:
    QPushButton *nextBtn;
    QPushButton *closeBtn;
};
