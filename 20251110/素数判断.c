#include <stdio.h>
int main()
{
	int n=0;
	printf("请输入n的值：");
	scanf("%d",&n);
	for(int i=1,flag=0;i<=n-1;i++)
	{
		flag=0;
		for(int j=2;j<=i-1;j++)
		{
			if(i%j==0){
				flag=1;
				break;}
		}
		if(flag)
			printf("\n%d不是素数。",i);
		else
			printf("\n%d是素数。",i);
	}
	return 0;
}
