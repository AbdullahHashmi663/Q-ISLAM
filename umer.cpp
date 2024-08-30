#include "umer.h"
#include "ui_umer.h"
#include"ashr.h"
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>
#include <QApplication>
#include <QWidget>
QMediaPlayer *Player=new QMediaPlayer;
Umer::Umer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Umer)
{
    ui->setupUi(this);
    ui->pushButton_play->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    Player->setVolume(ui->horizontalSlider_volume_->value());
}

Umer::~Umer()
{
    delete ui;
}

void Umer::on_pushButton_play_clicked()
{
    QPixmap pix("C:/Users/THE STRANGER/Desktop/project-TS/download.jpeg");
    ui->label_title->setPixmap(pix.scaled(400,400,Qt::KeepAspectRatio));

    Player->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/umer.mp3"));
    Player->play();
    ui->label_data_->setWordWrap(true);
    ui->label_value->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->label_value->setOpenExternalLinks(true);
    ui->label_value->setTextFormat(Qt::RichText);
    ui->label_value->setText("<a href=\"https://www.youtube.com/watch?v=NjlWEg6W4MU\">Hazrat Omer Farooq RA</a>");
    ui->label_data_->setTextFormat(Qt::PlainText);
    ui->label_data_->setText("The life of Al Farooq Umar ibn Al-Khattab (R.A.) is a shining page of Islamic history, which outshines and supersedes all other histories. The history of all nations put together does not contain even a part of what his life contained of noble conduct, glory, sincerity, jihad, and calling others for the sake of Allah.");

}


void Umer::on_pushButton_pause_clicked()
{
    Player->stop();
}


void Umer::on_horizontalSlider_volume_valueChanged_(int value)
{
    Player->setVolume(value);
}

