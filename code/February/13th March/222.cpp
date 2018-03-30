#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char array[]="hello";
	char *p="hello";
	cout<<strlen(array)<<endl;
	cout<<sizeof(array)<<endl;
	cout<<sizeof(p)<<endl;
}
