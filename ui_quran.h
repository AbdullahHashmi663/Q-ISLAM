/********************************************************************************
** Form generated from reading UI file 'quran.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QURAN_H
#define UI_QURAN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Quran
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QTextBrowser *textBrowser_2;

    void setupUi(QWidget *Quran)
    {
        if (Quran->objectName().isEmpty())
            Quran->setObjectName("Quran");
        Quran->resize(600, 700);
        Quran->setMinimumSize(QSize(600, 700));
        Quran->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("applications-multimedia")));
        Quran->setWindowIcon(icon);
        Quran->setStyleSheet(QString::fromUtf8("background-image: url(:/res/quran3.jpg);"));
        gridLayout = new QGridLayout(Quran);
        gridLayout->setObjectName("gridLayout");
        textBrowser = new QTextBrowser(Quran);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"background-image: url(:/res/bg3.png);\n"
"font: italic 12pt \"Sitka\";\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(textBrowser, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(Quran);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 italic 36pt \"Segoe UI\";\n"
"\n"
"color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.880682 rgba(255, 255, 255, 255), stop:0.960227 rgba(0, 0, 72, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-image: url(:/res/bg2.jpeg);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        comboBox = new QComboBox(Quran);
        comboBox->setObjectName("comboBox");
        comboBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(comboBox);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        textBrowser_2 = new QTextBrowser(Quran);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-image: url(:/res/bg5.png);\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.8125 rgba(20, 90, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 12pt \"DejaVu Sans\";"));

        gridLayout->addWidget(textBrowser_2, 1, 0, 1, 1);


        retranslateUi(Quran);

        QMetaObject::connectSlotsByName(Quran);
    } // setupUi

    void retranslateUi(QWidget *Quran)
    {
        Quran->setWindowTitle(QCoreApplication::translate("Quran", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Quran", "\330\247\331\204\331\202\330\261\330\242\331\206 \330\247\331\204\331\203\330\261\331\212\331\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Quran: public Ui_Quran {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QURAN_H
