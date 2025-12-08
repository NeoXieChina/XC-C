#include <stdio.h>
int jiecheng(int num)
{
	int total = 1;
	for (int i = 1; i <= num; i++) {
		total *= i;
	}
	return total;
}
int main()
{
	int sum = jiecheng(3) + jiecheng(4) + jiecheng(5);
	printf_s("%d \n", sum);
	return 0;
}
