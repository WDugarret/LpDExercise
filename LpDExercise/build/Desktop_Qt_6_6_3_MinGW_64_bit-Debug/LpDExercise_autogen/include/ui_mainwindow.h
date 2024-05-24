/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *m_UserInGroupBox;
    QTextEdit *m_UserInEditText;
    QPushButton *m_AddInListButton;
    QGroupBox *m_ProcessGroupBox;
    QPushButton *m_SortListButton;
    QListWidget *m_SortedListWidget;
    QListWidget *m_InputListWidget;
    QPushButton *m_ClearInputListButton;
    QGroupBox *m_SortOrderGroupBox;
    QRadioButton *m_AscRadioButton;
    QRadioButton *m_DescRadioButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        m_UserInGroupBox = new QGroupBox(centralwidget);
        m_UserInGroupBox->setObjectName("m_UserInGroupBox");
        m_UserInGroupBox->setGeometry(QRect(100, 50, 301, 91));
        m_UserInEditText = new QTextEdit(m_UserInGroupBox);
        m_UserInEditText->setObjectName("m_UserInEditText");
        m_UserInEditText->setGeometry(QRect(30, 30, 131, 31));
        m_AddInListButton = new QPushButton(m_UserInGroupBox);
        m_AddInListButton->setObjectName("m_AddInListButton");
        m_AddInListButton->setGeometry(QRect(190, 30, 93, 29));
        m_ProcessGroupBox = new QGroupBox(centralwidget);
        m_ProcessGroupBox->setObjectName("m_ProcessGroupBox");
        m_ProcessGroupBox->setGeometry(QRect(20, 150, 751, 351));
        m_SortListButton = new QPushButton(m_ProcessGroupBox);
        m_SortListButton->setObjectName("m_SortListButton");
        m_SortListButton->setGeometry(QRect(310, 210, 93, 29));
        m_SortedListWidget = new QListWidget(m_ProcessGroupBox);
        m_SortedListWidget->setObjectName("m_SortedListWidget");
        m_SortedListWidget->setGeometry(QRect(450, 50, 231, 241));
        m_InputListWidget = new QListWidget(m_ProcessGroupBox);
        m_InputListWidget->setObjectName("m_InputListWidget");
        m_InputListWidget->setGeometry(QRect(40, 50, 231, 241));
        m_ClearInputListButton = new QPushButton(m_ProcessGroupBox);
        m_ClearInputListButton->setObjectName("m_ClearInputListButton");
        m_ClearInputListButton->setGeometry(QRect(50, 300, 93, 29));
        m_SortOrderGroupBox = new QGroupBox(m_ProcessGroupBox);
        m_SortOrderGroupBox->setObjectName("m_SortOrderGroupBox");
        m_SortOrderGroupBox->setGeometry(QRect(280, 60, 151, 101));
        m_AscRadioButton = new QRadioButton(m_SortOrderGroupBox);
        m_AscRadioButton->setObjectName("m_AscRadioButton");
        m_AscRadioButton->setGeometry(QRect(20, 20, 110, 24));
        m_AscRadioButton->setChecked(true);
        m_DescRadioButton = new QRadioButton(m_SortOrderGroupBox);
        m_DescRadioButton->setObjectName("m_DescRadioButton");
        m_DescRadioButton->setGeometry(QRect(20, 50, 110, 24));
        MainWindow->setCentralWidget(centralwidget);
        m_ProcessGroupBox->raise();
        m_UserInGroupBox->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        m_UserInGroupBox->setTitle(QCoreApplication::translate("MainWindow", "User Input", nullptr));
        m_AddInListButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        m_ProcessGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Processing", nullptr));
        m_SortListButton->setText(QCoreApplication::translate("MainWindow", "Sort", nullptr));
        m_ClearInputListButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        m_SortOrderGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Sorting Order", nullptr));
        m_AscRadioButton->setText(QCoreApplication::translate("MainWindow", "Ascending", nullptr));
        m_DescRadioButton->setText(QCoreApplication::translate("MainWindow", "Descending", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
