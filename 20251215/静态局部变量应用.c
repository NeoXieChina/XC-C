#include <stdio.h>
int a=7;
int func(int a)
{
	int b=1;
	static int c=5;
	a++;b++;++c;
	return (a*b*c);
}
int main()
{
	int a=5,k;
	for(k=0;k<3;k++)
		printf("%d",func(a));
	return 0;
}
