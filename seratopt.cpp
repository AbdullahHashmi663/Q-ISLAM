#include "seratopt.h"
#include "ui_seratopt.h"
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>
#include <QApplication>
#include <QWidget>
SeratOPT::SeratOPT(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SeratOPT)
{
    ui->setupUi(this);
}

SeratOPT::~SeratOPT()
{
    delete ui;
}

void SeratOPT::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}


void SeratOPT::on_pushButton_clicked()
{
    p.show();
}


void SeratOPT::on_pushButton_2_clicked()
{
    q.show();
}

