#include <stdio.h>
int main()
{
	int a,b;
	b=(a=3*5,a*4),a+15;
	printf("(a=3*5,a*4),a+15的值是%d\n",b);
	int x,i,j,k;
	x=(i=4,j=16,k=32);
	printf("(i=4,j=16,k=32)的值是%d",x);
	return 0;
}
