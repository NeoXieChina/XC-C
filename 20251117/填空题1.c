#include <stdio.h>
int main()
{
	char a[10]={'6','1','*','4','*','9','*','0','*'},*s=a;
	int n=0;
	while(*s<='9' && *s>='0'){
		n=10*n+*s-'0';
		s++;
	}
	printf_s("%d\n",n);
	return 0;
}
