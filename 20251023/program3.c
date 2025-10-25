#include <stdio.h>
#include <conio.h>
int main()
{
	char ch1,ch2,ch3;
	printf("请输入密码：");
	ch1=getch();
	putchar('*');
	ch2=getch();
	putchar('*');
	ch3=getch();
	putchar('*');
	getch();
	return 0;
}
