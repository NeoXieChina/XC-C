#include <stdio.h>
#include <string.h>
#define N 80
int main()
{
	char s[N], n[N];
	int i, j;
	printf("\n请输入字符串：");
	gets(s);
	printf("原字符串：");
	puts(s);
	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != 'c')
			n[j++] = s[i];
	printf("\n删除后的字符串:");
	puts(n);
	return 0;
}
