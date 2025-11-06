#include <stdio.h>
int main()
{
	int a=6,b=0,c=0;
	for(;a;){
		b+=a;
		a-=++c;
	}
	printf_s("%d,%d,%d\n",a,b,c);
	return 0;
}
