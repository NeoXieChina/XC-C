#include <stdio.h>
#include <string.h>
int main()
{
	char stuNo[11];
	char stuName[11];
	char stuSex;
	unsigned short int birthYear;
	unsigned short int birthMonth;
	unsigned short int birthDay;
	char nativePlace[11];
	float enterScore;
	
	printf_s("\n========输入学生信息========");
	fflush(stdin);
	printf_s("\n\t学号:");
	scanf_s("%s",stuNo);
	
	fflush(stdin);
	printf_s("\n\t姓名:");
	scanf_s("%s",stuName);
	
	fflush(stdin);
	printf_s("\n\t性别（M|F):");
	stuSex=getchar();
	
	fflush(stdin);
	printf_s("\n\t出生日期（XXXX-XX-XX）:");
	scanf_s("%4d-%2d-%2d",&birthYear,&birthMonth,&birthDay);
	
	fflush(stdin);
	printf_s("\n\t出生地:");
	gets(nativePlace);
	
	fflush(stdin);
	printf_s("\n\t入学成绩:");
	scanf_s("%f",&enterScore);
	
	
	return 0;
}
