#include<stdio.h>
struct complex_num
{
	short real;
	short image;
};
typedef struct complex_num comp;
void assign(comp *);
int main()
{
	comp comp1={0,0};
	printf("Ϊ������ֵǰ:%hd+%hdi\n\n",comp1.real,comp1.image);
	assign(&comp1);
	printf("Ϊ������ֵ��:%hd+%hdi\n\n",comp1.real,comp1.image);
}
void assign(comp *num)
{
	puts("���븴����ʵ��:");
	scanf("%hd",&(num->real));
	puts("���븴�����鲿:");
	scanf("%hd",&(num->image));
	printf("\n��������ֵΪ:%hd+%hdi\n",*(num).real,*(num).image);
}
