#include <stdio.h>
int max(int, int);
int main()
{
	int (*p)(int, int);
	int a, b, c;
	p = max;
	printf("请输入两个整数：");
	scanf_s("%d,%d", &a, &b);
	c = (*p)(a, b);
	printf("a=%d\nb=%d\nmax=%d\n", a, b, c);
	return 0;
}
int max(int x, int y)
{
	int z;
	if (x > y) z = x;
	else z = y;
	return (z);
}
