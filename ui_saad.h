/********************************************************************************
** Form generated from reading UI file 'saad.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAAD_H
#define UI_SAAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Saad
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label12;
    QLabel *label123;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSlider *horizontalSlider;
    QLabel *label1234;

    void setupUi(QWidget *Saad)
    {
        if (Saad->objectName().isEmpty())
            Saad->setObjectName("Saad");
        Saad->resize(482, 273);
        Saad->setStyleSheet(QString::fromUtf8("background-image: url(:/res/cover2.jpeg);"));
        gridLayout = new QGridLayout(Saad);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label12 = new QLabel(Saad);
        label12->setObjectName("label12");
        label12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe Print\";"));
        label12->setAlignment(Qt::AlignCenter);
        label12->setWordWrap(true);

        horizontalLayout->addWidget(label12);

        label123 = new QLabel(Saad);
        label123->setObjectName("label123");
        label123->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"font: 24pt \"Wide Latin\";"));
        label123->setAlignment(Qt::AlignCenter);
        label123->setWordWrap(true);

        horizontalLayout->addWidget(label123);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 3);

        pushButton = new QPushButton(Saad);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 155, 115);\n"
"color: rgb(170, 159, 0);"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(Saad);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 155, 115);\n"
"color: rgb(170, 159, 0);"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        horizontalSlider = new QSlider(Saad);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 1, 2, 1, 1);

        label1234 = new QLabel(Saad);
        label1234->setObjectName("label1234");
        label1234->setStyleSheet(QString::fromUtf8("background-image: url(:/res/bk1.png);\n"
"\n"
"font: 600 italic 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label1234->setAlignment(Qt::AlignCenter);
        label1234->setWordWrap(true);

        gridLayout->addWidget(label1234, 2, 0, 1, 3);


        retranslateUi(Saad);

        QMetaObject::connectSlotsByName(Saad);
    } // setupUi

    void retranslateUi(QWidget *Saad)
    {
        Saad->setWindowTitle(QCoreApplication::translate("Saad", "Form", nullptr));
        label12->setText(QCoreApplication::translate("Saad", "Hazrat Saad ibn Zayd", nullptr));
        label123->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label1234->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Saad: public Ui_Saad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAAD_H
