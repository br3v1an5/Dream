#include<stdio.h>
#include<stdlib.h>
void  merge(char s1[], char s2[], char s3[]);
int main()
{
	char st1[] = {"Hello" };
	char st2[] = {"world" };
	char st3[40];
	merge(st1, st2, st3);
	printf("%s\n",st3);
	system("pause");
    return 0;
}
void merge(char s1[], char s2[], char s3[])
{
	int i, j;
	for (i = 0; s1[i] != '\0';i++)
		s3[i] = s1[i];
	for (j = 0; s2[j] !='\0'; j++)
		s3[i + j] = s2[j];
	s3[i + j] = '\0';
}
