#include<stdio.h>
#include<string.h>
int main()
{
  int i,j,k;
  char *pcity[]={"Wuhan","Beijing","Shanghai","Tianjin","Guangzhou",""};
  char *ptemp;
   
   for(i=0;strcmp(pcity[i],"")!=0;i++)
   {
   	 k=i;
   	 for(j=i+1;strcmp(pcity[j],"");j++)
   	   if(strcmp(pcity[k],pcity[j])>0)
   	       k=j;
   	if(k!=i)
   	{
   	  ptemp=pcity[i];
	  pcity[i]=pcity[k];
	  pcity[k]=ptemp;	
	}
   }
   for(i=0;strcmp(pcity[i],"")!=0;i++)
        printf("%s ",pcity[i]);
		printf("\n");	
} 
