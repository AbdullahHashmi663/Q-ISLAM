#ifndef USMAN_H
#define USMAN_H

#include <QWidget>
#include <QMainWindow>
#include<QtMultimedia/QtMultimedia>
#include<QFileDialog>
#include<QStyle>
namespace Ui {
class Usman;
}

class Usman : public QWidget
{
    Q_OBJECT

public:
    explicit Usman(QWidget *parent = nullptr);
    ~Usman();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::Usman *ui;
};

#endif // USMAN_H
