#include <stdio.h>
int main()
{
	float p=10,w=1,s=0,d=0,f=0;
	printf_s("\n请输入路程：");
	scanf_s("%f",&s);
	if(s>=0&&s<250)
		d=0;
	else if(s>=250&&s<500)
		d=0.02;
	else if(s>=500&&s<1000)
		d=0.05;
	else if(s>=1000&&s<2000)
		d=0.08;
	else if(s>=2000&&s<3000)
		d=0.1;
	else
		d=0.15;
	f=p*w*s*(1-d);
	printf_s("您的运费是：%f。\n",f);
	return 0;
}
