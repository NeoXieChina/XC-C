#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main () {
	srand((unsigned)time(NULL));//以当前时间为随机生成器的种子

	printf_s("\n请输入学生人数：");
	int cnt;
	scanf_s("%d", &cnt);

	float stuScore[cnt];
	for (int i = 0; i < cnt; i++)
		stuScore[i] = (float)rand() / RAND_MAX * 100;

	printf_s("\n");

	int posMin = 0;
	for (int j = 0; j < cnt - 1; j++) { //进行cnt-1次循环，实现cnt-1趟比较

		posMin = 0; //假定第一个位置（元素）的值最小
		//在每一趟中进行cnt-1-j次比较扫描
		for (int i = 1; i < cnt - j; i++)
			//比较遍历到的当前数组元素与posMin指向的元素
			if (stuScore[posMin] > stuScore[i]) {
				posMin = i; //调整posMin
			}

		if (posMin != cnt - 1 - j) {
			stuScore[posMin] = stuScore[posMin] + stuScore[cnt - 1 - j];
			stuScore[cnt - 1 - j] = stuScore[posMin] - stuScore[cnt - 1 - j];
			stuScore[posMin] = stuScore[posMin] - stuScore[cnt - 1 - j];
		}
	}

	printf_s("学生成绩降序排序：\n");
	for (int i = 0; i < cnt; i++)
		printf_s("\n%.2f", stuScore[i]);

	printf_s("\n请输入要查找的数据：");
	float findKey = 0;
	scanf_s("%f", &findKey);

	int bot = 0, top = cnt - 1;
	int mid = (bot + top) / 2;

	do {
		if (findKey == stuScore[mid])
			printf_s("\n所要查找的数是第%d个数。", mid + 1);
		else if (findKey < stuScore[mid])
			bot = mid + 1;
		else
			top = mid - 1;

		mid = (bot + top) / 2;
	} while (bot > top);

	if (bot > top)
		printf_s("\n没有找到给定的数据");
	
	return 0;
}
