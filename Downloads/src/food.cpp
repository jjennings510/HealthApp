#include "food.h"

food::food()
{
	name ="\0";
	calories = 0;
	totalFat = 0;
	cholesterol = 0;
	sodium = 0;
	carbs = 0;
	protein = 0;

	cout << "Food name: ";
	getline(cin,name);
	getline(cin,name);

	cout << "Calories: ";
	cin >> calories;

	cout << "Carbs: ";
	cin >> carbs;

	cout << "sodium: ";
	cin >> sodium;

	cout << "Protein: ";
	cin >> protein;

	cout << "Cholesterol: ";
	cin >> cholesterol;

	cout << "Total Fat: ";
	cin >>totalFat;
}
//
//void food::setName()
//{
//	cout << "name of food item: ";
//	cin >> name;
//}

//void food::setCalorie()
//{
//	cout << "number of calories: ";
//	cin >> calories;
//}
//
//void food::setProtein()
//{
//	cout << "protein content in grams: ";
//	cin >> protein;
//}
//
//void food::setCarbs()
//{
//	cout << "number of carbs: ";
//	cin >> carbs;
//}

string food::getName()
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

void food::printNutritonFacts()
{
	cout << "Name: " << name << endl;
	cout << "Calories: " << calories << endl;
	cout << "Total Fat: " << totalFat << "g"<< endl;
	cout << "Cholesterol: " << cholesterol << "mg" << endl;
	cout << "Sodium: " << sodium << "mg" << endl;
	cout << "Carbohydrates: " << carbs << "g" << endl;
	cout << "Protein: " << protein << "g" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}
