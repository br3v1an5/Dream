#include<stdio.h>
int main()
{
	struct schedule
	{
		char name;
		char sex;
		short week[4];
	};
	typedef struct schedule stru_sche;
	stru_sche st[3]={{'A','m',1,2,4,6},{'T','w',3,5,6,7},
	{'D','m',2,3,4,7}};
	puts("ʹ��ѭ��:");
	for(int i=0;i<3;i++)
	  printf("����:%c%t�Ա�:%c%t������(����1��7):%hd%hd%hd%hd\n",
	  st[i].name,st[i].sex,st[i].week[0],st[i].week[1],st[i].week[2],
	  st[i].week[3]);
}
