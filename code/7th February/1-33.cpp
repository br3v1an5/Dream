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
		puts("������֪����������170�ˣ������������������أ�kg):");
		switch(test_weight())
		{
			case 1:
				  puts("������ƫ�����ͣ�ƽʱ�����˰�"); 
				  break;
			case 2:
			      puts("�����ڽ�׳���ͣ��ü��ˣ�������챣��"); 
				  break;
			case 3:
			      puts("�����ڷ������ͣ�Ҫ������������");
				  break; 
		}
		printf("\n");
		return 0;
	} 
