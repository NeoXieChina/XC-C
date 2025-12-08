#include <stdio.h>
int jiecheng(int n)
{
	int sum=1;
	for(int i=1;i<=n;i++){
		sum*=i;
	}
	return sum;
}
int main()
{   
	int n;
	printf_s("\n请输入n的值：");
	scanf_s("%d",&n);
	for(int i=1;i<=n;i++){
		int sum=jiecheng(i);
		printf_s("\n%d的阶乘是%d",i,sum);
	}
	return 0;
}
