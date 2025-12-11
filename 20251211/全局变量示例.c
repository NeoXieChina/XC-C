#include <stdio.h>
float Max = 0, Min = 0;
float score[10];
float average(int n);
int main()
{
	int i;
	float ave;
	printf("请输入10名学生的成绩：");
	for (i = 0; i < 10; i++)
		scanf("%f", &score[i]);
	ave = average(10);
	printf("max=%6.2f\nmin=%6.2f\naverage=%6.2f\n", Max, Min, ave);
	return 0;
}
float average(int n)
{
	float sum = 0;
	int i;
	Max = Min = score[0];
	for (i = 0; i < n; i++) {
		sum += score[i];
		if (score[i] > Max) {
			Max = score[i];
		}
		if (score[i] < Min) {
			Min = score[i];
		}
	}
	return sum / n;
}
