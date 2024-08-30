#include "rehman.h"
#include "ui_rehman.h"
#include"ashr.h"
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>
#include <QApplication>
#include <QWidget>
QMediaPlayer *Player7=new QMediaPlayer;
Rehman::Rehman(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Rehman)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_2->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    Player7->setVolume(ui->horizontalSlider->value());
}

Rehman::~Rehman()
{
    delete ui;
}

void Rehman::on_pushButton_clicked()
{
    QPixmap pix("C:/Users/THE STRANGER/Desktop/project-TS/rehman.jpeg");
    ui->label->setPixmap(pix.scaled(400,400,Qt::KeepAspectRatio));

    Player7->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/rehman.mp3"));
    Player7->play();
    ui->label_2->setWordWrap(true);
    ui->label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->label_2->setOpenExternalLinks(true);
    ui->label_2->setTextFormat(Qt::RichText);
    ui->label_2->setText("<a href=\"https://youtu.be/vm_jJnGQUNA?si=Dnhgapj6OEQr5Rjw\">Hazrat Abdul Rehman Bin Auf RA</a>");
    ui->label_3->setTextFormat(Qt::PlainText);
    ui->label_3->setText("Abdur-Rahman ibn Awf (R.A.) was one of the close companions of Prophet Mohammad (S.A.W.) and his life story is certainly one worth studying and emulating.Abdur-Rahman Ibn Awf (R.A.) was one of the first eight persons to accept Islam. He was one of the ten persons who were assured of entering Jannah (Paradise). He was one of the six persons chosen by Umar Ibn Khattab (R.A.) to form the council of Shura to choose the Caliph after his death.His name in Jahiliyyah days (days before Islam) was Abu Amr. But when he accepted Islam, the noble Prophet (S.A.W.) called him Abdur-Rahman (the servant of the Beneficent Allah).");

}


void Rehman::on_pushButton_2_clicked()
{
    Player7->stop();
}


void Rehman::on_horizontalSlider_valueChanged(int value)
{
Player7->setVolume(value);
}

