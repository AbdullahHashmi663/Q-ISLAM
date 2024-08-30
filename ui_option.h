/********************************************************************************
** Form generated from reading UI file 'option.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTION_H
#define UI_OPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Option
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *labeltitle;
    QLabel *labelvalue;
    QPushButton *pushButtonplay;
    QPushButton *pushButtonpause;
    QSlider *horizontalSlider_volume;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_data;

    void setupUi(QWidget *Option)
    {
        if (Option->objectName().isEmpty())
            Option->setObjectName("Option");
        Option->resize(469, 274);
        Option->setStyleSheet(QString::fromUtf8("background-image: url(:/res/cover2.jpeg);"));
        gridLayout_3 = new QGridLayout(Option);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        labeltitle = new QLabel(Option);
        labeltitle->setObjectName("labeltitle");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        labeltitle->setFont(font);
        labeltitle->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe Print\";"));
        labeltitle->setFrameShadow(QFrame::Raised);
        labeltitle->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labeltitle, 0, 0, 1, 1);

        labelvalue = new QLabel(Option);
        labelvalue->setObjectName("labelvalue");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Wide Latin")});
        font1.setPointSize(24);
        font1.setBold(false);
        font1.setItalic(false);
        labelvalue->setFont(font1);
        labelvalue->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"font: 24pt \"Wide Latin\";"));
        labelvalue->setFrameShadow(QFrame::Raised);
        labelvalue->setAlignment(Qt::AlignCenter);
        labelvalue->setWordWrap(true);

        gridLayout_2->addWidget(labelvalue, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 3);

        pushButtonplay = new QPushButton(Option);
        pushButtonplay->setObjectName("pushButtonplay");
        pushButtonplay->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 155, 115);\n"
"color: rgb(170, 159, 0);"));

        gridLayout_3->addWidget(pushButtonplay, 1, 0, 1, 1);

        pushButtonpause = new QPushButton(Option);
        pushButtonpause->setObjectName("pushButtonpause");
        pushButtonpause->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 155, 115);\n"
"color: rgb(170, 159, 0);"));

        gridLayout_3->addWidget(pushButtonpause, 1, 1, 1, 1);

        horizontalSlider_volume = new QSlider(Option);
        horizontalSlider_volume->setObjectName("horizontalSlider_volume");
        horizontalSlider_volume->setMinimum(1);
        horizontalSlider_volume->setMaximum(100);
        horizontalSlider_volume->setValue(10);
        horizontalSlider_volume->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_volume, 1, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(Option);
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

        label_data = new QLabel(Option);
        label_data->setObjectName("label_data");
        label_data->setStyleSheet(QString::fromUtf8("background-image: url(:/res/bk1.png);\n"
"\n"
"font: 600 italic 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_data->setWordWrap(true);

        gridLayout->addWidget(label_data, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 3);


        retranslateUi(Option);

        QMetaObject::connectSlotsByName(Option);
    } // setupUi

    void retranslateUi(QWidget *Option)
    {
        Option->setWindowTitle(QCoreApplication::translate("Option", "Form", nullptr));
        labeltitle->setText(QCoreApplication::translate("Option", "First Khalifa", nullptr));
        labelvalue->setText(QString());
        pushButtonplay->setText(QString());
        pushButtonpause->setText(QString());
        label_3->setText(QCoreApplication::translate("Option", "Speaker: Engineer Muhammad Ali Mirza", nullptr));
        label_data->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Option: public Ui_Option {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTION_H
