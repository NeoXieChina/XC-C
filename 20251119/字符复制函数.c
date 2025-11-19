#include <stdio.h>
#include <string.h>
int main()
{
	char str[10]={};
	puts(strcpy(str,"Hello!"));
	strcpy(str,"\0\0\0\0\0\0\0\0\0\0");
	puts(strncpy(str,"Hello World!",6));
	
	return 0;
}
