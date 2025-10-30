#include <stdio.h>
#include <math.h>//程序中调用求平方根函数sqrt
int main()
{
	//disc是判别式sqrt(b*b-4ac)
	double a,b,c,disc,x1,x2,p,q;
	
	printf_s("\n请输入一元二次方程的系数（空格间隔）");
	//输入双精度浮点型变量的值要用格式声明"%lf"
	scanf_s("%lf%lf%lf",&a,&b,&c);
	
	disc=b*b-4*a*c;
	if(disc<0)//若b*b-4ac<0
		printf_s("方程无实根\n");//输出"此方程无实根"
	else{//若b*b-4ac>=0
		p=-b/(2.0*a);
		q=sqrt((disc)/(2.0*a));
		x1=p+q;x2=p-q;//求出方程的两个根
		printf_s("方程实根：\nx1=%7.2f\nx2=%7.2f\n",x1,x2);
	}
	return 0;
}
