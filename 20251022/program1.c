#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("您输入的是：%d %d\n",a,b);
	fflush(stdin);
	scanf("a=%d,b=%d",&a,&b);
	printf("您输入的是：a=%d,b=%d",a,b);
	
}
