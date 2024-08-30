/********************************************************************************
** Form generated from reading UI file 'news.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWS_H
#define UI_NEWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewS
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSlider *horizontalSlider;
    QLabel *label_4;

    void setupUi(QWidget *NewS)
    {
        if (NewS->objectName().isEmpty())
            NewS->setObjectName("NewS");
        NewS->resize(400, 300);
        NewS->setStyleSheet(QString::fromUtf8("background-image: url(:/res/saeed.jpg);"));
        gridLayout = new QGridLayout(NewS);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(NewS);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(138, 138, 0);\n"
"font: 700 12pt \"Segoe Print\";"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(NewS);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 600 italic 22pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
""));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 3);

        pushButton = new QPushButton(NewS);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(30, 25));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(NewS);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(30, 25));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        horizontalSlider = new QSlider(NewS);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 1, 2, 1, 1);

        label_4 = new QLabel(NewS);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 600 italic 22pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/res/saed.jpeg);\n"
""));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 2, 0, 1, 3);


        retranslateUi(NewS);

        QMetaObject::connectSlotsByName(NewS);
    } // setupUi

    void retranslateUi(QWidget *NewS)
    {
        NewS->setWindowTitle(QCoreApplication::translate("NewS", "Form", nullptr));
        label->setText(QCoreApplication::translate("NewS", "Hazrat Saaed IBN Zaid RA", nullptr));
        label_2->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewS: public Ui_NewS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWS_H
