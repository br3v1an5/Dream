#include<string.h>
#include<iostream>
using namespace  std;
#include<stdlib.h>
int isnumber(int *p);
int main()
{
	int a[20];
	cin>>a;
	int result = isnumber(a);
	cout << result << endl;
	system("pause");
}
int isnumber(int *p)
{
	int tag = 0;
	int len = strlen(p);
	for (int i = 0; i < len; i++, p++)
		if (*p >='0' && *p <='9')
			tag = 1;
	if (tag == 1)
		return p-len;

}

