#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // 创建控件
    slider = new QSlider(Qt::Horizontal, this);
    spinBox = new QSpinBox(this);

    // 设置数值范围
    const int minValue = 0;
    const int maxValue = 100;

    slider->setRange(minValue, maxValue);
    spinBox->setRange(minValue, maxValue);

    //设置初始值
    const int intValue = 50;
    slider->setValue(intValue);
    spinBox->setValue(intValue);

    // 设置布局（示例使用垂直布局）
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(slider);
    layout->addWidget(spinBox);
    QWidget *centralWidget = new QWidget;
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);

    //建立同步连接
    setupSync();
}
void MainWindow::setupSync(){
    //处理QSpinBox的重载信号
    connect(spinBox,QOverload<int>::of(&QSpinBox::valueChanged),
            slider,&QSlider::setValue);

    //连接Slider到SpinBox
    connect(slider, &QSlider::valueChanged,
            spinBox, &QSpinBox::setValue);
}

MainWindow::~MainWindow()
{

}


