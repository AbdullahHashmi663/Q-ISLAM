/********************************************************************************
** Form generated from reading UI file 'name.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAME_H
#define UI_NAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Name
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *pushButton2;
    QLCDNumber *lcdNumber;

    void setupUi(QWidget *Name)
    {
        if (Name->objectName().isEmpty())
            Name->setObjectName("Name");
        Name->resize(408, 332);
        Name->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        gridLayout_2 = new QGridLayout(Name);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(Name);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton2 = new QPushButton(Name);
        pushButton2->setObjectName("pushButton2");
        pushButton2->setMinimumSize(QSize(95, 50));
        pushButton2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Sitka Heading\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/res/cover1.jpeg);"));

        gridLayout->addWidget(pushButton2, 0, 0, 1, 1);

        lcdNumber = new QLCDNumber(Name);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-image: url(:/res/cover1.jpeg);"));

        gridLayout->addWidget(lcdNumber, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);


        retranslateUi(Name);

        QMetaObject::connectSlotsByName(Name);
    } // setupUi

    void retranslateUi(QWidget *Name)
    {
        Name->setWindowTitle(QCoreApplication::translate("Name", "Form", nullptr));
        label->setText(QString());
        pushButton2->setText(QCoreApplication::translate("Name", "PUSH", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Name: public Ui_Name {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAME_H
