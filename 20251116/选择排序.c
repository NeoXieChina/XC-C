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

	return 0;
}
