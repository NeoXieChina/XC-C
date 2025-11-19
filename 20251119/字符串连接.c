#include <stdio.h>
#include <string.h>
int main()
{
	char str1[10]={"abcabcabc"},str2[4]={"119"};
	puts(strcat(str1,str2));
	
	strcpy(str1,"abcabcabc");
	puts(strncat(str1,str2,4));
	
	return 0;
}
