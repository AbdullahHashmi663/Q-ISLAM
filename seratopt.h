#ifndef SERATOPT_H
#define SERATOPT_H
#include"pdfveiw.h"
#include <QWidget>
#include <QMainWindow>
#include<QtMultimedia/QtMultimedia>
#include<QFileDialog>
#include<QStyle>
#include"audio.h"
namespace Ui {

class SeratOPT;
}

class SeratOPT : public QWidget
{
    Q_OBJECT

public:
    explicit SeratOPT(QWidget *parent = nullptr);
    ~SeratOPT();

private slots:
    void on_tabWidget_tabCloseRequested(int index);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SeratOPT *ui;
    Pdfveiw p;
    Audio q;
};

#endif // SERATOPT_H
