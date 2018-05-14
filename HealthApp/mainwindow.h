#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialogButtonBox>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "user.h"
#include "login.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initializeUser(QString, QString);
    void setUpDashboard();

private slots:
    void on_addWorkout_clicked();

    void on_addMeal_clicked();

    void on_setGoal_clicked();

    void on_updateInfo_clicked();

    void on_saveWorkoutButton_accepted();

    void on_calendarWidget_2_clicked(const QDate &date);

    void on_updateInfoButton_accepted();

    void on_updateInfoButton_rejected();

    void on_updateInfoButton_clicked(QAbstractButton *button);

    void on_saveMealButton_accepted();

    void on_saveMealButton_rejected();

    void on_saveGoalButton_accepted();

    void on_saveWorkoutButton_rejected();

    void on_saveGoalButton_rejected();

    void on_pushButton_2_clicked();

    void on_wodButton_clicked();

    void on_muscleGroup_currentIndexChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    User user;
};

#endif // MAINWINDOW_H
