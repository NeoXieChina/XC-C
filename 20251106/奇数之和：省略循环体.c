#include <stdio.h>
int main()
{
	int n=0,sum=0;
	printf_s("\n请从键盘输入一个正整数：");
	scanf_s("%d",&n);
	
	for(int i=1;i<=n;sum+=i%2==1?i:0,i++);
	
	printf_s("\n1...%d间的奇数之和=%d\n",n,sum);
	return 0;
}
