
#include "stdafx.h"
int main()
{
	char ch;
	ch = getchar();
	if (toupper(ch) == 'Y')
		showyes();
	system("pause");
    return 0;
}
void showyes()
{
	printf("yes");
}


 