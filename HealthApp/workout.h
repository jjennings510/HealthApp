#ifndef WORKOUT_H
#define WORKOUT_H

#include <QString>

class workout
{
public:
    //constructors
    workout();
    workout(QString, QString, int, double);//family,name,reps,weight

    //setters
    void setFamily(QString);
    void setName(QString);
    void setSets(int);
    void setReps(int);
    void setWeight(double);

    //getters
    QString getFamily();
    QString getName();
    int getSets();
    int getReps();
    double getWeight();

    void insertDatabase();

private:
    QString family;
    QString name;
    int sets;
    int reps;
    double weight;
};

#endif // WORKOUT_H
