#include<stdio.h>
int main()
{
	struct schedule
	{
		char name;
		char sex;
		char week[4];
	};
	typedef struct schedule stru_sche;
	stru_sche sd1={'A','m',1,2,4,6};
	stru_sche sd2={'T','w',3,5,6,7};
	stru_sche sd3={'D','m',2,3,4,7};
	puts("人员信心如下:");
	printf("%c %c %hd %hd %hd %hd",sd1.name,sd1.sex,sd1.week[0],
	sd1.week[1],sd1.week[2],sd1.week[3]);
	
}
