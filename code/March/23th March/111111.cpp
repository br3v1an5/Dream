#include "stdio.h"
#include "string.h"
//���ڽṹ�� 
struct date
{
	char y[3];//��
	char m[4];//��
	int d;//��
};

//�����ӣ����ַ�����ʾ�����ת�����α�ʾ
int intY(char *a)
{
	int k = 0;
	k += a[0] - '0';//ʮλ�ϵ���ֵ
	k = k*10 + (a[1] - '0');//ʮλ�ϵ���ֵ����10�ټ��ϸ�λ�ϵ���ֵ
	return k;
}

//�Ƚ���ݣ��޸ĺ󣬲������ͱ��ˣ�
int cmpY(char *y1, char *y2)
{
	//�������������
	int a = intY(y1);
	int b = intY(y2);

	//�����90-10֮�䣬����1990�굽2010��
	if (a < 100 && a > 10)
		a += 1900;
	else
		a += 2000;
	if (b < 100 && b > 10)
		b += 1900;
	else
		b += 2000;

	if (a > b)
		return 1;
	else if (a == b)
		return 0;
	else
		return -1;
}

//�Ƚ��·�
int cmpM(char *a, char *b)
{
	//�����ַ������飬��ʾ12���·ݵ�Ӣ��
	char m[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	int i, j; 
	for (i = 0; i < 12; i++)
		if (strcmp(a,m[i]) == 0)
			break;

	for (j = 0; j < 12; j++)
		if (strcmp(a,m[j]) == 0)
			break;
	
	if (i < j)
		return 1;
	else if (i == j)
		return 0;
	else
		return -1;
}

//�ۺ��꣬�£��ձȽ�
int cmpYMD(struct date a, struct date b)
{
	if (cmpY(a.y,b.y) == -1)
		return -1;
	else if (cmpY(a.y,b.y) == 1)
		return 1;
	else
	{
		if (cmpM(a.m,b.m) == -1)
			return -1;
		else if (cmpM(a.m,b.m) == 1)
			return 1;
		else
		{
			if (a.d > b.d)
				return 1;
			else if(a.d == b.d)
				return 0;
			else
				return -1;
		}
	}
}
int main()
{
	//����ṹ������
	struct date dt[3]={
		{"00", "Jan", 11},
		{"99", "Feb", 22},
		{"08", "Mar", 2}};
	struct date dtTemp;
	int i, j;

	//����
	for (i = 0; i < 3-1; i++)
		for (j = i+1; j < 3; j++)
			if (cmpYMD(dt[i],dt[j]) == 1)
			{
				dtTemp = dt[i];
				dt[i] = dt[j];
				dt[j] = dtTemp;
			}
	//���������������
	for (i = 0; i < 3; i++)
	{
		//�޸������ʽ
		printf("%s %s %d\n",dt[i].y,dt[i].m,dt[i].d);
	}
}
