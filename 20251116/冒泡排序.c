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
	for (int j = 0; j < cnt - 1; j++) //进行cnt-1次循环，实现cnt-1趟比较
		for (int i = 0; i < cnt - j; i++) //在每一趟中进行cnt-1-j次比较
			if (stuScore[i] < stuScore[i + 1]) { //相邻两个数比较
				int t = stuScore[i];
				stuScore[i] = stuScore[i + 1];
				stuScore[i + 1] = t;
			}

	printf_s("学生成绩降序排序：\n");
	for (int i = 0; i < cnt; i++)
		printf_s("\n%.2f", stuScore[i]);

	return 0;
}
