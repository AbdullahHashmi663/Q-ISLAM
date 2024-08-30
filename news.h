#ifndef NEWS_H
#define NEWS_H

#include <QWidget>
#include <QMainWindow>
#include<QtMultimedia/QtMultimedia>
#include<QFileDialog>
#include<QStyle>
namespace Ui {
class NewS;
}

class NewS : public QWidget
{
    Q_OBJECT

public:
    explicit NewS(QWidget *parent = nullptr);
    ~NewS();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::NewS *ui;
};

#endif // NEWS_H
