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
	printf("ѧ��%d,�Ա�%c,���%hd,����%hd,����%hd\n\n",
	st.id_number,st.sex,st.height,st.weight,st.age);
	printf("˫������������%lf\n\n",d);
	return 0;
}
