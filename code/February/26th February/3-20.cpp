#define USA 0
#define ENGLAND 1
#define FRANCE  2
#define ACTIVE_COUNTRY  America 

#if  ACTIVE_COUNTRY==USA 
    char*currency="dollar";
#elif ACTIVE_COUNTRY==ENGLAND 
    char*currency="pound";
#else
     char*currency="france";
#endif 
#include<stdio.h>
int main()
{
	float price1,price2,sumprice;
	scanf("%f%f",&price1,&price2);
	sumprice=price1+price2;
	printf("sum=%.2f%s",sumprice,currency);
}
