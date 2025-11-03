#include <stdio.h>
int main()
{
	unsigned short dateYear=2000,dateMonth=1,dateDay=1;
	unsigned short monthDays=30;
	printf_s("\n请输入日期（XXXX-XX-XX):");
	scanf_s("%4hd-%2hd-%2hd",&dateYear,&dateMonth,&dateDay);
	
	switch (dateMonth) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		monthDays=31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		monthDays=30;
		break;
	case 2:
		if(dateYear%4==0&&dateYear%100!=0||dateYear%400==0)
			monthDays=29;
		else
			monthDays=28;
		break;
	default:
		monthDays=0;
		break;
	}
	
	if(0==monthDays)
		printf_s("\n输入数据错误！");
	else
		printf_s("\n日期所在月份的天数：%hd天。",monthDays);
	return 0;
}
