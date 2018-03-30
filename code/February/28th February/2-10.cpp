#include<stdio.h>
int main()
{
	struct student_info
	{
		int id_number;
		char sex;
		short height;
		short weight;
		short age;
	};
	typedef struct student_info stud_info;
	typedef double dou;
	stud_info st={20090112,'w',175,80,21};
	dou d=2.568;
	printf("学号%d,性别%c,身高%hd,体重%hd,年龄%hd\n\n",
	st.id_number,st.sex,st.height,st.weight,st.age);
	printf("双精度型数据是%lf\n\n",d);
	return 0;
}
