#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
int main()
{
	bool b1=true;
	_Bool b2=false;
	
	printf_s("\n%d,%d",b1,b2);
	
	b1=(_Bool)0;
	b2=(bool)123;
	printf_s("\n%d,%d",b1,b2);
	
	return 0;
}
