#include <stdio.h>
int main()
{
	int a=8;
	int b=10;
	int c=16;
	if(a>b) 
		c=a;
	a=b;
	b=c;
	printf_s("%d %d %d",a,b,c);
	return 0;
}
