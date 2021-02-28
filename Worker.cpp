//Yael Metzger 212373963
//Course in c++
//Homework 1 Question 2
//This file contains the implementation of the actionsand functions in the class of Worker.

#include "Worker.h"
#include <iostream>
#include<cstring>
#include<string>
#pragma warning (disable:4996)

using namespace std;

void Worker::setId(int myId)            //a function that gets a value to set in the feild
{
	id = myId;
};

void Worker::setName(char myName[])            //a function that gets a value to set in the feild
{
	strcpy(name, myName);
};

void Worker::setSalary(float mySalary)            //a function that gets a value to set in the feild
{
	salary = mySalary;
};

void Worker::setHours(int myHours)            //a function that gets a value to set in the feild
{
	hours = myHours;
};

void Worker::setSum(float mySum)            //a function that gets a value to set in the feild
{
	sum = mySum;
};


int Worker::getId()                         //a function that returns the value that in the feild
{
	return id;
};

char* Worker::getName()                         //a function that returns the value that in the feild
{
	return name;
};

float Worker::getSalary()                         //a function that returns the value that in the feild
{
	return salary;
};

int Worker::getHours()                         //a function that returns the value that in the feild
{
	return hours;
};

float Worker::getSum()                         //a function that returns the value that in the feild
{
	return sum;
};

float Worker::calculateSalary()                     //a function that calculate the salary for a worker and returns the amount of salary.
{
	float sumPrecent=0;

	if (sum > 5000)                            //in case the income for the company is bigger than 5000.
		sumPrecent =  (sum - 5000) * 0.4 + 1000 * 0.3 + 2000 * 0.2 + 1000 * 0.15 + 1000 * 0.1;
	
	else if(sum>4000)                        //in case the income for the company is bigger than 4000.
		sumPrecent = (sum - 4000) * 0.3 + 2000 * 0.2 + 1000 * 0.15 + 1000 * 0.1;
	
	else if(sum>2000)                       //in case the income for the company is bigger than 2000.
		sumPrecent = (sum - 2000) * 0.2 + 1000 * 0.15 + 1000 * 0.1;
	
	else if(sum>1000)                       //in case the income for the company is bigger than 1000.
		sumPrecent = (sum - 1000) * 0.15 + 1000 * 0.1;
	
	else if(sum>0)                         //in case the income for the company is less than 1000.
		sumPrecent = sum * 0.1;
	
	return sumPrecent + salary * hours;                       //the amount of a salary.
};