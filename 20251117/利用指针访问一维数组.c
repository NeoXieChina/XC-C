#include <stdio.h>
int main()
{
	int *p, i, a[10];
	p = a; //p指向a[0]  ①
	printf_s("请输入10个整数:");
	for (i = 0; i < 10; i++)
		scanf_s("%d", p++); //输入10个整数给a[0]~a[9]

	p = a; //重新使p指向a[0]

	for (i = 0; i < 10; i++, p++)
		printf_s("%d ", *p); //想输出a[0]~a[9] ②
	printf_s("\n");
	return 0;
}
