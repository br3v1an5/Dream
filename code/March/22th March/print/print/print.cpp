#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
struct person
{
	char name[20];
	int id;
	int salary;
};
person getperson()
{
	person temp;
	cin >> temp.name >> temp.id >> temp.salary;
	return temp;
}   
void display(person &temp)
{
	cout << temp.name << temp.id << temp.salary;
}
int main()
{
	person employee[3];
	for (int i = 0; i < 3; i++)
	{
		employee[i] = getperson();
		display(employee[i]);
	}

}