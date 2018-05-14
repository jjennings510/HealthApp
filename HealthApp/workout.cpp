#include "workout.h"
#include "login.h"
#include <QSql>

workout::workout()
{
    family = "none";
    name = "\0";
    reps = 0;
    weight = 0;
}

workout::workout(QString inputFamily, QString inputName, int inputReps, double inputWeight)
{
    family = inputFamily;
    name = inputName;
    reps = inputReps;
    weight = inputWeight;
}

    //setters
void workout::setFamily(QString inputFamily)
{
    family = inputFamily;
}

void workout::setName(QString inputName)
{
    name = inputName;
}

void workout::setSets(int inputSets)
{
    sets = inputSets;
}

void workout::setReps(int inputReps)
{
    reps = inputReps;
}

void workout::setWeight(double inputWeight)
{
    weight = inputWeight;
}

    //getters
QString workout::getFamily()
{
    return family;
}

QString workout::getName()
{
    return name;
}

int workout::getSets()
{
    return sets;
}

int workout::getReps()
{
    return reps;
}

double workout::getWeight()
{
    return weight;
}

void workout::insertDatabase()
{
    Login log;

    if (log.openConn())
    {
        QSqlQuery qry;
        qry.prepare("INSERT INTO Workouts (Family, Name, Sets, Reps, Weight) "
                    "VALUES (:family, :name, :sets, :reps, :weight)");

        qry.bindValue(":family", family);
        qry.bindValue(":name", name);
        qry.bindValue(":sets", sets);
        qry.bindValue(":reps", reps);
        qry.bindValue(":weight", weight);

        if (!qry.exec())
            qDebug() << qry.lastError().text();
        else
            qDebug() << "Inserted";
    }
    log.closeConn();
}
