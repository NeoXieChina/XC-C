#include <stdio.h>
int main()
{
	int x=0,y=0;
	
	printf_s("请输入整数x:");
	scanf_s("%d",&x);
	
	if(x>y) y=1;
	if(0==x) y=0;
	if(x<0) y=-1;
	printf_s("\nx=%d,y=%d",x,y);
	
	return 0;
}
