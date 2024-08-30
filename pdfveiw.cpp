#include "pdfveiw.h"
#include "ui_pdfveiw.h"
#include"QFile"
#include"QTextStream"
#include"QMessageBox"
Pdfveiw::Pdfveiw(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Pdfveiw)
{
    ui->setupUi(this);
}

Pdfveiw::~Pdfveiw()
{
    delete ui;
}

void Pdfveiw::on_pushButton_clicked()
{
    QFile file("C:\\Users\\THE STRANGER\\Desktop\\project-TS\\Seerat.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}

