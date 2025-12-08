#include <stdio.h>
int max(int x, int y) //定义max函数，有两个参数
{
	int z; //定义临时变量z
	z = x > y ? x : y; //把x和y中大者赋给z
	return (z); //把z作为max函数的值带回main函数
}
int main()
{
	int a, b, c;
	printf_s("Please enter two integer numbers:");//提示输入数据
	scanf_s("%d,%d", &a, &b); //输入两个整数
	c = max(a, b); //调用max函数，两个实参。大数赋给变量c
	printf("max is %d\n", c); //输出大数c
	return 0;
}
