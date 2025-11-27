#include <stdio.h>
#include <string.h>
int main()
{
	char s1[10]="abcd!",s2[8]="\n123\\";
	printf_s("%d %d\n",strlen(s1),strlen(s2));
	return 0;
}
