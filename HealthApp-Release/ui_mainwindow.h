/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *Dashboard;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *daysTo;
    QLabel *label_46;
    QLabel *h;
    QLabel *label_48;
    QLabel *w;
    QLabel *logo;
    QLabel *welcome;
    QGridLayout *gridLayout_11;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_12;
    QPushButton *addWorkout;
    QPushButton *updateInfo;
    QPushButton *setGoal;
    QPushButton *addMeal;
    QPushButton *wodButton;
    QWidget *addWorkoutPage;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *label_7;
    QComboBox *fam1;
    QLabel *label_6;
    QLineEdit *ex1;
    QLabel *label_3;
    QSpinBox *w1;
    QLabel *label_8;
    QSpinBox *s1;
    QLabel *label_4;
    QSpinBox *r1;
    QLabel *label_13;
    QLabel *label_10;
    QComboBox *fam2;
    QLabel *label_14;
    QLineEdit *ex2;
    QLabel *label_12;
    QSpinBox *w2;
    QLabel *label_9;
    QSpinBox *s2;
    QLabel *label_11;
    QSpinBox *r2;
    QLabel *label_19;
    QLabel *label_16;
    QComboBox *fam3;
    QLabel *label_20;
    QLineEdit *ex3;
    QLabel *label_18;
    QSpinBox *w3;
    QLabel *label_15;
    QSpinBox *s3;
    QLabel *label_17;
    QSpinBox *r3;
    QLabel *label_23;
    QLabel *label_25;
    QComboBox *fam4;
    QLabel *label_26;
    QLineEdit *ex4;
    QLabel *label_24;
    QSpinBox *w4;
    QLabel *label_21;
    QSpinBox *s4;
    QLabel *label_22;
    QSpinBox *r4;
    QDialogButtonBox *saveWorkoutButton;
    QWidget *addMealPage;
    QGridLayout *gridLayout_2;
    QLabel *label_27;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_6;
    QLabel *label_34;
    QLineEdit *nameEdit;
    QLabel *label_33;
    QDoubleSpinBox *calEdit;
    QLabel *label_32;
    QDoubleSpinBox *fatEdit;
    QLabel *label_31;
    QDoubleSpinBox *cholEdit;
    QLabel *label_29;
    QDoubleSpinBox *sodEdit;
    QLabel *label_28;
    QDoubleSpinBox *carbEdit;
    QLabel *label_30;
    QDoubleSpinBox *protEdit;
    QDialogButtonBox *saveMealButton;
    QWidget *goalPage;
    QGridLayout *gridLayout_8;
    QLabel *label_36;
    QCalendarWidget *calendarWidget_2;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_9;
    QLabel *label_37;
    QLabel *label_38;
    QSpinBox *target;
    QDateEdit *dateEdit;
    QTextBrowser *textBrowser;
    QDialogButtonBox *saveGoalButton;
    QWidget *updatePage;
    QGridLayout *gridLayout_10;
    QLabel *label_45;
    QSpinBox *userHtIn;
    QLabel *label_41;
    QLabel *label_43;
    QLabel *label_42;
    QLabel *label_44;
    QLabel *label_40;
    QTextBrowser *textBrowser_2;
    QSpinBox *userWeight;
    QLineEdit *userName;
    QSpinBox *userHtFt;
    QDialogButtonBox *updateInfoButton;
    QLabel *label_39;
    QWidget *wodPage;
    QGridLayout *gridLayout_5;
    QLabel *label_52;
    QComboBox *muscleGroup;
    QPushButton *pushButton_2;
    QLabel *label_35;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menuHealthApp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(565, 542);
        MainWindow->setMaximumSize(QSize(603, 542));
        MainWindow->setStyleSheet(QStringLiteral("background: white;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        Dashboard = new QWidget();
        Dashboard->setObjectName(QStringLiteral("Dashboard"));
        gridLayout_7 = new QGridLayout(Dashboard);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Dashboard);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(101, 50));
        label->setStyleSheet(QLatin1String("font: 14pt, \"Rockwell\";\n"
"color: rgba(122, 181, 255, 178)"));

        horizontalLayout->addWidget(label);

        daysTo = new QLabel(Dashboard);
        daysTo->setObjectName(QStringLiteral("daysTo"));
        daysTo->setMaximumSize(QSize(40, 16777215));
        daysTo->setStyleSheet(QStringLiteral("font: 26pt, \"Rockwell\";"));

        horizontalLayout->addWidget(daysTo);

        label_46 = new QLabel(Dashboard);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setMaximumSize(QSize(16777215, 50));
        label_46->setStyleSheet(QLatin1String("font: 14pt, \"Rockwell\";\n"
"color: rgba(122, 181, 255, 178)"));

        horizontalLayout->addWidget(label_46);

        h = new QLabel(Dashboard);
        h->setObjectName(QStringLiteral("h"));
        h->setStyleSheet(QStringLiteral("font: 26pt, \"Rockwell\";"));

        horizontalLayout->addWidget(h);

        label_48 = new QLabel(Dashboard);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setMaximumSize(QSize(16777215, 50));
        label_48->setStyleSheet(QLatin1String("font: 14pt, \"Rockwell\";\n"
"color: rgba(122, 181, 255, 178)"));

        horizontalLayout->addWidget(label_48);

        w = new QLabel(Dashboard);
        w->setObjectName(QStringLiteral("w"));
        w->setStyleSheet(QStringLiteral("font: 26pt, \"Rockwell\";"));

        horizontalLayout->addWidget(w);


        gridLayout_7->addLayout(horizontalLayout, 4, 0, 1, 3);

        logo = new QLabel(Dashboard);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setMaximumSize(QSize(376, 123));
        logo->setScaledContents(true);
        logo->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(logo, 2, 0, 1, 1);

        welcome = new QLabel(Dashboard);
        welcome->setObjectName(QStringLiteral("welcome"));
        welcome->setStyleSheet(QLatin1String("font: 36pt, \"Rockwell\";\n"
"color: rgba(122, 181, 255, 178);"));
        welcome->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(welcome, 3, 0, 1, 3);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        groupBox = new QGroupBox(Dashboard);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(515, 100));
        groupBox->setStyleSheet(QLatin1String("font: 13pt, \"Rockwell\";\n"
"background: rgba(122, 181, 255, 178)"));
        gridLayout_12 = new QGridLayout(groupBox);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        addWorkout = new QPushButton(groupBox);
        addWorkout->setObjectName(QStringLiteral("addWorkout"));
        addWorkout->setStyleSheet(QLatin1String("QPushButton#addWorkout {\n"
"	background: white;\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius: 10px;\n"
"	border-color: black;\n"
"}\n"
"QPushButton#addWorkout:pressed {\n"
"	background-color: rgb(205, 207, 207);\n"
"	border-style: inset;\n"
"}"));

        gridLayout_12->addWidget(addWorkout, 1, 0, 1, 1);

        updateInfo = new QPushButton(groupBox);
        updateInfo->setObjectName(QStringLiteral("updateInfo"));
        updateInfo->setStyleSheet(QLatin1String("QPushButton#updateInfo {\n"
"	background: white;\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius: 10px;\n"
"	border-color: black;\n"
"}\n"
"QPushButton#updateInfo:pressed {\n"
"	background-color: rgb(205, 207, 207);\n"
"	border-style: inset;\n"
"}"));

        gridLayout_12->addWidget(updateInfo, 2, 1, 1, 1);

        setGoal = new QPushButton(groupBox);
        setGoal->setObjectName(QStringLiteral("setGoal"));
        setGoal->setStyleSheet(QLatin1String("QPushButton#setGoal {\n"
"	background: white;\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius: 10px;\n"
"	border-color: black;\n"
"}\n"
"QPushButton#setGoal:pressed {\n"
"	background-color: rgb(205, 207, 207);\n"
"	border-style: inset;\n"
"}"));

        gridLayout_12->addWidget(setGoal, 1, 1, 1, 1);

        addMeal = new QPushButton(groupBox);
        addMeal->setObjectName(QStringLiteral("addMeal"));
        addMeal->setStyleSheet(QLatin1String("QPushButton#addMeal {\n"
"	background: white;\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius: 10px;\n"
"	border-color: black;\n"
"}\n"
"QPushButton#addMeal:pressed {\n"
"	background-color: rgb(205, 207, 207);\n"
"	border-style: inset;\n"
"}"));

        gridLayout_12->addWidget(addMeal, 2, 0, 1, 1);

        wodButton = new QPushButton(groupBox);
        wodButton->setObjectName(QStringLiteral("wodButton"));
        wodButton->setStyleSheet(QLatin1String("QPushButton#wodButton {\n"
"	background: white;\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius: 10px;\n"
"	border-color: black;\n"
"}\n"
"QPushButton#wodButton:pressed {\n"
"	background-color: rgb(205, 207, 207);\n"
"	border-style: inset;\n"
"}"));

        gridLayout_12->addWidget(wodButton, 1, 2, 1, 1);


        gridLayout_11->addWidget(groupBox, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_11, 5, 0, 1, 3);

        stackedWidget->addWidget(Dashboard);
        addWorkoutPage = new QWidget();
        addWorkoutPage->setObjectName(QStringLiteral("addWorkoutPage"));
        gridLayout_4 = new QGridLayout(addWorkoutPage);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_2 = new QLabel(addWorkoutPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 24pt, \"Rockwell\";\n"
"color:rgba(122, 181, 255, 178)"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        scrollArea = new QScrollArea(addWorkoutPage);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QStringLiteral("font: \"Rockwell\";"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -112, 500, 462));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("font: 24pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_5, 0, 1, 1, 2);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        fam1 = new QComboBox(scrollAreaWidgetContents);
        fam1->addItem(QString());
        fam1->addItem(QString());
        fam1->addItem(QString());
        fam1->addItem(QString());
        fam1->addItem(QString());
        fam1->addItem(QString());
        fam1->addItem(QString());
        fam1->setObjectName(QStringLiteral("fam1"));
        fam1->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));
        fam1->setEditable(true);

        gridLayout_3->addWidget(fam1, 1, 1, 1, 2);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_6, 1, 3, 1, 1);

        ex1 = new QLineEdit(scrollAreaWidgetContents);
        ex1->setObjectName(QStringLiteral("ex1"));
        ex1->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(ex1, 1, 4, 1, 2);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_3, 2, 1, 1, 1);

        w1 = new QSpinBox(scrollAreaWidgetContents);
        w1->setObjectName(QStringLiteral("w1"));
        w1->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));
        w1->setMaximum(500);

        gridLayout_3->addWidget(w1, 2, 2, 1, 1);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_8, 2, 3, 1, 1);

        s1 = new QSpinBox(scrollAreaWidgetContents);
        s1->setObjectName(QStringLiteral("s1"));
        s1->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));
        s1->setMaximum(10);

        gridLayout_3->addWidget(s1, 2, 4, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_4, 2, 5, 1, 1);

        r1 = new QSpinBox(scrollAreaWidgetContents);
        r1->setObjectName(QStringLiteral("r1"));
        r1->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(r1, 2, 6, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QStringLiteral("font: 24pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_13, 3, 1, 1, 2);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_10, 4, 0, 1, 1);

        fam2 = new QComboBox(scrollAreaWidgetContents);
        fam2->addItem(QString());
        fam2->addItem(QString());
        fam2->addItem(QString());
        fam2->addItem(QString());
        fam2->addItem(QString());
        fam2->addItem(QString());
        fam2->addItem(QString());
        fam2->setObjectName(QStringLiteral("fam2"));
        fam2->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));
        fam2->setEditable(true);

        gridLayout_3->addWidget(fam2, 4, 1, 1, 2);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_14, 4, 3, 1, 1);

        ex2 = new QLineEdit(scrollAreaWidgetContents);
        ex2->setObjectName(QStringLiteral("ex2"));
        ex2->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(ex2, 4, 4, 1, 2);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QLatin1String("font: 13pt, \"Rockwell\";\n"
""));

        gridLayout_3->addWidget(label_12, 5, 1, 1, 1);

        w2 = new QSpinBox(scrollAreaWidgetContents);
        w2->setObjectName(QStringLiteral("w2"));
        w2->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));
        w2->setMaximum(500);

        gridLayout_3->addWidget(w2, 5, 2, 1, 1);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_9, 5, 3, 1, 1);

        s2 = new QSpinBox(scrollAreaWidgetContents);
        s2->setObjectName(QStringLiteral("s2"));
        s2->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));
        s2->setMaximum(10);

        gridLayout_3->addWidget(s2, 5, 4, 1, 1);

        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_11, 5, 5, 1, 1);

        r2 = new QSpinBox(scrollAreaWidgetContents);
        r2->setObjectName(QStringLiteral("r2"));
        r2->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(r2, 5, 6, 1, 1);

        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_19, 6, 1, 1, 2);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_16, 7, 0, 1, 1);

        fam3 = new QComboBox(scrollAreaWidgetContents);
        fam3->addItem(QString());
        fam3->addItem(QString());
        fam3->addItem(QString());
        fam3->addItem(QString());
        fam3->addItem(QString());
        fam3->addItem(QString());
        fam3->addItem(QString());
        fam3->setObjectName(QStringLiteral("fam3"));
        fam3->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));
        fam3->setEditable(true);

        gridLayout_3->addWidget(fam3, 7, 1, 1, 2);

        label_20 = new QLabel(scrollAreaWidgetContents);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_20, 7, 3, 1, 1);

        ex3 = new QLineEdit(scrollAreaWidgetContents);
        ex3->setObjectName(QStringLiteral("ex3"));
        ex3->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(ex3, 7, 4, 1, 2);

        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_18, 8, 1, 1, 1);

        w3 = new QSpinBox(scrollAreaWidgetContents);
        w3->setObjectName(QStringLiteral("w3"));
        w3->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));
        w3->setMaximum(500);

        gridLayout_3->addWidget(w3, 8, 2, 1, 1);

        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_15, 8, 3, 1, 1);

        s3 = new QSpinBox(scrollAreaWidgetContents);
        s3->setObjectName(QStringLiteral("s3"));
        s3->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));
        s3->setMaximum(10);

        gridLayout_3->addWidget(s3, 8, 4, 1, 1);

        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_17, 8, 5, 1, 1);

        r3 = new QSpinBox(scrollAreaWidgetContents);
        r3->setObjectName(QStringLiteral("r3"));
        r3->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(r3, 8, 6, 1, 1);

        label_23 = new QLabel(scrollAreaWidgetContents);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setStyleSheet(QStringLiteral("font: 24pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_23, 9, 1, 1, 2);

        label_25 = new QLabel(scrollAreaWidgetContents);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_25, 10, 0, 1, 1);

        fam4 = new QComboBox(scrollAreaWidgetContents);
        fam4->addItem(QString());
        fam4->addItem(QString());
        fam4->addItem(QString());
        fam4->addItem(QString());
        fam4->addItem(QString());
        fam4->addItem(QString());
        fam4->addItem(QString());
        fam4->setObjectName(QStringLiteral("fam4"));
        fam4->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));
        fam4->setEditable(true);

        gridLayout_3->addWidget(fam4, 10, 1, 1, 2);

        label_26 = new QLabel(scrollAreaWidgetContents);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_26, 10, 3, 1, 1);

        ex4 = new QLineEdit(scrollAreaWidgetContents);
        ex4->setObjectName(QStringLiteral("ex4"));
        ex4->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(ex4, 10, 4, 1, 2);

        label_24 = new QLabel(scrollAreaWidgetContents);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_24, 11, 1, 1, 1);

        w4 = new QSpinBox(scrollAreaWidgetContents);
        w4->setObjectName(QStringLiteral("w4"));
        w4->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));
        w4->setMaximum(500);

        gridLayout_3->addWidget(w4, 11, 2, 1, 1);

        label_21 = new QLabel(scrollAreaWidgetContents);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_21, 11, 3, 1, 1);

        s4 = new QSpinBox(scrollAreaWidgetContents);
        s4->setObjectName(QStringLiteral("s4"));
        s4->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));
        s4->setMaximum(10);

        gridLayout_3->addWidget(s4, 11, 4, 1, 1);

        label_22 = new QLabel(scrollAreaWidgetContents);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(label_22, 11, 5, 1, 1);

        r4 = new QSpinBox(scrollAreaWidgetContents);
        r4->setObjectName(QStringLiteral("r4"));
        r4->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_3->addWidget(r4, 11, 6, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 2, 0, 1, 1);

        saveWorkoutButton = new QDialogButtonBox(addWorkoutPage);
        saveWorkoutButton->setObjectName(QStringLiteral("saveWorkoutButton"));
        saveWorkoutButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        saveWorkoutButton->setCenterButtons(true);

        gridLayout_4->addWidget(saveWorkoutButton, 3, 0, 1, 1);

        stackedWidget->addWidget(addWorkoutPage);
        addMealPage = new QWidget();
        addMealPage->setObjectName(QStringLiteral("addMealPage"));
        gridLayout_2 = new QGridLayout(addMealPage);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_27 = new QLabel(addMealPage);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setStyleSheet(QLatin1String("font: 24pt, \"Rockwell\";\n"
"color: rgba(122, 181, 255, 178)"));

        gridLayout_2->addWidget(label_27, 0, 0, 1, 1);

        scrollArea_2 = new QScrollArea(addMealPage);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 515, 346));
        scrollAreaWidgetContents_2->setStyleSheet(QLatin1String("font: 13pt, \"Rockwell\";\n"
""));
        gridLayout_6 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_34 = new QLabel(scrollAreaWidgetContents_2);
        label_34->setObjectName(QStringLiteral("label_34"));

        gridLayout_6->addWidget(label_34, 0, 0, 1, 1);

        nameEdit = new QLineEdit(scrollAreaWidgetContents_2);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        gridLayout_6->addWidget(nameEdit, 0, 1, 1, 1);

        label_33 = new QLabel(scrollAreaWidgetContents_2);
        label_33->setObjectName(QStringLiteral("label_33"));

        gridLayout_6->addWidget(label_33, 1, 0, 1, 1);

        calEdit = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        calEdit->setObjectName(QStringLiteral("calEdit"));
        calEdit->setMaximum(5000);

        gridLayout_6->addWidget(calEdit, 1, 1, 1, 1);

        label_32 = new QLabel(scrollAreaWidgetContents_2);
        label_32->setObjectName(QStringLiteral("label_32"));

        gridLayout_6->addWidget(label_32, 2, 0, 1, 1);

        fatEdit = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        fatEdit->setObjectName(QStringLiteral("fatEdit"));
        fatEdit->setMaximum(5000);

        gridLayout_6->addWidget(fatEdit, 2, 1, 1, 1);

        label_31 = new QLabel(scrollAreaWidgetContents_2);
        label_31->setObjectName(QStringLiteral("label_31"));

        gridLayout_6->addWidget(label_31, 3, 0, 1, 1);

        cholEdit = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        cholEdit->setObjectName(QStringLiteral("cholEdit"));
        cholEdit->setMaximum(5000);

        gridLayout_6->addWidget(cholEdit, 3, 1, 1, 1);

        label_29 = new QLabel(scrollAreaWidgetContents_2);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_6->addWidget(label_29, 4, 0, 1, 1);

        sodEdit = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        sodEdit->setObjectName(QStringLiteral("sodEdit"));
        sodEdit->setMaximum(5000);

        gridLayout_6->addWidget(sodEdit, 4, 1, 1, 1);

        label_28 = new QLabel(scrollAreaWidgetContents_2);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_6->addWidget(label_28, 5, 0, 1, 1);

        carbEdit = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        carbEdit->setObjectName(QStringLiteral("carbEdit"));
        carbEdit->setMaximum(5000);

        gridLayout_6->addWidget(carbEdit, 5, 1, 1, 1);

        label_30 = new QLabel(scrollAreaWidgetContents_2);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_6->addWidget(label_30, 6, 0, 1, 1);

        protEdit = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        protEdit->setObjectName(QStringLiteral("protEdit"));
        protEdit->setMaximum(5000);

        gridLayout_6->addWidget(protEdit, 6, 1, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_2->addWidget(scrollArea_2, 1, 0, 1, 1);

        saveMealButton = new QDialogButtonBox(addMealPage);
        saveMealButton->setObjectName(QStringLiteral("saveMealButton"));
        saveMealButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        saveMealButton->setCenterButtons(true);

        gridLayout_2->addWidget(saveMealButton, 2, 0, 1, 1);

        stackedWidget->addWidget(addMealPage);
        goalPage = new QWidget();
        goalPage->setObjectName(QStringLiteral("goalPage"));
        gridLayout_8 = new QGridLayout(goalPage);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_36 = new QLabel(goalPage);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setStyleSheet(QLatin1String("font: 24pt, \"Rockwell\";\n"
"color: rgba(122, 181, 255, 178)"));

        gridLayout_8->addWidget(label_36, 0, 0, 1, 1);

        calendarWidget_2 = new QCalendarWidget(goalPage);
        calendarWidget_2->setObjectName(QStringLiteral("calendarWidget_2"));
        calendarWidget_2->setGridVisible(false);
        calendarWidget_2->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);

        gridLayout_8->addWidget(calendarWidget_2, 2, 0, 1, 1);

        scrollArea_3 = new QScrollArea(goalPage);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setMaximumSize(QSize(16777215, 16777215));
        scrollArea_3->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 500, 80));
        scrollAreaWidgetContents_3->setStyleSheet(QLatin1String("font: 13pt, \"Rockwell\";\n"
"color: rgba(122, 181, 255, 178)"));
        gridLayout_9 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_37 = new QLabel(scrollAreaWidgetContents_3);
        label_37->setObjectName(QStringLiteral("label_37"));

        gridLayout_9->addWidget(label_37, 0, 0, 1, 1);

        label_38 = new QLabel(scrollAreaWidgetContents_3);
        label_38->setObjectName(QStringLiteral("label_38"));

        gridLayout_9->addWidget(label_38, 0, 1, 1, 1);

        target = new QSpinBox(scrollAreaWidgetContents_3);
        target->setObjectName(QStringLiteral("target"));
        target->setStyleSheet(QStringLiteral("color: black"));
        target->setAlignment(Qt::AlignCenter);
        target->setMinimum(0);
        target->setMaximum(500);
        target->setValue(0);

        gridLayout_9->addWidget(target, 1, 0, 1, 1);

        dateEdit = new QDateEdit(scrollAreaWidgetContents_3);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setStyleSheet(QStringLiteral("color:black"));
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setMinimumDate(QDate(2018, 5, 14));

        gridLayout_9->addWidget(dateEdit, 1, 1, 1, 1);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        gridLayout_8->addWidget(scrollArea_3, 3, 0, 1, 1);

        textBrowser = new QTextBrowser(goalPage);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setAutoFillBackground(false);
        textBrowser->setStyleSheet(QLatin1String("font: 13pt, \"Rockwell\";\n"
"color: black"));

        gridLayout_8->addWidget(textBrowser, 1, 0, 1, 1);

        saveGoalButton = new QDialogButtonBox(goalPage);
        saveGoalButton->setObjectName(QStringLiteral("saveGoalButton"));
        saveGoalButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        saveGoalButton->setCenterButtons(true);

        gridLayout_8->addWidget(saveGoalButton, 5, 0, 1, 1);

        stackedWidget->addWidget(goalPage);
        updatePage = new QWidget();
        updatePage->setObjectName(QStringLiteral("updatePage"));
        gridLayout_10 = new QGridLayout(updatePage);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_45 = new QLabel(updatePage);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_10->addWidget(label_45, 5, 2, 1, 1);

        userHtIn = new QSpinBox(updatePage);
        userHtIn->setObjectName(QStringLiteral("userHtIn"));
        userHtIn->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));
        userHtIn->setMaximum(11);

        gridLayout_10->addWidget(userHtIn, 4, 3, 1, 1);

        label_41 = new QLabel(updatePage);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_10->addWidget(label_41, 4, 0, 1, 1);

        label_43 = new QLabel(updatePage);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_10->addWidget(label_43, 4, 2, 1, 1);

        label_42 = new QLabel(updatePage);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_10->addWidget(label_42, 5, 0, 1, 1);

        label_44 = new QLabel(updatePage);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_10->addWidget(label_44, 4, 4, 1, 1);

        label_40 = new QLabel(updatePage);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_10->addWidget(label_40, 3, 0, 1, 1);

        textBrowser_2 = new QTextBrowser(updatePage);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 24pt, \"Rockwell\";\n"
