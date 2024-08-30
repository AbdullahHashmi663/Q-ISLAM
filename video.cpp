#include "video.h"
#include "ui_video.h"
#include "option.h"
Video::Video(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Video)
{
    ui->setupUi(this);
    //ui->
}

Video::~Video()
{
    delete ui;
}
/*
void Video::on_horizontalSlider_2_valueChanged(int value)//video
{

}


void Video::on_pushButton_toggled(bool checked)//seekbackward
{

}


void Video::on_pushButton_4_toggled(bool checked)//seekforward
{

}


void Video::on_pushButton_2_clicked()//playpause
{

}


void Video::on_pushButton_3_clicked()//stop
{

}


void Video::on_pushButton_5_clicked()//volume
{

}


void Video::on_horizontalSlider_valueChanged(int value)//volume
{

}
*/
