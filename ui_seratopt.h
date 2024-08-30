/********************************************************************************
** Form generated from reading UI file 'seratopt.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERATOPT_H
#define UI_SERATOPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeratOPT
{
public:
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *tab_2;

    void setupUi(QWidget *SeratOPT)
    {
        if (SeratOPT->objectName().isEmpty())
            SeratOPT->setObjectName("SeratOPT");
        SeratOPT->resize(501, 500);
        SeratOPT->setMinimumSize(QSize(450, 500));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        SeratOPT->setFont(font);
        SeratOPT->setStyleSheet(QString::fromUtf8("background-image: url(:/res/m1.jpg);\n"
""));
        gridLayout_2 = new QGridLayout(SeratOPT);
        gridLayout_2->setObjectName("gridLayout_2");
        tabWidget = new QTabWidget(SeratOPT);
        tabWidget->setObjectName("tabWidget");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell Condensed")});
        font1.setBold(true);
        tabWidget->setFont(font1);
        tabWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/res/m1.jpg);\n"
"background-color: rgb(255, 255, 255);"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName("gridLayout");
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 30pt \"Wide Latin\";\n"
"color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(0, 118, 173, 255), stop:1 rgb(149, 149, 111));\n"
""));
        pushButton_2->setFlat(false);

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("font: 30pt \"Wide Latin\";\n"
"color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(0, 118, 173, 255), stop:1 rgb(149, 149, 111));\n"
""));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(SeratOPT);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SeratOPT);
    } // setupUi

    void retranslateUi(QWidget *SeratOPT)
    {
        SeratOPT->setWindowTitle(QCoreApplication::translate("SeratOPT", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SeratOPT", "AUDIO", nullptr));
        pushButton->setText(QCoreApplication::translate("SeratOPT", "TEXT", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("SeratOPT", "Method", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());
    } // retranslateUi

};

namespace Ui {
    class SeratOPT: public Ui_SeratOPT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERATOPT_H
