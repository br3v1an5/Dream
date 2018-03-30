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
	printf("为复数赋值前:%hd+%hdi\n\n",comp1.real,comp1.image);
	assign(&comp1);
	printf("为复数赋值后:%hd+%hdi\n\n",comp1.real,comp1.image);
}
void assign(comp *num)
{
	puts("输入复数的实部:");
	scanf("%hd",&(num->real));
	puts("输入复数的虚部:");
	scanf("%hd",&(num->image));
	printf("\n给复数赋值为:%hd+%hdi\n",*(num).real,*(num).image);
}
