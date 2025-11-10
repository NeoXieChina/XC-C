#include <stdio.h>
int main()
{
	long n, sum, i;
	int flag = 1;
	while (flag) {
		printf_s("请输入N:");
		scanf_s("%ld", &n);
		printf_s("在1-%ld之间的阶梯数为：\n", n);
		sum = 0;
		for (i = 7; i <= n; i++) {
			if (i % 7 == 0) {
				if (i % 6 == 5) {
					if (i % 5 == 4) {
						if (i % 3 == 2) {
							sum++;
							printf_s("%ld\n", i);
						}
					}
				}
			}
		}
		printf_s("在1-%ld之间，有%ld个数可以满足爱因斯坦对阶梯的要求。\n", n, sum);
		printf_s("继续请输入1，否则输入0：\n");
		scanf_s("%d", &flag);
	}
	return 0;
}
