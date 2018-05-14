#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "user.h"
#include "ui_login.h"
#include "mainwindow.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
    QSqlDatabase DB;
    void closeConn();
    bool openConn();

private slots:
    void on_loginButton_clicked();

    void on_signUpButton_clicked();

    void on_signUpButton_2_clicked();

    void on_goBackButton_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
