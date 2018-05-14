/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout_2;
    QLabel *logo;
    QLabel *dbStatus;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *enterUser;
    QLabel *label_2;
    QLineEdit *enterPass;
    QPushButton *signUpButton;
    QPushButton *loginButton;
    QWidget *page_2;
    QGridLayout *gridLayout_5;
    QPushButton *signUpButton_2;
    QPushButton *goBackButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLineEdit *enterUser_2;
    QLabel *label_5;
    QLineEdit *enterPass_2;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(400, 300);
        Login->setStyleSheet(QStringLiteral("background-color: white"));
        gridLayout_2 = new QGridLayout(Login);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        logo = new QLabel(Login);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setMaximumSize(QSize(376, 123));
        logo->setScaledContents(true);

        gridLayout_2->addWidget(logo, 0, 0, 1, 2);

        dbStatus = new QLabel(Login);
        dbStatus->setObjectName(QStringLiteral("dbStatus"));
        dbStatus->setMaximumSize(QSize(10000, 15));

        gridLayout_2->addWidget(dbStatus, 3, 0, 1, 1);

        stackedWidget = new QStackedWidget(Login);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral("font: 15pt \"Rockwell\";"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background: transparent"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        enterUser = new QLineEdit(groupBox);
        enterUser->setObjectName(QStringLiteral("enterUser"));

        gridLayout->addWidget(enterUser, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("background: transparent"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        enterPass = new QLineEdit(groupBox);
        enterPass->setObjectName(QStringLiteral("enterPass"));
        enterPass->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(enterPass, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 2);

        signUpButton = new QPushButton(page);
        signUpButton->setObjectName(QStringLiteral("signUpButton"));
        signUpButton->setStyleSheet(QLatin1String("QPushButton#signUpButton {\n"
"	background: white;\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius: 10px;\n"
"	border-color: black;\n"
"	font: 13pt, \"Rockwell\";\n"
"}\n"
"QPushButton#signUpButton:pressed {\n"
"	background-color: rgb(205, 207, 207);\n"
"	border-style: inset;\n"
"}"));
        signUpButton->setAutoDefault(false);
        signUpButton->setFlat(false);

        gridLayout_3->addWidget(signUpButton, 1, 0, 1, 1);

        loginButton = new QPushButton(page);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setStyleSheet(QLatin1String("QPushButton#loginButton {\n"
"	background: rgba(122, 181, 255, 178);\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius: 10px;\n"
"	border-color: black;\n"
"	font: 13pt, \"Rockwell\";\n"
"}\n"
"QPushButton#login:pressed {\n"
"	background-color: rgb(205, 207, 207);\n"
"	border-style: inset;\n"
"}"));
        loginButton->setAutoDefault(false);
        loginButton->setFlat(false);

        gridLayout_3->addWidget(loginButton, 1, 1, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_5 = new QGridLayout(page_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        signUpButton_2 = new QPushButton(page_2);
        signUpButton_2->setObjectName(QStringLiteral("signUpButton_2"));
        signUpButton_2->setStyleSheet(QLatin1String("QPushButton#signUpButton_2 {\n"
"	background: rgba(122, 181, 255, 178);\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius: 10px;\n"
"	border-color: black;\n"
"	font: 13pt, \"Rockwell\";\n"
"}\n"
"QPushButton#signUpButton_2:pressed {\n"
"	background-color: rgb(205, 207, 207);\n"
"	border-style: inset;\n"
"}"));
        signUpButton_2->setFlat(false);

        gridLayout_5->addWidget(signUpButton_2, 1, 1, 1, 1);

        goBackButton = new QPushButton(page_2);
        goBackButton->setObjectName(QStringLiteral("goBackButton"));
        goBackButton->setStyleSheet(QLatin1String("QPushButton#goBackButton {\n"
"	background: white;\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius: 10px;\n"
"	border-color: black;\n"
"	font: 13pt, \"Rockwell\";\n"
"}\n"
"QPushButton#goBackButton:pressed {\n"
"	background-color: rgb(205, 207, 207);\n"
"	border-style: inset;\n"
"}"));
        goBackButton->setFlat(false);

        gridLayout_5->addWidget(goBackButton, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QStringLiteral("font: 15pt, \"Rockwell\""));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("background: transparent"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        enterUser_2 = new QLineEdit(groupBox_2);
        enterUser_2->setObjectName(QStringLiteral("enterUser_2"));

        gridLayout_4->addWidget(enterUser_2, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("background: transparent"));

        gridLayout_4->addWidget(label_5, 1, 0, 1, 1);

        enterPass_2 = new QLineEdit(groupBox_2);
        enterPass_2->setObjectName(QStringLiteral("enterPass_2"));
        enterPass_2->setEchoMode(QLineEdit::Password);

        gridLayout_4->addWidget(enterPass_2, 1, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 0, 1, 2);

        stackedWidget->addWidget(page_2);

        gridLayout_2->addWidget(stackedWidget, 1, 0, 1, 1);


        retranslateUi(Login);

        stackedWidget->setCurrentIndex(1);
        loginButton->setDefault(false);
        signUpButton_2->setDefault(true);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", nullptr));
        logo->setText(QString());
        dbStatus->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:10pt;\">[+]Status</span></p></body></html>", nullptr));
        groupBox->setTitle(QApplication::translate("Login", "Login", nullptr));
        label->setText(QApplication::translate("Login", "Username", nullptr));
        label_2->setText(QApplication::translate("Login", "Password", nullptr));
        signUpButton->setText(QApplication::translate("Login", "Sign Up", nullptr));
        loginButton->setText(QApplication::translate("Login", "Login", nullptr));
        signUpButton_2->setText(QApplication::translate("Login", "Sign Up", nullptr));
        goBackButton->setText(QApplication::translate("Login", "Go Back", nullptr));
        groupBox_2->setTitle(QApplication::translate("Login", "Sign Up", nullptr));
        label_4->setText(QApplication::translate("Login", "Username", nullptr));
        label_5->setText(QApplication::translate("Login", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
