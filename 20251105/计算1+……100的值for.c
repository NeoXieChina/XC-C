#include <stdio.h>
int main()
{
	int sum=0,i=1;
	int n=0;
	printf_s("请输入n的值：");
	scanf_s("%d",&n);
	for(int i=1;i<=n;i++)
		sum=sum+i;
	printf_s("%d!的值是%d。",n,sum);
	return 0;
}
