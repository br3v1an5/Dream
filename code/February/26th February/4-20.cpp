#define INTEGER 
#ifdef  INTEGER
   int add(int x,int y)
   {
   	return(x+y); 
   }
#else
   float add(float x,float y)
   {
   	return(x+y);
   }
#endif
#include<stdio.h>
int main()
{
#ifdef  INTEGER
	int a,b,c;
	scanf("%d%d",a,b);
	printf("a+b=%d\n",add(a,b));
#else
    flaot a,b,c;
	scanf("%f%f",a,b);
	printf("a+b=%f\n",add(a+b));
#endif	
}
