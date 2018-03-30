#include<stdio.h>
#include<string.h>
int main()
{
	char *ps,*pe;
	char arr[20];
	scanf("%s",arr);
	ps=arr;
	pe=ps+strlen(arr)-1;
	int tag=0;
	while(ps<pe)
	{
		if(*ps++==*pe--)
		tag=1;
	}
	if(tag==1)
	printf("Yes");
	else
	 printf("No");
}
