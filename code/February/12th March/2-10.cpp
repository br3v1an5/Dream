#include<iostream>
using namespace std;
int main()
{
	char buffer[]="ABC";
	char *pc;
	pc="hello";
	cout<<buffer<<endl;
	pc++;
	cout<<pc<<endl;
	cout<<*pc<<endl;
	pc=buffer;
	cout<<pc<<endl;
	
}
