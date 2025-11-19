#include <stdio.h>
int main()
{
	char s[]="program",*p=s;
	while(*p!='\0'){
		printf_s("%c",*p-32);
		p++;
	}
	return 0;
}
