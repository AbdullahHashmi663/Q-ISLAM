#ifndef ASHR_H
#define ASHR_H

#include <QWidget>
#include<option.h>
namespace Ui {
class Ashr;
}

class Ashr : public QWidget
{
    Q_OBJECT

public:
    explicit Ashr(QWidget *parent = nullptr);
    ~Ashr();
    int32_t chose;
signals:

private slots:


    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_tabWidget_tabCloseRequested(int index);

private:
    Ui::Ashr *ui;
   // Option *opt;

};

#endif // ASHR_H
