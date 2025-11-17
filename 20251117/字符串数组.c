#include <stdio.h>
#include <string.h>
int main()
{
	char stuNo[11];
	char stuName[11];
	
	printf_s("\n请输入学生信息：");
	printf_s("\n学号：");
	scanf_s("%s",stuNo);
	printf_s("%s",stuNo);
	
	fflush(stdin);
	printf_s("\n姓名：");
	gets(stuName);
	puts(stuName);
	return 0;
}
