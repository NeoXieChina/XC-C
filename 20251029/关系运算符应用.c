#include <stdio.h>
int main()
{
	int a=1,b=2,c=3,d=0,e=0,f=0;
	d=(a<b<c);
	e=(a==b==c);
	f=(a!=b==c);
	printf("d=%d,e=%d,f=%d",d,e,f);
	return 0;
}
