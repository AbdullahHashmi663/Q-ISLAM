/********************************************************************************
** Form generated from reading UI file 'umer.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UMER_H
#define UI_UMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Umer
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_title;
    QLabel *label_value;
    QPushButton *pushButton_play;
    QPushButton *pushButton_pause;
    QSlider *horizontalSlider_volume_;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_data_;

    void setupUi(QWidget *Umer)
    {
        if (Umer->objectName().isEmpty())
            Umer->setObjectName("Umer");
        Umer->resize(490, 300);
        Umer->setStyleSheet(QString::fromUtf8("background-image: url(:/res/umer1.jpg);"));
        gridLayout_3 = new QGridLayout(Umer);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_title = new QLabel(Umer);
        label_title->setObjectName("label_title");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        label_title->setFont(font);
        label_title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe Print\";"));
        label_title->setFrameShadow(QFrame::Raised);
        label_title->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_title, 0, 0, 1, 1);

        label_value = new QLabel(Umer);
        label_value->setObjectName("label_value");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Wide Latin")});
        font1.setPointSize(24);
        font1.setBold(false);
        font1.setItalic(false);
        label_value->setFont(font1);
        label_value->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"font: 24pt \"Wide Latin\";"));
        label_value->setFrameShadow(QFrame::Raised);
        label_value->setAlignment(Qt::AlignCenter);
        label_value->setWordWrap(true);

        gridLayout_2->addWidget(label_value, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 3);

        pushButton_play = new QPushButton(Umer);
        pushButton_play->setObjectName("pushButton_play");
        pushButton_play->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 155, 115);\n"
"color: rgb(170, 159, 0);"));

        gridLayout_3->addWidget(pushButton_play, 1, 0, 1, 1);

        pushButton_pause = new QPushButton(Umer);
        pushButton_pause->setObjectName("pushButton_pause");
        pushButton_pause->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 155, 115);\n"
"color: rgb(170, 159, 0);"));

        gridLayout_3->addWidget(pushButton_pause, 1, 1, 1, 1);

        horizontalSlider_volume_ = new QSlider(Umer);
        horizontalSlider_volume_->setObjectName("horizontalSlider_volume_");
        horizontalSlider_volume_->setMinimum(1);
        horizontalSlider_volume_->setMaximum(100);
        horizontalSlider_volume_->setValue(10);
        horizontalSlider_volume_->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_volume_, 1, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(Umer);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setStyleSheet(QString::fromUtf8("font: 900 italic 9pt \"Segoe UI\";"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_data_ = new QLabel(Umer);
        label_data_->setObjectName("label_data_");
        label_data_->setStyleSheet(QString::fromUtf8("background-image: url(:/res/umer.jpeg);\n"
"\n"
"font: 600 italic 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_data_->setWordWrap(true);

        gridLayout->addWidget(label_data_, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 3);


        retranslateUi(Umer);

        QMetaObject::connectSlotsByName(Umer);
    } // setupUi

    void retranslateUi(QWidget *Umer)
    {
        Umer->setWindowTitle(QCoreApplication::translate("Umer", "Form", nullptr));
        label_title->setText(QCoreApplication::translate("Umer", "Second Khalifa", nullptr));
        label_value->setText(QString());
        pushButton_play->setText(QString());
        pushButton_pause->setText(QString());
        label_3->setText(QCoreApplication::translate("Umer", "Speaker: Engineer Muhammad Ali Mirza", nullptr));
        label_data_->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Umer: public Ui_Umer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UMER_H
