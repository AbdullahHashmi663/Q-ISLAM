#include "audio.h"
#include "ui_audio.h"
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>
#include <QApplication>
#include <QWidget>
QMediaPlayer *Mix=new QMediaPlayer;
Audio::Audio(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Audio)
{
    ui->setupUi(this);
    ui->pushButton_11->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_12->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    Mix->setVolume(ui->horizontalSlider->value());
    QPixmap pix("C:/Users/THE STRANGER/Desktop/project-TS/syed.jpeg");
    ui->label->setPixmap(pix.scaled(400,400,Qt::KeepAspectRatio));
}

Audio::~Audio()
{
    delete ui;
}

void Audio::on_pushButton_clicked()
{
    Mix->stop();
    Mix->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/Seerat/1.mp3"));
    Mix->play();
    ui->label->setText("Lecture #01");
}


void Audio::on_pushButton_2_clicked()
{
    Mix->stop();
    Mix->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/Seerat/2.mp3"));
    Mix->play();
    ui->label->setText("Lecture #02");
}


void Audio::on_pushButton_3_clicked()
{
    Mix->stop();
    Mix->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/Seerat/3.mp3"));
    Mix->play();
    ui->label->setText("Lecture #03");
}


void Audio::on_pushButton_4_clicked()
{
    Mix->stop();
    Mix->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/Seerat/4.mp3"));
    Mix->play();
    ui->label->setText("Lecture #04");
}


void Audio::on_pushButton_5_clicked()
{
    Mix->stop();
    Mix->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/Seerat/5.mp3"));
    Mix->play();
    ui->label->setText("Lecture #05");
}


void Audio::on_pushButton_6_clicked()
{
    Mix->stop();
    Mix->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/Seerat/6.mp3"));
    Mix->play();
    ui->label->setText("Lecture #06");
}


void Audio::on_pushButton_7_clicked()
{
    Mix->stop();
    Mix->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/Seerat/7.mp3"));
    Mix->play();
    ui->label->setText("Lecture #07");
}


void Audio::on_pushButton_8_clicked()
{
    Mix->stop();
    Mix->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/Seerat/8.mp3"));
    Mix->play();
    ui->label->setText("Lecture #08");
}


void Audio::on_pushButton_9_clicked()
{
    Mix->stop();
    Mix->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/Seerat/9.mp3"));
    Mix->play();
    ui->label->setText("Lecture #09");
}


void Audio::on_pushButton_10_clicked()
{
    Mix->stop();
    Mix->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/Seerat/10.mp3"));
    Mix->play();
    ui->label->setText("Lecture #10");
}


void Audio::on_pushButton_11_clicked()//play
{
 Mix->play();
}


void Audio::on_pushButton_12_clicked()//pause
{

    Mix->pause();
}


void Audio::on_horizontalSlider_valueChanged(int value)
{
    Mix->setVolume(value);
}

