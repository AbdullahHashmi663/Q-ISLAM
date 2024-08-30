#ifndef UMER_H
#define UMER_H
#include <QMainWindow>
#include<QtMultimedia/QtMultimedia>
#include<QFileDialog>
#include<QStyle>
#include <QWidget>

namespace Ui {
class Umer;
}

class Umer : public QWidget
{
    Q_OBJECT

public:
    explicit Umer(QWidget *parent = nullptr);
    ~Umer();

private slots:
    void on_pushButton_play_clicked();

    void on_pushButton_pause_clicked();

    void on_horizontalSlider_volume_valueChanged_(int value);

private:
    Ui::Umer *ui;
};

#endif // UMER_H
