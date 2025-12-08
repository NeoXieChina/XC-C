#include <stdio.h>
void fun(int a,int b, int c);
int main()
{
	int a=10,b=20,c=30;
	fun(a,b,c);
	printf_s("%d,%d,%d",c,b,a);
	return 0;
}
void fun(int a,int b,int c)
{
	a=b,b=c,c=a;
	return;
}
