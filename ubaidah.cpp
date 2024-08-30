#include "ubaidah.h"
#include "ui_ubaidah.h"
#include"ashr.h"
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>
#include <QApplication>
#include <QWidget>
QMediaPlayer *Player4=new QMediaPlayer;
Ubaidah::Ubaidah(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Ubaidah)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_2->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    Player4->setVolume(ui->horizontalSlider->value());
}

Ubaidah::~Ubaidah()
{
    delete ui;
}

void Ubaidah::on_pushButton_clicked()
{
    QPixmap pix("C:/Users/THE STRANGER/Desktop/project-TS/download.jpeg");
    ui->label->setPixmap(pix.scaled(400,400,Qt::KeepAspectRatio));

    Player4->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/usman.mp3"));
    Player4->play();
    ui->label_2->setWordWrap(true);
    ui->label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->label_2->setOpenExternalLinks(true);
    ui->label_2->setTextFormat(Qt::RichText);
    ui->label_2->setText("<a href=\"https://www.youtube.com/watch?v=vvI5LKq9Cqo\">Hazrat Usman Ghani RA</a>");
    ui->label_3->setTextFormat(Qt::PlainText);
    ui->label_3->setText("Uthman ibn Affan ibn Abi al-As (Arabic: عُثْمَانُ بْنُ عَفَّان بْنُ أَبِي الْعَاصِ, romanized: ʿUthmān ibnʿAffān ibn Abī al-ʿĀṣ; c. 573 or 576 – 17 June 656) was the third Rashidun caliph, ruling from 644 until his assassination in 656. Uthman, a second cousin, son-in-law, and notable companion of the Islamic prophet Muhammad, played a major role in early Islamic history. During his reign as caliph, he was known for ordering the official compilation of the standardized version of the Quran that is still being used today.");

}


void Ubaidah::on_pushButton_2_clicked()
{
    Player4->stop();
}



void Ubaidah::on_horizontalSlider_valueChanged(int value)
{
    Player4->setVolume(value);
}

