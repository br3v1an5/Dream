#include<stdio.h>
int main()
{
	int num[10]={1,2,3,4,5,6,7,8,9,10},tmp;
	int i,*p_b,*p_e;
	puts("Õý³£Ë³Ðò:");
	for(i=0;i<10;i++)
	   printf("%d",num[i]);
     p_b=num;
     p_e=&num[9];
    i=0;
	while(p_b+i<p_e-i)
	{
       tmp=*(p_b+i); 
	   *(p_b+i)=*(p_e-i);
	   *(p_e-i)=tmp; 
	   i++;		
	} 
	puts("ÄæÐò£º");
    for(i=0;i<10;i++)
       printf("%d",num[i]);
}
