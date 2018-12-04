/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Calculate;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QFrame *frame;
    QLabel *ProgressiveTax;
    QFrame *frame_2;
    QLabel *StateTax;
    QFrame *frame_3;
    QLabel *Fica;
    QFrame *frame_4;
    QLabel *NetIncome;
    QLineEdit *Income;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(436, 317);
        MainWindow->setMinimumSize(QSize(400, 300));
        MainWindow->setMaximumSize(QSize(600, 450));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(11, 21, 141, 20));
        QFont font;
        font.setPointSize(8);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 20, 41, 20));
        Calculate = new QPushButton(centralWidget);
        Calculate->setObjectName(QStringLiteral("Calculate"));
        Calculate->setGeometry(QRect(330, 20, 101, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 0, 171, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 60, 141, 21));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 90, 141, 20));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 119, 141, 21));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 150, 141, 20));
        label_7->setLayoutDirection(Qt::LeftToRight);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(160, 60, 121, 21));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        ProgressiveTax = new QLabel(frame);
        ProgressiveTax->setObjectName(QStringLiteral("ProgressiveTax"));
        ProgressiveTax->setGeometry(QRect(0, 0, 121, 21));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(160, 90, 121, 21));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Sunken);
        StateTax = new QLabel(frame_2);
        StateTax->setObjectName(QStringLiteral("StateTax"));
        StateTax->setGeometry(QRect(0, 0, 121, 21));
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(160, 120, 121, 21));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Sunken);
        Fica = new QLabel(frame_3);
        Fica->setObjectName(QStringLiteral("Fica"));
        Fica->setGeometry(QRect(0, 0, 121, 21));
        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(160, 150, 121, 21));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Sunken);
        NetIncome = new QLabel(frame_4);
        NetIncome->setObjectName(QStringLiteral("NetIncome"));
        NetIncome->setGeometry(QRect(0, 0, 121, 21));
        Income = new QLineEdit(centralWidget);
        Income->setObjectName(QStringLiteral("Income"));
        Income->setGeometry(QRect(160, 20, 121, 22));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 436, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Enter Your Income:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", " USD", nullptr));
        Calculate->setText(QApplication::translate("MainWindow", "Calculate Tax", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Income Tax Calculator", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Progressive Tax:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "State Tax", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "FICA:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Net Income:", nullptr));
        ProgressiveTax->setText(QApplication::translate("MainWindow", "Awaiting income", nullptr));
        StateTax->setText(QApplication::translate("MainWindow", "Awaiting income", nullptr));
        Fica->setText(QApplication::translate("MainWindow", "Awaiting income", nullptr));
        NetIncome->setText(QApplication::translate("MainWindow", "Awaiting income", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
