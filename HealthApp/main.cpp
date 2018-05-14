#include "mainwindow.h"
#include "login.h"
#include "user.h"
#include "newuser.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login l;
    l.show();
//    MainWindow m;
//    m.show();

    return a.exec();
}
