#include "option.h"
#include "ui_option.h"
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>
#include <QApplication>
#include <QWidget>
QMediaPlayer *M_Player=new QMediaPlayer;
Option::Option(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Option)
{
    ui->setupUi(this);
    //QPixmap pix("C:/Users/THE STRANGER/Desktop/project-TS/emam.jpeg");
    //ui->label->setPixmap(pix.scaled(400,500,Qt::KeepAspectRatio));
    ui->pushButtonplay->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButtonpause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    M_Player->setVolume(ui->horizontalSlider_volume->value());
}

Option::~Option()
{
    delete ui;
}



void Option::on_pushButtonplay_clicked()
{
    QPixmap pix("C:/Users/THE STRANGER/Desktop/project-TS/abubakar.png");
    ui->labeltitle->setPixmap(pix.scaled(400,400,Qt::KeepAspectRatio));

        M_Player->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/abubakar.mp3"));
        M_Player->play();
        ui->label_data->setWordWrap(true);
        ui->labelvalue->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        ui->labelvalue->setOpenExternalLinks(true);
        ui->labelvalue->setTextFormat(Qt::RichText);
        ui->labelvalue->setText("<a href=\"https://www.youtube.com/watch?v=vtlpTw3hzGQ\">Hazrat Abu Bakar Siddique RA</a>");
        ui->label_data->setTextFormat(Qt::PlainText);
        ui->label_data->setText(" Hazrat (an honorary term used in Persian) Abu Bakr Siddique (Radi Allahu Anhu – May Allah be pleased with him) was the first caliph of Islam after passing away of Hazrat Muhammad (Peace Be Upon Him). He had the privilege of having multi-dimensional relationship with Holy Prophet (PBUH). He was one of the earliest converts of Islam, a close friend, an advisor, a kind neighbor (for some time in Mecca), and a relative (father in law) of the Prophet (PBUH).  He was born in Mecca in 573 CE, lived for 62 years, and passed away to the eternal abode of life in 634 CE.");
}


void Option::on_pushButtonpause_clicked()
{
    M_Player->stop();
}


void Option::on_horizontalSlider_volume_valueChanged(int value)
{
    M_Player->setVolume(value);
}


