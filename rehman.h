#ifndef REHMAN_H
#define REHMAN_H

#include <QWidget>

#include <QMainWindow>
#include<QtMultimedia/QtMultimedia>
#include<QFileDialog>
#include<QStyle>
namespace Ui {
class Rehman;
}

class Rehman : public QWidget
{
    Q_OBJECT

public:
    explicit Rehman(QWidget *parent = nullptr);
    ~Rehman();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::Rehman *ui;
};

#endif // REHMAN_H
