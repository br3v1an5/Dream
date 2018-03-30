#include<iostream>
using namespace std;
int main()
{
	char *pst1="Happy new year!";
	char *pst2;
	pst2=pst1;
	while(*pst2!='\0')
	     cout<<*pst2++;
	cout<<endl;
	while(pst2>=pst1)
	   {
	   	cout<<*pst2;
	   	pst2=pst2-1;
	   }
	   return 0;
}
