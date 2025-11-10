#include <stdio.h>
int main()
{
	int N = 0;
	printf_s("请输入N的值：");
	scanf_s("%d", &N);
	for (int stepOfStair = 0; stepOfStair <= N; stepOfStair++) {
		if (stepOfStair % 2 == 1 && stepOfStair % 3 == 2 && stepOfStair % 5 == 4 && stepOfStair % 6 == 5 && stepOfStair % 7 == 0) {
			printf_s("%d ", stepOfStair);
		}
	}
	return 0;
}
