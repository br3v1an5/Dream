// lianbiao2'.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
struct student {
	int id;
	int age;
	char name[20];
};
int main()
{
	student array[3] = {
	{1, 1,"Abdulla"},
	{2,2,"Liuzhun"},
	{3,3,"ahgah"}
	};
	cout << array[0].age << " " << array[0].id<<" " << array[0].name << endl;
	system("pause");
    return 0;

}

