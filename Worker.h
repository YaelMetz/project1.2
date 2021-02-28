//Yael Metzger 212373963
//Course in c++
//Homework 1 Question 2
//The interface of the program. A class of Worker containing the fields of the object and 
//definitions of various operations performed on the fields.

#pragma once
class Worker
{
	private:
		int id;
		char name[21];
		float salary;
		int hours;
		float sum;

	public:
		void setId(int myId);           //to set the Id field

		void setName(char myName[]);        //to set the name field

		void setSalary(float mySalary);        //to set the salary field
	
		void setHours(int myHours);       //to set the hours field

		void setSum(float mySum);            //to set the sum field

		int getId();           //to get the Id field

		char* getName();            //to get the name field

		float getSalary();     //to get the salary field

		int getHours();        //to get the hours field

		float getSum();         //to get the sum field

		float calculateSalary();                //a function that calculate the salary for a worker.
};