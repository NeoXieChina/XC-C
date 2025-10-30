#include <stdio.h>
int main ()
{
	int a,b,c;
	int m=0;
	printf_s("请输入三个整数（以空格间隔）：");
	scanf_s("%d %d %d",&a,&b,&c);
	m=a>(b>c?b:c)?a:(b>c?b:c);
	printf_s("%d,%d,%d中的最大值是：%d。",a,b,c,m);
	return 0;
}
