#include <stdio.h>
int main()
{
	printf_s("\n========================================九九乘法表========================================\n\n");

	printf_s("%4c", ' '); //打印左上角空白

	//打印表头
	int i = 1;
	printf_s("%4d", i);
	for (int i = 2; i <= 9; i++)
		printf_s("%9d", i);
	printf_s("\n");

	for (int i = 1; i <= 9; i++) {
		printf_s("%3d ", i);
		for (int j = 1; j <= i; j++) {
			printf_s("%1d×%1d=%3d ", i, j, i*j);
		}
		printf_s("\n");
	}
	printf_s("\n==========================================================================================\n");
	return 0;
}
