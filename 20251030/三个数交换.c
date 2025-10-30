#include <stdio.h>
int main()
{
	int a,b,c,t;
	printf_s("\n请输入三个实数（空格间隔）：");
	scanf_s("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		t=a;a=b;b=t;
	}
	if(a>c)
	{
		t=a;a=c;c=t;
	}
	if(b>c)
	{
		t=b;b=c;c=t;
	}
	printf_s("从小到大依次是：%d,%d,%d",a,b,c);
	return 0;
}
