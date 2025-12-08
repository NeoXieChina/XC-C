#include <stdio.h>

int maxln4(int, int, int, int);
int maxln2(int, int );

int main()
{
	int a, b, c, d, max;
	printf_s("\n请输入四个整数：");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	max = maxln4(a, b, c, d);
	printf_s("max=%d\n", max);
	return 0;
}

int maxln2(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;
	//return a>b?a:b;
}
int maxln4(int a, int b, int c, int d)
{
	int m;
	m = maxln2(a, b);
	m = maxln2(m, c);
	m = maxln2(m, d);
	return (m);
	//return maxln2(maxln2(maxln2(a,b),c),d);
}
