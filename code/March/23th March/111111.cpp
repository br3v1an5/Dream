#include "stdio.h"
#include "string.h"
//日期结构体 
struct date
{
	char y[3];//年
	char m[4];//月
	int d;//日
};

//新增加，将字符串表示的年份转成整形表示
int intY(char *a)
{
	int k = 0;
	k += a[0] - '0';//十位上的数值
	k = k*10 + (a[1] - '0');//十位上的数值乘以10再加上个位上的数值
	return k;
}

//比较年份（修改后，参数类型变了）
int cmpY(char *y1, char *y2)
{
	//新增加两条语句
	int a = intY(y1);
	int b = intY(y2);

	//年份在90-10之间，代表1990年到2010年
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

//比较月份
int cmpM(char *a, char *b)
{
	//定义字符串数组，表示12个月份的英文
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

//综合年，月，日比较
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
	//定义结构体数组
	struct date dt[3]={
		{"00", "Jan", 11},
		{"99", "Feb", 22},
		{"08", "Mar", 2}};
	struct date dtTemp;
	int i, j;

	//排序
	for (i = 0; i < 3-1; i++)
		for (j = i+1; j < 3; j++)
			if (cmpYMD(dt[i],dt[j]) == 1)
			{
				dtTemp = dt[i];
				dt[i] = dt[j];
				dt[j] = dtTemp;
			}
	//输出排序过后的日期
	for (i = 0; i < 3; i++)
	{
		//修改输出格式
		printf("%s %s %d\n",dt[i].y,dt[i].m,dt[i].d);
	}
}
