#include<stdio.h>
struct complex_num
{
	short real;
	short image;
};
typedef struct complex_num comp;
void assign(comp *num);
comp add(comp,comp);
int main()
{
	comp comp1={5,3};
	printf("复数变量为:%hd+%hdi\n\n",comp1.real,comp1.image);
	comp comp2;
	assign(&comp2);
	printf("复数变量comp2的值为:%hd+%hdi\n\n",comp2.real,comp2.image);
	comp comp3=add(comp1,comp2);
	printf("%hd+%hdi\n\n",comp3.real,comp3.image);	
}
void assign(comp *num)
{
	puts("输入复数的实部:");
	scanf("%hd",&(num->real));
	puts("输入复数的虚部:");
	scanf("%hd",&(num->image));
}
comp add(comp num1,comp num2)
{
	comp temp={0,0};
	temp.real=num1.real+num2.real;
	temp.image=num1.image+num2.image;
	return temp;
}
