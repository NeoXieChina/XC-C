#include <stdio.h>
int main ()
{
	char ch;
	ch=getchar();
	putchar((ch>='A'&&ch<='Z')?(ch+32):ch);
	return 0;
}
