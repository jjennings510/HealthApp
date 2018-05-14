#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "food.h"
#include "workout.h"
#include <QMessageBox>

/*
 * stackedWidget index values:
 * 0 = dashboard
 * 1 = add workout
 * 2 = add meal
 * 3 = set goal
 * 4 = update info
 * 5 = workout of day
 *
 */

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    QString welcome = "Welcome back, ";
    ui->welcome->setText(welcome);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initializeUser(QString usr, QString pass)
{
    Login log;
    if(!log.openConn())
    {
        qDebug() << "Failed to open database";
        return;
    }

    QSqlQuery qry;
    qry.prepare("SELECT * FROM Users WHERE Username = (:username) "
                "AND Password = (:password)");
    qry.bindValue(":username", usr);
    qry.bindValue(":password", pass);
    if(qry.exec())
    {
        if(qry.next())
        {
            user.setUsername(qry.value(0).toString());
            user.setPassword(qry.value(1).toString());
            user.setName(qry.value(2).toString());
            qDebug() << user.getName();
            user.setAge(qry.value(3).toInt());
            qDebug() << user.getAge();
            user.setWeight(qry.value(4).toDouble());
            qDebug() << user.getWeight();
            user.setHeight(qry.value(5).toInt(), qry.value(6).toInt());
            qDebug() << user.getHeightFt() << "'" << user.getHeightIn() << "\"";

            QDate dat = QDate::fromString(qry.value(7).toString(), "M/d/yyyy");
            user.setGoalDate(dat);
            user.setGoalWeight(qry.value(8).toDouble());
        }
    }
    log.closeConn();
    setUpDashboard();
}

void MainWindow::setUpDashboard()
{
    ui->name->setText(user.getName());
    QString ht = QString::number(user.getHeightFt()) + "'" + QString::number(user.getHeightIn()) + '\"';
    ui->h->setText(ht);
    ui->w->setText(QString::number(user.getWeight()));

    QDate today = QDate::currentDate();
    QDate goal = QDate::fromString(user.getGoalDate(), "M/d/yyyy");
    qint64 daysto = today.daysTo(goal);
    QString date = QString::number(daysto);
    ui->daysTo->setText(date);
}
//Dashboard Page Buttons

//On clicking "Add Workout", go to Add Workout Page
void MainWindow::on_addWorkout_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

//On clicking "Add Meal", go to Add Meal Page
void MainWindow::on_addMeal_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

//On clicking "Set Goal", go to Set Goal Page
void MainWindow::on_setGoal_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

//On clicking "Update Info", go to Update Info Page
void MainWindow::on_updateInfo_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

//Add workout buttons
void MainWindow::on_saveWorkoutButton_accepted()
{
    workout wo1, wo2, wo3, wo4;

    if (ui->ex1->hasAcceptableInput())
    {
        wo1.setFamily(ui->fam1->currentText());
        wo1.setName(ui->ex1->text());
        wo1.setWeight(ui->w1->value());
        wo1.setSets(ui->s1->value());
        wo1.setReps(ui->r1->value());
        wo1.insertDatabase();
    }

    if (ui->ex2->hasAcceptableInput())
    {
        wo2.setFamily(ui->fam2->currentText());
        wo2.setName(ui->ex2->text());
        wo2.setWeight(ui->w2->value());
        wo2.setSets(ui->s2->value());
        wo2.setReps(ui->r2->value());
        wo2.insertDatabase();
    }

    if (ui->ex3->hasAcceptableInput())
    {
        wo3.setFamily(ui->fam3->currentText());
        wo3.setName(ui->ex3->text());
        wo3.setWeight(ui->w3->value());
        wo3.setSets(ui->s3->value());
        wo3.setReps(ui->r3->value());
        wo3.insertDatabase();
    }

    if (ui->ex4->hasAcceptableInput())
    {
        wo4.setFamily(ui->fam4->currentText());
        wo4.setName(ui->ex4->text());
        wo4.setWeight(ui->w4->value());
        wo4.setSets(ui->s4->value());
        wo4.setReps(ui->r4->value());
        wo4.insertDatabase();
    }

    QMessageBox::information(this, "Saved", "The following input has been saved.");
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_saveWorkoutButton_rejected()
{
    QMessageBox::warning(this, "Cancel", "You have cancled your input.");
    ui->stackedWidget->setCurrentIndex(0);
}

//Set goal buttons
void MainWindow::on_calendarWidget_2_clicked(const QDate &date)
{
    ui->dateEdit->setDate(date);
}

//Update info buttons
void MainWindow::on_updateInfoButton_accepted()
{
    user.setName(ui->userName->text());
    user.setHeight(ui->userHtFt->value(), ui->userHtIn->value());
    user.setWeight(ui->userWeight->value());
    QMessageBox::information(this, "Saved", "The following input has been saved.");
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_updateInfoButton_rejected()
{
    QMessageBox::warning(this, "Cancel", "You have cancled your input.");
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_updateInfoButton_clicked(QAbstractButton *button)
{
    ui->userName->clear();
    ui->userHtFt->clear();
    ui->userHtIn->clear();
    ui->userWeight->clear();
}

//Save meal buttons
void MainWindow::on_saveMealButton_accepted()
{
    food f;

    f.setName(ui->nameEdit->text());
    f.setCalorie(ui->calEdit->value());
    f.setCarbs(ui->carbEdit->value());
    f.setCholesterol(ui->cholEdit->value());
    f.setFat(ui->fatEdit->value());
    f.setProtein(ui->protEdit->value());
    f.setSodium(ui->sodEdit->value());
    f.insertDatabase();

    QMessageBox::information(this, "Saved", "The following input has been saved.");
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_saveMealButton_rejected()
{
    QMessageBox::warning(this, "Cancel", "You have cancled your input.");
    ui->stackedWidget->setCurrentIndex(0);
}

//Save goal buttons
void MainWindow::on_saveGoalButton_accepted()
{
    user.setGoalDate(ui->dateEdit->date());
    user.setGoalWeight(ui->target->value());

    Login log;

    if (log.openConn())
    {
        QSqlQuery qry;
        qry.prepare("UPDATE Users SET GoalWeight = (:goalweight), GoalDate = (:goaldate) WHERE Username = (:username)");
        qry.bindValue(":username", user.getUsername());
        qry.bindValue(":goalweight", user.getGoalWeight());
        qry.bindValue(":goaldate", user.getGoalDate());
        if (!qry.exec())
            qDebug() << qry.lastError().text();
        else
            qDebug() << "updated";
    }
    log.closeConn();

    QMessageBox::information(this, "Saved", "The following input has been saved.");
    setUpDashboard();
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_saveGoalButton_rejected()
{
    QMessageBox::warning(this, "Cancel", "You have cancled your input.");
    ui->stackedWidget->setCurrentIndex(0);
}

//Workout of Day Buttons
void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_wodButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    Login log;
    QSqlTableModel *model;
    QString filter = "Family = '" + ui->muscleGroup->currentText() + "\'";
    log.openConn();

    model = new QSqlTableModel(this);
    model->setTable("Workouts");
    model->setFilter(filter);
    model->select();

    ui->tableView->setModel(model);
    log.closeConn();

}

void MainWindow::on_muscleGroup_currentIndexChanged(const QString &arg1)
{
    Login log;
    QSqlTableModel *model;
    QString filter = "Family = '" + arg1 + "\'";
    log.openConn();

    model = new QSqlTableModel(this);
    model->setTable("Workouts");
    model->setFilter(filter);
    model->select();

    ui->tableView->setModel(model);
    log.closeConn();
}
