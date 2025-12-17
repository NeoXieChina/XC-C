#include <stdio.h>
struct DataType {
	unsigned short dYear;
	unsigned short dMonth;
	unsigned short dDay;
};
struct StuInfo {
	char sNo[11];
	char sName[11];
	char sSex;
	struct DataType sBirth;
	float ceeScore;
};
struct BookInfo {
	char ISBN[11];
	char bName[21];
	char bAuthor[11];
	char bPub[21];
	float bPrice;
};
int main()
{
	struct StuInfo s1 = {"2311030000", "张三丰", 'M', {2004, 2, 6}, 555.1234f};
	printf_s("\n学号：%s,\n姓名：%s,\n性别：%c,\n出生日期：%4d年%02d月%02d日,\n入学成绩：%.4f", s1.sNo, s1.sName, s1.sSex, s1.sBirth.dYear, s1.sBirth.dMonth, s1.sBirth.dDay, s1.ceeScore);
	return 0;
}
