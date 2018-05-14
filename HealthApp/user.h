#ifndef USER_H
#define USER_H

#include <QString>
#include <QDate>

class User
{
public:
    User();

    void setName(QString);
    void setAge(int);
    void setWeight(double);
    void setHeight(int, int);
    void setGoalDate(QDate);
    void setGoalWeight(double);
    void setUsername(QString);
    void setPassword(QString);

    QString getName();
    int getAge();
    double getWeight();
    int getHeightFt();
    int getHeightIn();
    QString getGoalDate();
    double getGoalWeight();
    QString getUsername();
    QString getPassword();

private:
    QString name;
    int age;
    double weight;
    int heightFt;
    int heightIn;
    QDate goalDate;
    double goalWeight;
    QString username;
    QString password;
};

#endif // USER_H
