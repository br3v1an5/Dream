
#include <iostream>
using namespace std;

/*char *CreateStr(char ch, int n)
{
//static char str[100];
char *str;

str = new char[n+1];
int  i;

for(i=0; i<n; i++)
str[i] = ch+i;

str[i] = '\0';
//cout<<str<<endl;


return str;
}

int main()
{
char *p = CreateStr('D',10);

cout<<p<<endl;

delete []p;

return 0;

}*/

void add(int *x)
{
	*x = *x + 5;
}
int main()
{
	int x = 1, *p;
	cout << x << endl;
	 add(&x);
	cout << x << endl;
	return 0;
}
