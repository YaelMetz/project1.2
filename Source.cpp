//Yael Metzger 212373963
//Course in c++
//Homework 1 Question 2
//A program that receives details of employees in a particular company.
//For each employee the program gets his name, his ID number, the number of hours he worked, hourly wage, 
//number of hours he worked and the amount he was able to put into the company. The program examines and
//prints the details of the employee whose income to the company is the lowest and the details of the employee with the highest salary.

#include "Worker.h"
#include <iostream>
#include<cstring>
#include<string>
#pragma warning (disable:4996)
using namespace std;

int main()
{
	int id;
	char name[21];
	float salary;
	int hours;
	float sum;
	int counter = 0, temp;
	float minSum=10000000, maxSalary=0, sumSalary;

	Worker w1, w2;

	cout << "enter details, to end enter 0:"<<endl;
	cin >> id;

	while (id != 0)            //until the user would like to finish entering workers so he inserts 0.
	{
		temp = id;
		cin >> name >> salary >> hours >> sum;            //inserting the values of a worker.

		while(temp>0)              //to check if the ID number is illegal - no more than 9 digitds.
		{
			counter++;
			temp = temp / 10;
		}

		if ((temp > 9) || (salary <= 0) || (sum <= 0) || (hours <= 0))         //input integrity check for the values the user enter.
			cout << "ERROR" << endl;
		else
		{
			if (sum < minSum)                           //looking for the employee whose income to the company is the lowest.
			{
				minSum = sum;
				w1.setId(id);
				w1.setName(name);
				w1.setSum(sum);
			}

			w2.setSalary(salary);
			w2.setSum(sum);
			w2.setHours(hours);
			
			sumSalary = w2.calculateSalary();
			if (sumSalary > maxSalary)                    // to keep the details of the employee whith the highest salary.
			{
				maxSalary = sumSalary;
				w2.setId(id);
				w2.setName(name);
			}
		}
		cin >> id;
	}

	cout << "minimum sum: " << w1.getSum() << " " << w1.getName() << " " << w1.getId() << endl;   //the employee whose income to the company is the lowest.
	cout << "highest salary:  " << maxSalary << " " << w2.getName() << " " << w2.getId() << endl;   //the employee with the highest salary.

	return 0;
}

//enter details, to end enter 0:
//123456789 yael 45 234 1000
//234523451 efi 12 220 2500
//987654321 avi 50 120 5000
//0
//minimum sum : 1000 yael 123456789
//highest salary : 10630 yael 123456789