#include<stdio.h>
int main()
{
	struct date_time
	{
		short year;
		int month;
		short day;
		short hour;
		int minute;
		int sec;
	};
	typedef struct date_time time;
	time dt;
	dt.year=2018;
	dt.month=2;
	dt.day=30;
	dt.hour=12;
	dt.minute=30;
	dt.sec=30;
	printf("%ld year %d month %d %ld hour %d mins %d sec\n",
	dt.year,dt.month,dt.day,dt.hour,dt.minute,dt.sec);
}
