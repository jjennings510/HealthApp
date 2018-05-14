#include "login.h"
#include "newuser.h"
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);


    QPixmap healthLogo(":/resources/HealthAppLogo.png");
    ui->logo->setPixmap(healthLogo.scaled(healthLogo.width(), healthLogo.height(), Qt::KeepAspectRatio));

    DB = QSqlDatabase::addDatabase("QSQLITE");

    //REPLACE WITH PATH TO DATABASE FILE ON YOUR COMPUTER
    DB.setDatabaseName("/Users/Jacob/HealthApp/users.sqlite");

    if(!openConn())
    {
        ui->dbStatus->setText("Failed to open database");
        QMessageBox::warning(this, "Error", DB.lastError().text());
    }
    else
        ui->dbStatus->setText("Connected....");
}

Login::~Login()
{
    delete ui;
}

void Login::closeConn()
{
    ui->dbStatus->setText("Closing database");
    DB.close();
    DB.removeDatabase(QSqlDatabase::defaultConnection);
}

bool Login::openConn()
{
    if(!DB.open())
    {
        qDebug() << "Cannot connect to database";
        return false;
    }
    else
    {
        qDebug() << "Connected...";
        return true;
    }
}

void Login::on_loginButton_clicked()
{
    QString user, pass;
    user = ui->enterUser->text();
    pass = ui->enterPass->text();

    if(!openConn())
    {
        qDebug() << "Failed to open database";
        return;
    }

    //prepare Query to search database
    QSqlQuery qry;
    qry.prepare("SELECT * FROM Users WHERE Username = '" + user
                + "' AND Password = '" + pass + "'");

    if (qry.exec())
    {
        int count = 0;
        while(qry.next())
        {
            count++;
        }
        //search query for 1 instance of user
        if(count == 1)
        {
            ui->dbStatus->setText("username and password is correct, logging in");
            closeConn();
            this->hide();
            MainWindow *mw = new MainWindow;
            mw->initializeUser(user, pass);
            mw->show();
        }
        else
            ui->dbStatus->setText("username and password is incorrect");
    }
}

//go to sign up page
void Login::on_signUpButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

//creating new account
void Login::on_signUpButton_2_clicked()
{
    QString user, pass;
    user = ui->enterUser_2->text();
    pass = ui->enterPass_2->text();

    if(user.length() < 6)
        ui->dbStatus->setText("Username must be at least 6 characters");
    if(pass.length() < 8)
        ui->dbStatus->setText("Password must be at least 8 characters");

    if(!openConn())
    {
        qDebug() << "Failed to open database";
        return;
    }

    //openConn();
    QSqlQuery qry1, qry2;
    qry1.prepare("SELECT * FROM Users WHERE Username = '" + user + "'");

    if (qry1.exec())
    {
        int count = 0;
        while(qry1.next())
        {
            count++;
        }
        if(count >= 1)
        {
            QMessageBox::warning(this, "Error", "username already taken, please try again");
            ui->enterUser_2->clear();
            ui->enterPass_2->clear();
        }
        if(count < 1)
        {
            qry2.prepare("INSERT INTO Users (Username, Password) VALUES (:Username, :Password)");
            qry2.bindValue(":Username", user);
            qry2.bindValue(":Password", pass);
            if(qry2.exec())
            {
                QMessageBox::information(this, "Congrats", "Account was successfully created!");
                closeConn();
                this->hide();
                newUser *nu = new newUser;
                nu->show();
            }
            else
                QMessageBox::warning(this, "Error", qry2.lastError().text());
        }
    }
}

void Login::on_goBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
