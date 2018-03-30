#include<stdio.h>
#include<malloc.h>
#include<stdlib.h> 
int main()
{
	int i,num;
	int minscore,maxscore,sumscore;
	int *pscore;
	float averscore;
	puts("input the number of the students:");
	scanf("%d",&num);
	pscore=(int *)malloc(num*sizeof(int));
	if(pscore==NULL)
	{
		printf("Insufficient memory available\n");
		exit(0);
	}
	puts("input the scores of the students:\n");
	for(i=0;i<num;i++)
	  scanf("%d",pscore+i);
	
	minscore=pscore[0];
	maxscore=pscore[0];
	sumscore=pscore[0];
	for(i=1;i<num;i++)
	{
		if(pscore[i]>maxscore)
		   maxscore=pscore[i];
		if(pscore[i]<minscore)
		   minscore=pscore[i];
		sumscore+=pscore[i];
	}
	averscore=(float)sumscore/num;
	printf("--------------------------------\n");
	printf("maxscore=%d\n",maxscore);
	printf("minscore=%d\n",minscore);
	printf("averscore=%.1f\n",averscore);
	free(pscore); 
	return 0;
}
