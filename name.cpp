#include "name.h"
#include "ui_name.h"
#include<QMessageBox>
#include<QMediaPlayer>
#include<QMediaPlaylist>
#include <QPropertyAnimation>
QMediaPlayer* mediaPlayer=new QMediaPlayer;
Name::Name(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Name)
{
    ui->setupUi(this);
    // Create animation object
    animation = new QPropertyAnimation(ui->label, "geometry", this);
    animation->setDuration(2000); // Animation duration in milliseconds
    animation->setStartValue(ui->label->geometry());
    connect(ui->pushButton2, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
}
Name::~Name()
{
    delete ui;
}


void Name::on_pushButton_clicked()
{

   // QMessageBox::information(this,"info","this is the current value ");
    qint32 currentValue = ui->lcdNumber->value();
    currentValue++;

    if(currentValue==1){

       // QPixmap pix("C:/Users/THE STRANGER/Desktop/project-TS/islam.jpg");
        //ui->label_4->setPixmap(pix.scaled(300,300,Qt::KeepAspectRatio));
        //QPixmap pix1("C:/Users/THE STRANGER/Desktop/project-TS/muslim.jpg");
        //ui->label_2->setPixmap(pix1.scaled(300,300,Qt::KeepAspectRatio));
        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/1.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/1.mp3"));
        mediaPlayer->play();
    }
    else if(currentValue==2){


        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/2.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/2.mp3"));
        mediaPlayer->play();
    }
    else if(currentValue==3){


        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/3.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/3.mp3"));
        mediaPlayer->play();
    }
    else if(currentValue==4){


        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/4.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/4.mp3"));
        mediaPlayer->play();
    }
    else if(currentValue==5){


        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/5.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/5.mp3"));
        mediaPlayer->play();
    }
    else if(currentValue==6){


        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/6.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/6.mp3"));
        mediaPlayer->play();
    }
    else if(currentValue==7){


        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/7.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/7.mp3"));
        mediaPlayer->play();
    }
    else if(currentValue==8){


        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/8.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/8.mp3"));
        mediaPlayer->play();
    }
    else if(currentValue==9){


        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/9.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/9.mp3"));
        mediaPlayer->play();
    }
    else if(currentValue==10){


        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/10.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/10.mp3"));
        mediaPlayer->play();
    }

    else if(currentValue==11){
        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/11.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/11.mp3"));
        mediaPlayer->play();
    }

    else if(currentValue==12){
        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/12.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/12.mp3"));
        mediaPlayer->play();
    }

    else if(currentValue==13){
        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/13.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/13.mp3"));
        mediaPlayer->play();
    }

    else if(currentValue==14){
        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/14.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/14.mp3"));
        mediaPlayer->play();
    }

    else if(currentValue==15){
        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/15.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/15.mp3"));
        mediaPlayer->play();
    }

    else if(currentValue==16){
        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/16.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/16.mp3"));
        mediaPlayer->play();
    }

    else if(currentValue==17){
        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/17.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/17.mp3"));
        mediaPlayer->play();
    }

    else if(currentValue==18){
        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/18.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/18.mp3"));
        mediaPlayer->play();
    }

    else if(currentValue==19){
        ui->lcdNumber->display(currentValue);
        picture.load("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/19.jpg");
        ui->label->setPixmap(picture);
        animation->setEndValue(QRect(100, 0, picture.width()+200, picture.height()+200));
        startAnimation();
        //media section
        mediaPlayer->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/project-TS/namesfinal/19.mp3"));
        mediaPlayer->play();
    }



}
void Name::startAnimation()
{
    // Start the animation
    animation->start();
}

