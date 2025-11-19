#include <stdio.h>
#include <string.h>
int main()
{
	char  a[20]="ABCD\0DEFG\0";
	char b[]="IJK";
	strcat(a,b);
	printf_s("%s\n",a);
	return 0;
}