"color: rgba(122, 181, 255, 178)"));

        gridLayout_10->addWidget(textBrowser_2, 2, 0, 1, 12);

        userWeight = new QSpinBox(updatePage);
        userWeight->setObjectName(QStringLiteral("userWeight"));
        userWeight->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));
        userWeight->setMaximum(500);

        gridLayout_10->addWidget(userWeight, 5, 1, 1, 1);

        userName = new QLineEdit(updatePage);
        userName->setObjectName(QStringLiteral("userName"));
        userName->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_10->addWidget(userName, 3, 1, 1, 10);

        userHtFt = new QSpinBox(updatePage);
        userHtFt->setObjectName(QStringLiteral("userHtFt"));
        userHtFt->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));
        userHtFt->setMinimum(3);
        userHtFt->setMaximum(7);

        gridLayout_10->addWidget(userHtFt, 4, 1, 1, 1);

        updateInfoButton = new QDialogButtonBox(updatePage);
        updateInfoButton->setObjectName(QStringLiteral("updateInfoButton"));
        updateInfoButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Reset|QDialogButtonBox::Save);
        updateInfoButton->setCenterButtons(true);

        gridLayout_10->addWidget(updateInfoButton, 5, 3, 1, 5);

        label_39 = new QLabel(updatePage);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setStyleSheet(QLatin1String("font: 24pt, \"Rockwell\";\n"
"color: rgba(122, 181, 255, 178)"));

        gridLayout_10->addWidget(label_39, 0, 3, 1, 2);

        stackedWidget->addWidget(updatePage);
        wodPage = new QWidget();
        wodPage->setObjectName(QStringLiteral("wodPage"));
        gridLayout_5 = new QGridLayout(wodPage);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_52 = new QLabel(wodPage);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_5->addWidget(label_52, 1, 0, 1, 1);

        muscleGroup = new QComboBox(wodPage);
        muscleGroup->addItem(QString());
        muscleGroup->addItem(QString());
        muscleGroup->addItem(QString());
        muscleGroup->addItem(QString());
        muscleGroup->addItem(QString());
        muscleGroup->addItem(QString());
        muscleGroup->addItem(QString());
        muscleGroup->setObjectName(QStringLiteral("muscleGroup"));
        muscleGroup->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));
        muscleGroup->setEditable(true);

        gridLayout_5->addWidget(muscleGroup, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(wodPage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton#pushButton_2 {\n"
"	background: white;\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius: 10px;\n"
"	border-color: black;\n"
"}\n"
"QPushButton#pushButton_2:pressed {\n"
"	background-color: rgb(205, 207, 207);\n"
"	border-style: inset;\n"
"}"));

        gridLayout_5->addWidget(pushButton_2, 3, 0, 1, 1);

        label_35 = new QLabel(wodPage);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setStyleSheet(QLatin1String("font: 24pt, \"Rockwell\";\n"
"color: rgba(122, 181, 255, 178)"));
        label_35->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_35, 0, 0, 1, 2);

        tableView = new QTableView(wodPage);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setStyleSheet(QStringLiteral("font: 13pt, \"Rockwell\";"));

        gridLayout_5->addWidget(tableView, 2, 0, 1, 2);

        stackedWidget->addWidget(wodPage);

        gridLayout->addWidget(stackedWidget, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 565, 22));
        menuHealthApp = new QMenu(menuBar);
        menuHealthApp->setObjectName(QStringLiteral("menuHealthApp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuHealthApp->menuAction());

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Days Until Goal:", nullptr));
        daysTo->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_46->setText(QApplication::translate("MainWindow", "Height:", nullptr));
        h->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_48->setText(QApplication::translate("MainWindow", "Weight:", nullptr));
        w->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        logo->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        welcome->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Welcome</p></body></html>", nullptr));
        groupBox->setTitle(QString());
        addWorkout->setText(QApplication::translate("MainWindow", "Add Workout", nullptr));
        updateInfo->setText(QApplication::translate("MainWindow", "Update Info", nullptr));
        setGoal->setText(QApplication::translate("MainWindow", "Set Goal", nullptr));
        addMeal->setText(QApplication::translate("MainWindow", "Add Meal", nullptr));
        wodButton->setText(QApplication::translate("MainWindow", "Previous workouts", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">Add Workout</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Workout 1</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Type", nullptr));
        fam1->setItemText(0, QApplication::translate("MainWindow", "Chest", nullptr));
        fam1->setItemText(1, QApplication::translate("MainWindow", "Back", nullptr));
        fam1->setItemText(2, QApplication::translate("MainWindow", "Shoulders", nullptr));
        fam1->setItemText(3, QApplication::translate("MainWindow", "Legs", nullptr));
        fam1->setItemText(4, QApplication::translate("MainWindow", "Arms", nullptr));
        fam1->setItemText(5, QApplication::translate("MainWindow", "Core", nullptr));
        fam1->setItemText(6, QApplication::translate("MainWindow", "Cardio", nullptr));

        fam1->setCurrentText(QApplication::translate("MainWindow", "Chest", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Exercise", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Weight", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Sets", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Reps", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Workout 2</span></p></body></html>", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Type", nullptr));
        fam2->setItemText(0, QApplication::translate("MainWindow", "Chest", nullptr));
        fam2->setItemText(1, QApplication::translate("MainWindow", "Back", nullptr));
        fam2->setItemText(2, QApplication::translate("MainWindow", "Shoulders", nullptr));
        fam2->setItemText(3, QApplication::translate("MainWindow", "Legs", nullptr));
        fam2->setItemText(4, QApplication::translate("MainWindow", "Arms", nullptr));
        fam2->setItemText(5, QApplication::translate("MainWindow", "Core", nullptr));
        fam2->setItemText(6, QApplication::translate("MainWindow", "Cardio", nullptr));

        fam2->setCurrentText(QApplication::translate("MainWindow", "Chest", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Exercise", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Weight", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Sets", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Reps", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Workout 3</span></p></body></html>", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Type", nullptr));
        fam3->setItemText(0, QApplication::translate("MainWindow", "Chest", nullptr));
        fam3->setItemText(1, QApplication::translate("MainWindow", "Back", nullptr));
        fam3->setItemText(2, QApplication::translate("MainWindow", "Shoulders", nullptr));
        fam3->setItemText(3, QApplication::translate("MainWindow", "Legs", nullptr));
        fam3->setItemText(4, QApplication::translate("MainWindow", "Arms", nullptr));
        fam3->setItemText(5, QApplication::translate("MainWindow", "Core", nullptr));
        fam3->setItemText(6, QApplication::translate("MainWindow", "Cardio", nullptr));

        fam3->setCurrentText(QApplication::translate("MainWindow", "Chest", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "Exercise", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Weight", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Sets", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Reps", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Workout 4</span></p></body></html>", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "Type", nullptr));
        fam4->setItemText(0, QApplication::translate("MainWindow", "Chest", nullptr));
        fam4->setItemText(1, QApplication::translate("MainWindow", "Back", nullptr));
        fam4->setItemText(2, QApplication::translate("MainWindow", "Shoulders", nullptr));
        fam4->setItemText(3, QApplication::translate("MainWindow", "Legs", nullptr));
        fam4->setItemText(4, QApplication::translate("MainWindow", "Arms", nullptr));
        fam4->setItemText(5, QApplication::translate("MainWindow", "Core", nullptr));
        fam4->setItemText(6, QApplication::translate("MainWindow", "Cardio", nullptr));

        fam4->setCurrentText(QApplication::translate("MainWindow", "Chest", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "Exercise", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "Weight", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "Sets", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "Reps", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">Add Meal</span></p></body></html>", nullptr));
        label_34->setText(QApplication::translate("MainWindow", "Name", nullptr));
        label_33->setText(QApplication::translate("MainWindow", "Calories", nullptr));
        label_32->setText(QApplication::translate("MainWindow", "Total Fat", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "Cholestorol", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "Sodium", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "Total Carbs", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "Protein", nullptr));
        label_36->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">Set your Goal!</span></p></body></html>", nullptr));
        label_37->setText(QApplication::translate("MainWindow", "What is your target weight?", nullptr));
        label_38->setText(QApplication::translate("MainWindow", "When do you want to acheive this by?", nullptr));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:',Rockwell'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text';\">HealthApp is dedicated to help you reach the goal you set! The steps are simple, pick a target weight and a day to reach it by! The journey to a better body starts today!</span></p></body></html>", nullptr));
        label_45->setText(QApplication::translate("MainWindow", "lbs.", nullptr));
        label_41->setText(QApplication::translate("MainWindow", "Height", nullptr));
        label_43->setText(QApplication::translate("MainWindow", "ft.", nullptr));
        label_42->setText(QApplication::translate("MainWindow", "Weight", nullptr));
        label_44->setText(QApplication::translate("MainWindow", "in.", nullptr));
        label_40->setText(QApplication::translate("MainWindow", "Name", nullptr));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:',Rockwell'; font-size:24pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:13pt;\">It helps us to get to know you a little bit before we start suggesting things for you! Simply fill in the information and we can begin!</span></p></body></html>", nullptr));
        userName->setText(QString());
        label_39->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">Update your info!</span></p></body></html>", nullptr));
        label_52->setText(QApplication::translate("MainWindow", "What muscle group are you hitting today?", nullptr));
        muscleGroup->setItemText(0, QApplication::translate("MainWindow", "Chest", nullptr));
        muscleGroup->setItemText(1, QApplication::translate("MainWindow", "Back", nullptr));
        muscleGroup->setItemText(2, QApplication::translate("MainWindow", "Shoulders", nullptr));
        muscleGroup->setItemText(3, QApplication::translate("MainWindow", "Legs", nullptr));
        muscleGroup->setItemText(4, QApplication::translate("MainWindow", "Arms", nullptr));
        muscleGroup->setItemText(5, QApplication::translate("MainWindow", "Core", nullptr));
        muscleGroup->setItemText(6, QApplication::translate("MainWindow", "Cardio", nullptr));

        muscleGroup->setCurrentText(QApplication::translate("MainWindow", "Chest", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Return", nullptr));
        label_35->setText(QApplication::translate("MainWindow", "Previous Workouts", nullptr));
        menuHealthApp->setTitle(QApplication::translate("MainWindow", "HealthApp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
