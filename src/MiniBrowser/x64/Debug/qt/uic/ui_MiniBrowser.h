/********************************************************************************
** Form generated from reading UI file 'MiniBrowser.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINIBROWSER_H
#define UI_MINIBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MiniBrowserClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MiniBrowserClass)
    {
        if (MiniBrowserClass->objectName().isEmpty())
            MiniBrowserClass->setObjectName("MiniBrowserClass");
        MiniBrowserClass->resize(600, 400);
        menuBar = new QMenuBar(MiniBrowserClass);
        menuBar->setObjectName("menuBar");
        MiniBrowserClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MiniBrowserClass);
        mainToolBar->setObjectName("mainToolBar");
        MiniBrowserClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MiniBrowserClass);
        centralWidget->setObjectName("centralWidget");
        MiniBrowserClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MiniBrowserClass);
        statusBar->setObjectName("statusBar");
        MiniBrowserClass->setStatusBar(statusBar);

        retranslateUi(MiniBrowserClass);

        QMetaObject::connectSlotsByName(MiniBrowserClass);
    } // setupUi

    void retranslateUi(QMainWindow *MiniBrowserClass)
    {
        MiniBrowserClass->setWindowTitle(QCoreApplication::translate("MiniBrowserClass", "MiniBrowser", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MiniBrowserClass: public Ui_MiniBrowserClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINIBROWSER_H
