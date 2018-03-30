#include<stdio.h>
    int test_weight()
	{
	  int num;
	  scanf("%d",&num); 
	  if(num<55)
	     return 1;
	  else if(num<70)
	     return 2;
	  else 
	      return 3;	
	} 
	int main()
	{
		puts("我现在知道你的身高是170了，现在请告诉我你的体重（kg):");
		switch(test_weight())
		{
			case 1:
				  puts("您属于偏瘦类型，平时饿坏了吧"); 
				  break;
			case 2:
			      puts("您属于健壮类型，好极了，请记者徐保持"); 
				  break;
			case 3:
			      puts("您属于肥胖类型，要多活动，锻炼身体");
				  break; 
		}
		printf("\n");
		return 0;
	} 
