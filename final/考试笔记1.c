//问题：编程实现把“小时:分:秒”格式的时间转换成距离零点的秒数。
//要求：按格式“小时:分:秒”输入数据。
//输出格式：小时:分:秒距离零点的秒数是x...x秒
//如：00:01:03距离零点的秒数是63秒。
#include <stdio.h>
int main()
{
	short int hours = 0, minutes = 0, seconds = 0;
	int totSeconds = 0;

	printf("\n请输入时间（小时:分:秒）：");
	scanf_s("%2d:%2d:%2d", &hours, &minutes, &seconds);

	if ((hours >= 0 && hours <= 23) && (minutes >= 0 && minutes <= 59) && (seconds >= 0 && seconds <= 59)) {
		totSeconds = hours * 3600 + minutes * 60 + seconds;
		printf("\n%02d:%02d:%02d距离零点的秒数是%d秒。", hours, minutes, seconds, totSeconds);
	} else {
		printf("\n输入的数据错误!!!");
	}
	return 0;
}
