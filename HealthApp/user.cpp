#include "user.h"

#include <iostream>
#include <string>


using namespace std;



User::User()
{
    name = '\0';
    weight = 0;
    heightFt = 0;
    heightIn = 0;
    goalDate.setDate(1900, 1, 1);
    goalWeight = 0;

}

void User::setName(QString n)
{
   name = n;
}

void User::setAge(int a)
{
    age = a;
}

void User::setWeight(double w)
{
    weight = w;
}

void User::setHeight(int ft, int in)
{
    heightFt = ft;
    heightIn = in;
}

void User::setGoalWeight(double w)
{
     goalWeight = w;
}

void User::setGoalDate(QDate d)
{
    goalDate = d;
}

void User::setUsername(QString u)
{
    username = u;
}

void User::setPassword(QString p)
{
    password = p;
}

QString User::getName()
{
    return name;
}

int User::getAge()
{
    return age;
}

int User::getHeightFt()
{
    return heightFt;
}

int User::getHeightIn()
{
    return heightIn;
}
double User::getWeight()
{
    return weight;
}

QString User::getUsername()
{
    return username;
}

QString User::getPassword()
{
    return password;
}

QString User::getGoalDate()
{
    QString goal = goalDate.toString("M/d/yyyy");
    return goal;
}

double User::getGoalWeight()
{
    return goalWeight;
}
