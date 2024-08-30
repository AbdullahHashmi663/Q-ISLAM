/********************************************************************************
** Form generated from reading UI file 'zubair.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZUBAIR_H
#define UI_ZUBAIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Zubair
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSlider *horizontalSlider;
    QLabel *label_3;

    void setupUi(QWidget *Zubair)
    {
        if (Zubair->objectName().isEmpty())
            Zubair->setObjectName("Zubair");
        Zubair->resize(400, 300);
        Zubair->setStyleSheet(QString::fromUtf8("background-image: url(:/res/cover2.jpeg);"));
        gridLayout = new QGridLayout(Zubair);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(Zubair);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe Print\";"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(Zubair);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"font: 24pt \"Wide Latin\";"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        horizontalLayout->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 3);

        pushButton = new QPushButton(Zubair);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 155, 115);\n"
"color: rgb(170, 159, 0);"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(Zubair);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 155, 115);\n"
"color: rgb(170, 159, 0);"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        horizontalSlider = new QSlider(Zubair);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 1, 2, 1, 1);

        label_3 = new QLabel(Zubair);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/res/bk1.png);\n"
"\n"
"font: 600 italic 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 2, 0, 1, 3);


        retranslateUi(Zubair);

        QMetaObject::connectSlotsByName(Zubair);
    } // setupUi

    void retranslateUi(QWidget *Zubair)
    {
        Zubair->setWindowTitle(QCoreApplication::translate("Zubair", "Form", nullptr));
        label->setText(QCoreApplication::translate("Zubair", "Hazrat Zubair ibn al-Awwaam RA", nullptr));
        label_2->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Zubair: public Ui_Zubair {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZUBAIR_H
