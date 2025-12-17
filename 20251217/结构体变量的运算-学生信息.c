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

int main()
{
	struct StuInfo s1 = {"2311030000", "张三丰", 'M', {2004, 2, 6}, 555.1234f}, s2;
	printf_s("\n====学生信息====");
	printf_s("\n学号：%s,\n姓名：%s,\n性别：%c,\n出生日期：%4d年%02d月%02d日,\n入学成绩：%.4f", s1.sNo, s1.sName, s1.sSex, s1.sBirth.dYear, s1.sBirth.dMonth, s1.sBirth.dDay, s1.ceeScore);
	s2 = s1;

	printf_s("\n====学生信息====");
	printf_s("\n学号：%s,\n姓名：%s,\n性别：%c,\n出生日期：%4d年%02d月%02d日,\n入学成绩：%.4f", s2.sNo, s2.sName, s2.sSex, s2.sBirth.dYear, s2.sBirth.dMonth, s2.sBirth.dDay, s2.ceeScore);
	struct StuInfo *pStu = &s2;

	printf_s("\n请输入学生信息：");
	printf_s("\n学号：");
	gets(pStu->sNo);
	fflush(stdin);

	printf_s("\n姓名：");
	gets(pStu->sName);
	fflush(stdin);

	printf_s("\n性别(M|F)：");
	s2.sSex = getchar();
	fflush(stdin);

	printf_s("\n出生日期：xxxx-xx-xx：");
	scanf_s("%4d-%2d-%2d", &pStu->sBirth.dYear, &pStu-> sBirth.dMonth, &pStu->sBirth.dDay);
	fflush(stdin);

	printf_s("\n入学成绩：");
	scanf_s("%f", &s2.ceeScore);
	fflush(stdin);

	printf_s("\n====学生信息====");
	printf_s("\n学号：%s,\n姓名：%s,\n性别：%c,\n出生日期：%4d年%02d月%02d日,\n入学成绩：%.4f", pStu-> sNo, pStu-> sName, pStu-> sSex, s2.sBirth.dYear, s2.sBirth.dMonth, s2.sBirth.dDay, (*pStu).ceeScore);

	return 0;
}
