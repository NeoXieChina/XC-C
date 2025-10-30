#include <stdio.h>
int main()
{
	int a=0,b=1,c=2;
	a+=b-=c*=2;
	printf("a=%d,b=%d,c=%d",a,b,c);
	return 0;
}
