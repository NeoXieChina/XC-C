#include <stdio.h>
#include <stdlib.h>
main()
{
	char x=3;
	short int y=6;
	int z;
	z=x^y<<2;
	char arr[10];
	itoa(z,arr,2);
	printf("%d^%d<<2是%d,即%s",x,y,z,arr);
	return 0;
}
