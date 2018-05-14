#include "food.h"
#include "login.h"
#include <QSql>

food::food()
{
    name = "\0";
    calories = 0;
    totalFat = 0;
    cholesterol = 0;
    sodium = 0;
    carbs = 0;
    protein = 0;
}

void food::setName(QString n)
{
    name = n;
}

void food::setCalorie(double c)
{
    calories = c;
}

void food::setProtein(double p)
{
    protein = p;
}

void food::setCarbs(double c)
{
    carbs = c;
}

void food::setCholesterol(double c)
{
    cholesterol = c;
}

void food::setFat(double f)
{
    totalFat = f;
}

void food::setSodium(double s)
{
    sodium = s;
}

QString food::getName()
{
    return name;
}

double food::getCalorie()
{
    return calories;
}

double food::getFat()
{
    return totalFat;
}
double food::getCholesterol()
{
    return cholesterol;
}
double food::getSodium()
{
    return sodium;
}

double food::getProtein()
{
    return protein;
}

double food::getCarbs()
{
    return carbs;
}

void food::insertDatabase()
{
    Login log;

    if (log.openConn())
    {
        QSqlQuery qry;
        qry.prepare("INSERT INTO Food (Name, Calories, TotalFat, Cholesterol, Sodium, Carbs, Protein) "
                    "VALUES (:name, :calories, :totalfat, :cholesterol, :sodium, :carbs, :protein)");

        qry.bindValue(":name", name);
        qry.bindValue(":calories", calories);
        qry.bindValue(":totalfat", totalFat);
        qry.bindValue(":cholesterol", cholesterol);
        qry.bindValue(":sodium", sodium);
        qry.bindValue(":carbs", carbs);
        qry.bindValue(":protein", protein);

        if (!qry.exec())
            qDebug() << qry.lastError().text();
        else
            qDebug() << "Inserted";
    }
    log.closeConn();
}
