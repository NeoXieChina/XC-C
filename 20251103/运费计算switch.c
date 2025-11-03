#include <stdio.h>
int main()
{
	float p=10,w=1,s=0,d=0,f=0;
	printf_s("\n请输入路程：");
	scanf_s("%f",&s);
	switch ((int)(s/250)) {
	case 0:
		d=0;
		break;
	case 1:
		d=0.02;
		break;
	case 2:
	case 3:
		d=0.05;
		break;
	case 4:
	case 5:
	case 6:
	case 7:
		d=0.08;
		break;
	case 8:
	case 9:
	case 10:
	case 11:
		d=0.10;
		break;
	case 12:
		d=0.15;
		break;
	default:
		d=0.15;
		break;
	}
	f=p*w*s*(1-d);
	printf_s("您的运费是：%f。\n",f);
	return 0;
}
