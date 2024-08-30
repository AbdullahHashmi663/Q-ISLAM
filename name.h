#ifndef NAME_H
#define NAME_H

#include <QWidget>
#include <QMainWindow>
#include <QPropertyAnimation>
namespace Ui {
class Name;
}

class Name : public QWidget
{
    Q_OBJECT

public:
    explicit Name(QWidget *parent = nullptr);
    ~Name();

private slots:
    void on_pushButton_clicked();
    void startAnimation();


private:
    Ui::Name *ui;
    QPropertyAnimation *animation;
    QPixmap picture;

};

#endif // NAME_H
