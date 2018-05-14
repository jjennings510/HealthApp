#ifndef FOOD_H
#define FOOD_H

#include <QObject>
#include <QString>

using namespace std;

class food
{
public:
//constructor
    food();

//getters
    QString getName();
    double getCalorie();
    double getFat();
    double getCholesterol();
    double getSodium();
    double getCarbs();
    double getProtein();

//setters
    void setName(QString);
    void setCalorie(double);
    void setFat(double);
    void setCholesterol(double);
    void setSodium(double);
    void setCarbs(double);
    void setProtein(double);

    void insertDatabase();
private:
    QString name;
    double calories;
    double totalFat;
    double cholesterol;
    double sodium;
    double carbs;
    double protein;
};

#endif // FOOD_H
