#include <stdio.h>
int main()
{
	int a[10];
	int i,*p;
	printf_s("请输入10个整数：");
	for(i=0;i<10;i++)
		scanf_s("%d",&a[i]);
	for(p=a;p<(a+10);p++)
		printf_s("%d ",*p);
	printf_s("\n");
	return 0;
}
