/********************************************************************************
** Form generated from reading UI file 'audio.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIO_H
#define UI_AUDIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Audio
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;

    void setupUi(QWidget *Audio)
    {
        if (Audio->objectName().isEmpty())
            Audio->setObjectName("Audio");
        Audio->resize(339, 272);
        Audio->setStyleSheet(QString::fromUtf8("background-image: url(:/res/bg.jpeg);"));
        gridLayout = new QGridLayout(Audio);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(Audio);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 900 12pt \"Segoe UI Black\";"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Audio);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(Audio);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(Audio);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(Audio);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(Audio);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(Audio);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(Audio);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(Audio);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(Audio);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_10);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(Audio);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"Snap ITC\";\n"
"color: rgb(255, 255, 255);\n"
""));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        horizontalSlider = new QSlider(Audio);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_11 = new QPushButton(Audio);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setMinimumSize(QSize(0, 30));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-image: url(:/res/bg2.jpeg);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(Audio);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setMinimumSize(QSize(0, 30));
        pushButton_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-image: url(:/res/bg2.jpeg);"));

        horizontalLayout->addWidget(pushButton_12);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);


        retranslateUi(Audio);

        QMetaObject::connectSlotsByName(Audio);
    } // setupUi

    void retranslateUi(QWidget *Audio)
    {
        Audio->setWindowTitle(QCoreApplication::translate("Audio", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Audio", "Lecture#01", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Audio", "Lecture#02", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Audio", "Lecture#03", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Audio", "Lecture#04", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Audio", "Lecture#05", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Audio", "Lecture#06", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Audio", "Lecture#07", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Audio", "Lecture#08", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Audio", "Lecture#09", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Audio", "Lecture#10", nullptr));
        label->setText(QCoreApplication::translate("Audio", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Speaker</span></p></body></html>", nullptr));
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Audio: public Ui_Audio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIO_H
