#include <stdio.h>
int main()
{
	printf_s("请输入一个年份：");
	int year;
	scanf_s("%d",&year);
	if((year%4==0&&year%100!=0)||year%400==0)
		printf_s("%d是闰年。\n",year);
	else
		printf_s("%d不是闰年。\n",year);
	
	return 0;
}
