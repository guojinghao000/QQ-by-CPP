/********************************************************************************
** Form generated from reading UI file 'logon.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGON_H
#define UI_LOGON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Logon
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *AccountlineEdit;
    QSpacerItem *verticalSpacer;
    QLineEdit *PasswordlineEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Logon)
    {
        if (Logon->objectName().isEmpty())
            Logon->setObjectName("Logon");
        Logon->resize(589, 670);
        centralwidget = new QWidget(Logon);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 120, 304, 240));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        AccountlineEdit = new QLineEdit(layoutWidget);
        AccountlineEdit->setObjectName("AccountlineEdit");
        AccountlineEdit->setMinimumSize(QSize(300, 40));
        AccountlineEdit->setMaximumSize(QSize(300, 40));
        AccountlineEdit->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(AccountlineEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        PasswordlineEdit = new QLineEdit(layoutWidget);
        PasswordlineEdit->setObjectName("PasswordlineEdit");
        PasswordlineEdit->setMinimumSize(QSize(300, 40));
        PasswordlineEdit->setMaximumSize(QSize(300, 40));

        verticalLayout->addWidget(PasswordlineEdit);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 58, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout);

        Logon->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Logon);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 589, 25));
        Logon->setMenuBar(menubar);
        statusbar = new QStatusBar(Logon);
        statusbar->setObjectName("statusbar");
        Logon->setStatusBar(statusbar);

        retranslateUi(Logon);

        QMetaObject::connectSlotsByName(Logon);
    } // setupUi

    void retranslateUi(QMainWindow *Logon)
    {
        Logon->setWindowTitle(QCoreApplication::translate("Logon", "MainWindow", nullptr));
        AccountlineEdit->setText(QString());
        AccountlineEdit->setPlaceholderText(QCoreApplication::translate("Logon", "\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        PasswordlineEdit->setText(QString());
        PasswordlineEdit->setPlaceholderText(QCoreApplication::translate("Logon", "\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("Logon", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Logon", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Logon: public Ui_Logon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGON_H
