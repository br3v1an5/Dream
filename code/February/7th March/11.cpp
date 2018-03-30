#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char *ptr1= "happy new year!";
 	char *ptr2;
 	ptr2 = ptr1;
 	while(*ptr2!='\0')    
		cout<<*ptr2++;
 cout<<endl;     
 while(--ptr2>=ptr1)     
		cout<<*ptr2;
 cout<<endl;
	system("pause");
    return 0;
}
