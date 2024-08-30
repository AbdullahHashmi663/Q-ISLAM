#include "ashr.h"
#include "ui_ashr.h"
#include"option.h"
#include"umer.h"
#include"usman.h"
#include"ali.h"
#include"ubaidah.h"
#include"talha.h"
#include"zubair.h"
#include"rehman.h"
#include"waqas.h"
#include"news.h"
Ashr::Ashr(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Ashr)
{
    ui->setupUi(this);
   // QPixmap pix("C:/Users/THE STRANGER/Desktop/project-TS/ashra.jpeg");
    //ui->label->setPixmap(pix.scaled(800,800,Qt::KeepAspectRatio));
}
Ashr::~Ashr()
{
    delete ui;
}

void Ashr::on_pushButton_clicked()
{
    ui->tabWidget->addTab(new Option(),QString("Speaker").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
    chose=1;
}


void Ashr::on_pushButton_3_clicked()
{

    ui->tabWidget->addTab(new Usman(),QString("Speaker").arg(ui->tabWidget->count()+1));
   ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
     chose=3;
}


void Ashr::on_pushButton_2_clicked()
{
    ui->tabWidget->addTab(new Umer(),QString("Speaker").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
     chose=2;
}


void Ashr::on_pushButton_4_clicked()
{
    ui->tabWidget->addTab(new Ali(),QString("Speaker").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
     chose=4;
}


void Ashr::on_pushButton_5_clicked()
{
    ui->tabWidget->addTab(new Talha(),QString("Speaker").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
     chose=5;
}


void Ashr::on_pushButton_6_clicked()
{
    ui->tabWidget->addTab(new Zubair(),QString("Speaker").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
     chose=6;
}


void Ashr::on_pushButton_7_clicked()
{
    ui->tabWidget->addTab(new Rehman(),QString("Speaker").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
     chose=7;
}


void Ashr::on_pushButton_8_clicked()
{
    ui->tabWidget->addTab(new Waqas(),QString("Speaker").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
     chose=8;
}


void Ashr::on_pushButton_9_clicked()
{
    ui->tabWidget->addTab(new NewS(),QString("Speaker").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
     chose=9;
}


void Ashr::on_pushButton_10_clicked()
{
    ui->tabWidget->addTab(new Ubaidah(),QString("Speaker").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
     chose=10;
}


void Ashr::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}

