#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"form.h"
#include"name.h"
#include"ashr.h"
#include"option.h"
#include"quran.h"
#include"seratopt.h"
#include"QWidget"
#include"QTabWidget"
#include"QApplication"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->tabWidget->addTab(new Form(),QString("HADEES").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);

}


void MainWindow::on_pushButton_5_clicked()
{
   // ui->tabWidget->addTab(new Name(),QString("Allah Names").arg(ui->tabWidget->count()+1));
   // ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
    n.show();
}


void MainWindow::on_pushButton_9_clicked()
{
    ui->tabWidget->addTab(new Ashr(),QString("10BlessedCompanions").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->tabWidget->addTab(new Quran(),QString("Quran").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->tabWidget->addTab(new SeratOPT(),QString("Quran").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
}

