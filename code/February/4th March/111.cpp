#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	char *pc="hello";
	cout << pc << endl;
	pc++;
	cout << pc << endl;
	cout << *pc << endl;
	system("pause");
}
