#ifndef AUDIO_H
#define AUDIO_H

#include <QWidget>
#include <QMainWindow>
#include<QtMultimedia/QtMultimedia>
#include<QFileDialog>
#include<QStyle>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>
#include <QApplication>
#include <QWidget>

namespace Ui {
class Audio;
}

class Audio : public QWidget
{
    Q_OBJECT

public:
    explicit Audio(QWidget *parent = nullptr);
    ~Audio();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::Audio *ui;
};

#endif // AUDIO_H
