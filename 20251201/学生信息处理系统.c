#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NOLEN 10
#define NAMELEN 10
#define ADDRLEN 10
int main()
{
	int stuCnt=0;
	printf_s("\n\t请确定学生人数：");
	scanf_s("%d",&stuCnt);
	
	char stuNo[stuCnt][NOLEN+1];
	char stuName[stuCnt][NAMELEN+1];
	char stuSex[stuCnt];
	unsigned short int birthYear[stuCnt];
	unsigned short int birthMonth[stuCnt];
	unsigned short int birthDay[stuCnt];
	char nativePlace[stuCnt][NOLEN];
	char enterScore[stuCnt];
	
	for(int i=0;i<stuCnt;i++){
		system("cls");
		printf_s("\n========输入学生信息========");
		printf_s("\n第%d名学生",i+1);
		fflush(stdin);
		printf_s("\n\t学号:");
		scanf_s("%s",stuNo[i]);
		
		fflush(stdin);
		printf_s("\n\t姓名:");
		gets(stuName[i]);
		
		fflush(stdin);
		printf_s("\n\t性别（M|F):");
		stuSex[i]=getchar();
		
		fflush(stdin);
		printf_s("\n\t出生日期（XXXX-XX-XX）:");
		scanf_s("%4d-%2d-%2d",&birthYear[i],&birthMonth[i],&birthDay[i]);
		
		fflush(stdin);
		printf_s("\n\t出生地:");
		gets(nativePlace[i]);
		
		fflush(stdin);
		printf_s("\n\t入学成绩:");
		scanf_s("%f",&enterScore[i]);
	}

	return 0;
}
