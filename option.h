#ifndef OPTION_H
#define OPTION_H
#include <QWidget>
#include <QMainWindow>
#include<QtMultimedia/QtMultimedia>
#include<QFileDialog>
#include<QStyle>
namespace Ui {
class Option;
}

class Option : public QWidget
{
    Q_OBJECT

public:
    explicit Option(QWidget *parent = nullptr);
    ~Option();

private slots:

    void on_pushButtonplay_clicked();

    void on_pushButtonpause_clicked();

    void on_horizontalSlider_volume_valueChanged(int value);

private:
    Ui::Option *ui;


};

#endif // OPTION_H
