#include <stdio.h>
int aaa(char *s)
{
	char *t = s;
	while (*t++);
	t--;
	return (t - s);
}
int main()
{
	char s[10] = "abcdefghi";
	printf("%d", aaa(s));
	return 0;
}
