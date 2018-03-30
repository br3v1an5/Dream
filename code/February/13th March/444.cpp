#include<iostream>
using namespace std;
char *mystrcpy(char *want, char *source);
int main()
{
	char a[20] = "how are you";
	char b[20];
	char *p;
	p=mystrcpy(b,a);
	cout << p << endl;
    return 0;
}

char * mystrcpy(char * want, char * source)
{
	char *temp=source; 
	/*while (*source!='\0')
	{
		*want++= *source++;
	}
	*want='\0';*/
	return temp;
}

