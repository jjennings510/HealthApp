/********************************************************************************
** Form generated from reading UI file 'newuser.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSER_H
#define UI_NEWUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_newUser
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_40;
    QLineEdit *userName;
    QLabel *label_41;
    QSpinBox *userHtFt;
    QLabel *label_43;
    QSpinBox *userHtIn;
    QLabel *label_44;
    QLabel *label_42;
    QSpinBox *userWeight;
    QLabel *label_45;

    void setupUi(QDialog *newUser)
    {
        if (newUser->objectName().isEmpty())
            newUser->setObjectName(QStringLiteral("newUser"));
        newUser->resize(400, 300);
        newUser->setStyleSheet(QStringLiteral("background-color: white"));
        gridLayout_2 = new QGridLayout(newUser);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        buttonBox = new QDialogButtonBox(newUser);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QLatin1String("QDialogButtonBox#buttonBox {\n"
"	button-layout: 1;\n"
"}"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Reset|QDialogButtonBox::Save);
        buttonBox->setCenterButtons(true);

        gridLayout_2->addWidget(buttonBox, 5, 0, 1, 1);

        label_2 = new QLabel(newUser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 14pt, \"Rockwell\";\n"
"color: rgba(122, 181, 255, 178);"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(newUser);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 24pt, \"Rockwell\";\n"
"color: rgba(122, 181, 255, 178);"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        groupBox = new QGroupBox(newUser);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 15pt, \"Rockwell\""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_40 = new QLabel(groupBox);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setAutoFillBackground(false);
        label_40->setStyleSheet(QStringLiteral("background: transparent"));

        gridLayout->addWidget(label_40, 0, 0, 1, 1);

        userName = new QLineEdit(groupBox);
        userName->setObjectName(QStringLiteral("userName"));
        userName->setStyleSheet(QStringLiteral("background: white"));

        gridLayout->addWidget(userName, 0, 1, 1, 4);

        label_41 = new QLabel(groupBox);
        label_41->setObjectName(QStringLiteral("label_41"));

        gridLayout->addWidget(label_41, 1, 0, 1, 1);

        userHtFt = new QSpinBox(groupBox);
        userHtFt->setObjectName(QStringLiteral("userHtFt"));
        userHtFt->setStyleSheet(QStringLiteral("background: white"));
        userHtFt->setMinimum(3);
        userHtFt->setMaximum(7);

        gridLayout->addWidget(userHtFt, 1, 1, 1, 1);

        label_43 = new QLabel(groupBox);
        label_43->setObjectName(QStringLiteral("label_43"));

        gridLayout->addWidget(label_43, 1, 2, 1, 1);

        userHtIn = new QSpinBox(groupBox);
        userHtIn->setObjectName(QStringLiteral("userHtIn"));
        userHtIn->setStyleSheet(QStringLiteral("background: white"));
        userHtIn->setMaximum(11);

        gridLayout->addWidget(userHtIn, 1, 3, 1, 1);

        label_44 = new QLabel(groupBox);
        label_44->setObjectName(QStringLiteral("label_44"));

        gridLayout->addWidget(label_44, 1, 4, 1, 1);

        label_42 = new QLabel(groupBox);
        label_42->setObjectName(QStringLiteral("label_42"));

        gridLayout->addWidget(label_42, 2, 0, 1, 1);

        userWeight = new QSpinBox(groupBox);
        userWeight->setObjectName(QStringLiteral("userWeight"));
        userWeight->setStyleSheet(QStringLiteral("background: white"));
        userWeight->setMaximum(500);

        gridLayout->addWidget(userWeight, 2, 1, 1, 1);

        label_45 = new QLabel(groupBox);
        label_45->setObjectName(QStringLiteral("label_45"));

        gridLayout->addWidget(label_45, 2, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 2, 0, 1, 1);


        retranslateUi(newUser);

        QMetaObject::connectSlotsByName(newUser);
    } // setupUi

    void retranslateUi(QDialog *newUser)
    {
        newUser->setWindowTitle(QApplication::translate("newUser", "Dialog", nullptr));
        label_2->setText(QApplication::translate("newUser", "<html><head/><body><p align=\"center\">Start by entering your information</p></body></html>", nullptr));
        label->setText(QApplication::translate("newUser", "<html><head/><body><p align=\"center\">Welcome to HealthApp<span style=\" font-size:36pt;\">!</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        label_40->setText(QApplication::translate("newUser", "Name", nullptr));
        userName->setText(QString());
        label_41->setText(QApplication::translate("newUser", "Height", nullptr));
        label_43->setText(QApplication::translate("newUser", "ft.", nullptr));
        label_44->setText(QApplication::translate("newUser", "in.", nullptr));
        label_42->setText(QApplication::translate("newUser", "Weight", nullptr));
        label_45->setText(QApplication::translate("newUser", "lbs.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newUser: public Ui_newUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSER_H
