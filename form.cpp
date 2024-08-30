#include "form.h"
#include "ui_form.h"
#include<QPixmap>
//#include"bukhari.h"
Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/THE STRANGER/Desktop/project-TS/islam.jpg");
    ui->label_pic->setPixmap(pix.scaled(400,400,Qt::KeepAspectRatio));
    QPixmap pix1("C:/Users/THE STRANGER/Desktop/project-TS/images.jpg");
    ui->bukhari->setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap pix2("C:/Users/THE STRANGER/Desktop/project-TS/muslim.jpg");
    ui->muslim->setPixmap(pix2.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap pix3("C:/Users/THE STRANGER/Desktop/project-TS/tarmizi.jpg");
    ui->tirmazi->setPixmap(pix3.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap pix4("C:/Users/THE STRANGER/Desktop/project-TS/abuddaod.jpg");
    ui->abudawood->setPixmap(pix4.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap pix5("C:/Users/THE STRANGER/Desktop/project-TS/alnasai.jpg");
    ui->nasai->setPixmap(pix5.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap pix6("C:/Users/THE STRANGER/Desktop/project-TS/ibnemajah.jpg");
    ui->maja->setPixmap(pix6.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap pix7("C:/Users/THE STRANGER/Desktop/project-TS/mishat.jpg");
    ui->mishkat->setPixmap(pix7.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap pix8("C:/Users/THE STRANGER/Desktop/project-TS/mustadrik.jpg");
    ui->mustadrak->setPixmap(pix8.scaled(100,100,Qt::KeepAspectRatio));

}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
   // ui->tabWidget->addTab(new Bukhari(),QString("Saheeh Bukhari").arg(ui->tabWidget->count()+1));
    //ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
}


void Form::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}

