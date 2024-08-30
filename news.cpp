#include "news.h"
#include "ui_news.h"
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>
#include <QApplication>
#include <QWidget>
QMediaPlayer *M1=new QMediaPlayer;
NewS::NewS(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NewS)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_2->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    M1->setVolume(ui->horizontalSlider->value());
}

NewS::~NewS()
{
    delete ui;
}

void NewS::on_pushButton_clicked()
{
    QPixmap pix("C:/Users/THE STRANGER/Desktop/project-TS/saad.jpeg");
    ui->label->setPixmap(pix.scaled(400,400,Qt::KeepAspectRatio));
    M1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/saad.mp3"));
    M1->play();
    ui->label_2->setWordWrap(true);
    ui->label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->label_2->setOpenExternalLinks(true);
    ui->label_2->setTextFormat(Qt::RichText);
    ui->label_2->setText("<a href=\"https://youtu.be/WJTAPlFR7zI?si=pXlT7Z3pRRiMc2U-\">Hazrat Saad Ibn Zayd RA</a>");
    ui->label_4->setTextFormat(Qt::PlainText);
    ui->label_4->setText("Sayyiduna Sa’eed رضي الله عنه , the son of Zayd Ibn Amr was an extremely brave and courageous companion of our beloved Nabi ﷺ.● He was married to Fatimah bint al-Khattab who was the sister of Sayyiduna Umar Ibn al-Khattab رضي الله عنه. They both accepted Islam in the very early days of Islam. They were the 12th and 13th persons to accept Islam, and they were the means of Umar Ibn al-Khattab accepting Islam.");

}


void NewS::on_pushButton_2_clicked()
{
    M1->stop();
}


void NewS::on_horizontalSlider_valueChanged(int value)
{
M1->setVolume(value);
}

