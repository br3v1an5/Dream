// oj-C.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>
struct student {
	int number;
	char answer1[20];
	char answer2[20];
	char answer3[20];
};
//int copycompare(student *p1, student *p2);
int main()
{
	student answersheet[10];
	int t,i,j;
	int count = 0;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> answersheet[i].number;
		cin >> answersheet[i].answer1;
		cin >> answersheet[i].answer2;
		cin >> answersheet[i].answer3;
	}
	int len1,len2;
	char *pbegin1,*pbegin2;
	for (i = 0; i < t - 1; i++)
	{
		pbegin1 = answersheet[i].answer1;
		len1 = strlen(answersheet[i].answer1);
		for (j = i + 1; j < t; j++)
		{
			pbegin2 = answersheet[j].answer1;
			len2 = strlen(answersheet[j].answer1);
			for (;( pbegin1!= '\0')||(pbegin2!='\0'); pbegin1++,pbegin2++)
			{
				if (strcmp(*pbegin1,*pbegin2)==0)
					count++;
			}
		}
		if ((count >= 0.9*len1) || (count >= 0.9*len2))
			cout<<i<<endl;
		else
			cout<< 0<<endl;
	}
	system("pause");
    return 0;
}

