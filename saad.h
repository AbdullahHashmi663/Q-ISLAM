#ifndef SAAD_H
#define SAAD_H

#include <QWidget>
#include <QMainWindow>
#include<QtMultimedia/QtMultimedia>
#include<QFileDialog>
#include<QStyle>
namespace Ui {
class Saad;
}

class Saad : public QWidget
{
    Q_OBJECT

public:
    explicit Saad(QWidget *parent = nullptr);
    ~Saad();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::Saad *ui;
};

#endif // SAAD_H
