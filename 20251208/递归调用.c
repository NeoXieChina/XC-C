#include <stdio.h>

int powerOfIntNum(int, int);

int main()
{
	printf_s("\n请输入一个整数：");
	int num;
	scanf_s("%d", &num);

	printf_s("\ni请输入次方数：");
	int powerTimes;
	scanf_s("%d", &powerTimes);

	printf_s("%d", powerOfIntNum(num, powerTimes));

	return 0;
}

int powerOfIntNum(int num, int powerTimes)
{
//	int result = 1;
//	for (int i = powerTimes; i > 0; i--)
//		result *= num;
//	return result;
	if (powerTimes <= 0)
		return 1;
	else
		return num*powerOfIntNum(num, powerTimes - 1);
}
