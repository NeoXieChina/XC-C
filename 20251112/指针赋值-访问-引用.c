#include <stdio.h>
int main()
{
	int a=1,b=2,*p=&a;
	p=&a;
	printf_s("%d ",*p);
	*p=100;
	printf_s("%p ",p);
	p=&b;
	*p=200;
	printf_s("%p ",p);
	return 0;
}
