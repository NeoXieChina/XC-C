#include <stdio.h>
int main()
{
	int a[10];
	
	//对数组元素a[0]~a[9]赋值
	for(int i=0;i<=9;i++)
		a[i]=i;
	//输出a[9]~a[0]共10个数组元素
	for(int i=9;i>=0;i--)
		printf_s("%d ",a[i]);
	printf_s("\n");

	return 0;
}
