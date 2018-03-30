#include<stdio.h>
int main()
{
   struct date
   {
     short year;
	 short month;
	 short day;	
   };
   struct date del={2018,2,28};
  puts("there are the datas:\n");
  printf("%hd %hd %hd\n",del.year,del.month,del.day);
  struct date *p_d;
  p_d=&del;
  p_d->year=2013;
  puts("使用指针表示:\n");
  printf("%hd %hd %hd",p_d->year,p_d->month,p_d->day);
  (*p_d).year=2014;
  puts("使用指针表示:\n");
  printf("%hd %hd %hd",(*p_d).year,(*p_d).month,(*p_d).day);
} 
