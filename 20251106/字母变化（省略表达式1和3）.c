#include <stdio.h>
int main()
{
	char c;
	for(;(c=getchar())!='#';){
		if(c>='a'&& c<='z')
			c=c-'a'+'A';
		putchar(++c);
	}
	return 0;
}
