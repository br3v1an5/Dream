#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char a[20], b[20];
		cin >> a;
		cin >> b;
		int i, j, len;
		len = strlen(b);
		for (i = 0,j=0; a[i] != '\0'; i++,j++)
		{
			if (len<=j)
				j = 0;
			if(a[i]>='a'&&a[i]<='z')
			  {
			  if((a[i]+b[j]-'0')>'z')
			    a[i] = a[i] + b[j] - '0'-26;
			  else
			    a[i] = a[i] + b[j] - '0';
			  }
			if(a[i]>='A'&&a[i]<='Z')
			{
			  	if((a[i]+b[j]-'0')>'Z')
			    a[i] = a[i] + b[j] - '0'-26;
			  else
			    a[i] = a[i] + b[j] - '0';
			}
			
		}
		a[i]='\0';
		cout << a << endl;
	}
    return 0;
}


