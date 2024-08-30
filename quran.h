#ifndef QURAN_H
#define QURAN_H
#include <QWidget>
#include"QObject"
#include"QComboBox"
namespace Ui {
class Quran;
}

class Quran : public QWidget
{
    Q_OBJECT

public:
    explicit Quran(QWidget *parent = nullptr);
    ~Quran();

private slots:

 void on_comboBox_activated(const QString &text);

private:
    Ui::Quran *ui;
};

#endif // QURAN_H
