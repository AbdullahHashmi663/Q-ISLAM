#include "talha.h"
#include "ui_talha.h"
#include"ashr.h"
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>
#include <QApplication>
#include <QWidget>
QMediaPlayer *Player5=new QMediaPlayer;
Talha::Talha(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Talha)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_2->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    Player5->setVolume(ui->horizontalSlider->value());
}

Talha::~Talha()
{
    delete ui;
}

void Talha::on_pushButton_clicked()
{
    QPixmap pix("C:/Users/THE STRANGER/Desktop/project-TS/talha.jpeg");
    ui->label->setPixmap(pix.scaled(400,400,Qt::KeepAspectRatio));

    Player5->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/talha.mp3"));
    Player5->play();
    ui->label_2->setWordWrap(true);
    ui->label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->label_2->setOpenExternalLinks(true);
    ui->label_2->setTextFormat(Qt::RichText);
    ui->label_2->setText("<a href=\"https://youtu.be/nmV6K1a3P70?si=e0lbon3ugqa_vs_p\">Hazrat Talha Bin Ubaidullah RA</a>");
    ui->label_3->setTextFormat(Qt::PlainText);
    ui->label_3->setText("Ṭalḥa b. ʿUbayd Allāh (Arabic: طلحة بن عبیدالله) was one of the companions of the Prophet (s) and the early Muslims. He was the cousin of Abu Bakr b. Abi Quhafa, the First Caliph. Talha was a gallant warrior in the battles of the early days of Islam in the army of Muslims. After the demise of the Prophet (s), he cooperated with the early caliphs and helped them in their conquests. He was appointed by the Second Caliph in the Six-Member Council as a candidate for occupying the position of caliphate after him.");

}


void Talha::on_pushButton_2_clicked()
{
    Player5->stop();
}


void Talha::on_horizontalSlider_valueChanged(int value)
{
    Player5->setVolume(value);
}

