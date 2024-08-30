#ifndef TALHA_H
#define TALHA_H
#include <QWidget>
#include <QMainWindow>
#include<QtMultimedia/QtMultimedia>
#include<QFileDialog>
#include<QStyle>
namespace Ui {
class Talha;
}

class Talha : public QWidget
{
    Q_OBJECT

public:
    explicit Talha(QWidget *parent = nullptr);
    ~Talha();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::Talha *ui;
};

#endif // TALHA_H
