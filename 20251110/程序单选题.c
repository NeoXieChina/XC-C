#include <stdio.h>
int main()
{
	int f = -2, k = 4, a = 0;
	while (f) {
		do {
			if (k % 2)
				a++;
			else
				break;
		} while (--k);
		f++;
	}
	printf_s("%d,%d,%d", f, k, a);
	return 0;
}
