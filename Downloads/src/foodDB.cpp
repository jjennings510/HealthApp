#include "foodDB.h"

foodDB::foodDB(){//constructor sets head and tail to NULL
	setHead(NULL);
	setTail(NULL);
}
//Setters
void foodDB::setHead(foodNode* foodNode)
{
	head = foodNode;
}
void foodDB::setTail(foodNode* foodNode)
{
	tail = foodNode;
}

//Getters
foodNode* foodDB::getHead()
{
	return head;
}
foodNode* foodDB::getTail()
{
	return tail;
}

//misc functions
void foodDB::add()//creates and adds a node of food data
{
    foodNode *newfood = new foodNode;
    newfood->prev = tail;  // inserting at front
    newfood->next = NULL;

    if (tail != NULL)
    {
    	tail->next = newfood;
    }
    tail = newfood;
    if (head == NULL)
    {
    	head = newfood;
    }
}

void foodDB::printHead_to_Tail()//prints list from head to tail
{
	foodNode* current;
	current = getHead();
	while (current != NULL)
	{
		current->printNutritonFacts();
		current = current->next;
	}
}

double foodDB::computeCalorieIntake()//make clones of this for the other food stats
{
	foodNode* current;
	current = getHead();
	double totalCalories = 0;
	while (current != NULL)
	{
		totalCalories += current->getCalorie();
		current = current->next;
	}
	return totalCalories;
}

