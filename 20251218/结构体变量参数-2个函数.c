#include <stdio.h>
struct DataType {
	unsigned short dYear;
	unsigned short dMonth;
	unsigned short dDay;
};
struct StuInfo {
	char sNo[11]; //学号
	char sName[11];//姓名
	char sSex;//'M':男;'F':女
	struct DataType sBirth;//生日
	float ceeScore;//入学成绩
};

void printStuInfo(struct StuInfo stuArg);

int main()
{
	struct StuInfo s1 = {"2311030000", "张三丰", 'M', {2004, 2, 6}, 555.1234f}, s2;
	printStuInfo(s1);
	s2 = s1;
	printStuInfo(s2);
	struct StuInfo *pStu=&s2;

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
	printStuInfo(s2);
	return 0;
}
void printStuInfo(struct StuInfo stuArg)
{
	printf_s("\n====学生信息====");
	printf_s("\n学号：%s,\n姓名：%s,\n性别：%s,\n出生日期：%4d年%02d月%02d日,\n入学成绩：%.4f", stuArg.sNo, stuArg.sName, stuArg.sSex=='M'?"男":"女", stuArg.sBirth.dYear, stuArg.sBirth.dMonth, stuArg.sBirth.dDay, stuArg.ceeScore);
	return;
}
