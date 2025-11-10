#include <stdio.h>
int main() {
	int f1 = 1, f2 = 1;
	int n = 0;
	printf("请输入n的值：");
	scanf("%d", &n);
	for (int i = 1; i <= n / 2; i++) {
		printf("%d %d ", f1, f2);
		f1 += f2;
		f2 += f1;
	}
	return 0;
}
