#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[20],b[10];
		cin>>a;
		cin>>b;
		int i,j,lb;
		lb=strlen(b);
		for(i=0,j=0;a[i]!='\0';i++,j++)
		{
			if(j>=lb) 
			   j=0;
			if(a[i]>'A'&&a[i]<'Z')
			{
				a[i]=a[i]+b[j]-'0';
				if(a[i]>'Z') 
				a[i]=a[i]-26;
			}
			else
			{
				a[i]=a[i]+b[j]-'0';
				if(a[i]>'z') 
				a[i]=a[i]-26;
			}
		}
		a[i]='\0';
		cout<<a<<endl;
	 } 
	 return 0;
 } 
