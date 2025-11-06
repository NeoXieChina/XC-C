#include <stdio.h>
int main() {
	int n = 0, sum = 0;
	printf_s("\n请从键盘输入一个正整数：");
	scanf_s("%d", &n);
	int i = 1;
	for ( ; i <= n; i++) {
		if (i % 2 == 1)
			sum += i;
		i++;
	}
	printf_s("\n1...%d间的奇数之和=%d\n", n, sum);
	return 0;
}
