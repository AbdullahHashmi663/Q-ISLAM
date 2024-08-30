#include "saad.h"
#include "ui_saad.h"
#include"ashr.h"
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>
#include <QApplication>
#include <QWidget>
QMediaPlayer *Player9=new QMediaPlayer;
Saad::Saad(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Saad)
{
    ui->setupUi(this);
    ui->setupUi(this);
    ui->pushButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_2->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    Player9->setVolume(ui->horizontalSlider->value());
}

Saad::~Saad()
{
    delete ui;
}

void Saad::on_pushButton_clicked()
{
    QPixmap pix("C:/Users/THE STRANGER/Desktop/project-TS/saad.jpeg");
    ui->label12->setPixmap(pix.scaled(400,400,Qt::KeepAspectRatio));
    Player9->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/saad.mp3"));
    Player9->play();
    ui->label123->setWordWrap(true);
    ui->label123->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->label123->setOpenExternalLinks(true);
    ui->label123->setTextFormat(Qt::RichText);
    ui->label123->setText("<a href=\"https://youtu.be/WJTAPlFR7zI?si=pXlT7Z3pRRiMc2U-\">Hazrat Saad Ibn Zayd RA</a>");
    ui->label1234->setTextFormat(Qt::PlainText);
    ui->label1234->setText("Sayyiduna Sa’eed رضي الله عنه , the son of Zayd Ibn Amr was an extremely brave and courageous companion of our beloved Nabi ﷺ.● He was married to Fatimah bint al-Khattab who was the sister of Sayyiduna Umar Ibn al-Khattab رضي الله عنه. They both accepted Islam in the very early days of Islam. They were the 12th and 13th persons to accept Islam, and they were the means of Umar Ibn al-Khattab accepting Islam.");

}
void Saad::on_pushButton_2_clicked()
{
    Player9->stop();
}


void Saad::on_horizontalSlider_valueChanged(int value)
{
Player9->setVolume(value);
}

