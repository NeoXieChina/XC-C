#include <stdio.h>
int main()
{
	int a=100,b=200;
	int *p1=NULL,*p2=NULL;
	p1=&a;
	p2=&b;
	*p1+=*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	printf_s("a=%d,b=%d\n",a,b);
	printf_s("*p1=%d,*p2=%d\n",*p1,*p2);
	return 0;
}
