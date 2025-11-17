#include <stdio.h>
int main()
{
	int a[10];
	int i;
	printf_s("请输入10个整数：");
	for(i=0;i<10;i++)
		scanf_s("%d",&a[i]);
	for(i=0;i<10;i++)
		printf_s("%d ",a[i]);
	printf_s("\n");
	return 0;
}
