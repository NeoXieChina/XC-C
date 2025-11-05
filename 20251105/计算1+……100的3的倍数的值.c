#include <stdio.h>
int main()
{
	int sum=0,i=1,n=0;
	printf_s("请输入n的值：");
	scanf_s("%d",&n);
	while(i<n){
		if(i%3==0){
			sum=sum+i;
			i++;
		}
		else
			i++;
	}
	printf_s("\n和是：%d",sum);
	return 0;
}
