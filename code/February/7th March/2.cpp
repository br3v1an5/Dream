#include<iostream>
using namespace std;
#include<string.h>
void defstrcpy(char **d,char *s)
{
    int i;
    *d =new char[strlen(s)+1];
    printf("%d\n",*d);
    for(i=0; i<(int)strlen(s); i++)
        (*d)[i]=s[i];
    (*d)[i]='\0';
}
int main()
{
	char str1[]="good";
	char *str2;
	defstrcpy(&str2,str1);
	printf("%d\n",str2);
	cout<<str1<<" "<<str2<<endl;
	return 0;
}
