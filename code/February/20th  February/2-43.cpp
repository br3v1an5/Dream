#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
	int num,i;
	int maxscore,minscore,sumscore;
	int *pscore;
	float averscore;
	
	printf("input the number of the students: ");
	scanf("%d",&num);
	if(num<0)
	 exit(0);
	pscore=(int *)malloc(num*sizeof(int));
	if(pscore==NULL)
	{
		printf("Insufficient memeory available\n");
		exit(0);
	}
	
	printf("input the scores of the students now:\n");
	for(i=0;i<num;i++)
	  scanf("%d",pscore+i);
	
	maxscore=pscore[0];
	minscore=pscore[0];
	sumscore=pscore[0];
	for(i=1;i<num;i++)
	{
		if(pscore[i]>maxscore)
		  maxscore=pscore[i];
		if(pscore[i]<minscore)
		   minscore=pscore[i];
		sumscore+=pscore[i];
	}
	averscore=(float)sumscore/num;  //count the average number;
	printf("--------------\n");
	printf("averscore=%.1f\n",averscore);
	printf("maxscore=%d\n",maxscore);
	printf("minscore=%d\n",minscore);
	free(pscore); 
}
