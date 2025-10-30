#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,disc,p,q;
	printf_s("\n请输入一元二次方程的系数（空格间隔）");
	scanf_s("%lf%lf%lf",&a,&b,&c);
	
	p=-b/(2.0*a);
	disc=b*b-4*a*c;
	q=(disc>=0?sqrt(disc):sqrt(-disc))/(2.0*a);
	
	if(disc<0)
		printf_s("\n方程有两个虚根：x1=%7.2f+%7.2fi,x2=%7.2f-%7.2fi",p,q,p,q);
	else if(0==disc)
		printf_s("方程有两个相等实根：\nx=%7.2f",p);
	else
		printf_s("方有两个不相等程实根：\nx1=%7.2f\nx2=%7.2f\n",p+q,p-q);
	return 0;
}
