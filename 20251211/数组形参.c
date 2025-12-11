#include <stdio.h>
void fun(int s[])
{
	static int j = 0;
	do {
		s[j] += s[j + 1];
	} while (++j < 2);
}

int main()
{
	int k, a[10] = {2, 3, 4, 5, 6};
	for (k = 1; k < 3; k++) fun(a);
	for (k = 0; k < 5; k++) printf("%d", a[k]);
	return 0;
}
