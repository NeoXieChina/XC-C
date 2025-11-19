#include <stdio.h>
#include <string.h>
int main()
{
	char p[10]={'a','b','c','d'},q[]="abc";
	strcpy(p,q);
	printf_s("%s\n",p);
	
	return 0;
}
