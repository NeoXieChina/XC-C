//编程实现输出输入的一个三位数num的逆序数。
//程序输入：321；输出321的逆序数是123。
#include <stdio.h>
int main ()
{
	int digtals = 0, temp, sign = 1;
	int g = 0, s = 0, b = 0;

	printf("\n请输入一个三位整数：");
	scanf_s("%d", &digtals);

	if (digtals < 0) {
		sign = -1;
		temp = -digtals;
	}

	if ((digtals >= -999 && digtals <= -100) || (digtals >= 100 && digtals <= 999)) {

		g = temp % 10;
		s = temp % 100 / 10;
		b = temp / 100;

		printf("\n%d的逆序数是%d。", digtals, sign*(b + s * 10 + g * 100));
	} else {
		printf("\n数据有错！！！");
	}

	return 0;
}
