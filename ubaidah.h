#ifndef UBAIDAH_H
#define UBAIDAH_H
#include <QWidget>
#include <QMainWindow>
#include<QtMultimedia/QtMultimedia>
#include<QFileDialog>
#include<QStyle>
namespace Ui {
class Ubaidah;
}

class Ubaidah : public QWidget
{
    Q_OBJECT

public:
    explicit Ubaidah(QWidget *parent = nullptr);
    ~Ubaidah();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::Ubaidah *ui;
};

#endif // UBAIDAH_H
