#include <stdio.h>
int main()
{
	int a=0,i=0;
	switch (i) {
	case 0:
	case 3:
		a+=1;
	case 1:
	case 2:
		a+=2;
	default:
		a+=3;
	}
	printf_s("%d\n",a);
	return 0;
}
