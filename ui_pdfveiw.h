/********************************************************************************
** Form generated from reading UI file 'pdfveiw.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDFVEIW_H
#define UI_PDFVEIW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pdfveiw
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *Pdfveiw)
    {
        if (Pdfveiw->objectName().isEmpty())
            Pdfveiw->setObjectName("Pdfveiw");
        Pdfveiw->resize(650, 700);
        Pdfveiw->setMinimumSize(QSize(650, 700));
        Pdfveiw->setStyleSheet(QString::fromUtf8("background-image: url(:/res/bg3.png);\n"
"border-image: url(:/res/bg5.png);"));
        gridLayout = new QGridLayout(Pdfveiw);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(Pdfveiw);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 50));
        pushButton->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:reflect, x1:0.539773, y1:0.454545, x2:0.517, y2:1, stop:0 rgba(30, 48, 115, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 26pt \"Script\";"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(Pdfveiw);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setStyleSheet(QString::fromUtf8("background-image: url(:/res/bg5.png);\n"
"font: 24pt \"Segoe Script\";\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(textBrowser, 1, 0, 1, 1);


        retranslateUi(Pdfveiw);

        QMetaObject::connectSlotsByName(Pdfveiw);
    } // setupUi

    void retranslateUi(QWidget *Pdfveiw)
    {
        Pdfveiw->setWindowTitle(QCoreApplication::translate("Pdfveiw", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Pdfveiw", "Open Text File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pdfveiw: public Ui_Pdfveiw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDFVEIW_H
