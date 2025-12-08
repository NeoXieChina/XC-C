#include <stdio.h>
void dec(int n)
{
	if (n == 0)
		return;
	dec(n / 20);
	int r = n % 20;
	if (r < 10)
		putchar('0' + r);
	else
		putchar('A' + (r - 10));

}

int main()
{
	int one;
	printf("\n请输入10进制的数：");
	scanf_s("%d", &one);

	printf("对应的20进制数是：");
	if (one == 0)
		printf("0");
	else
		dec(one);
	printf("\n");
	return 0;
}
