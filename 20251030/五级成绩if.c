#include <stdio.h>
#include<ctype.h>
#include <math.h>
int main()
{
	char gradeChar='\0';
	float hundredScore=0;
	
	printf_s("\n请输入五级成绩等级（A|B|C|D|E）：");
	gradeChar=islower(gradeChar=getchar())?gradeChar-32:gradeChar;
	
	if('A'==gradeChar)
		hundredScore=90;
	else if('B'==gradeChar)
		hundredScore=85;
	else if('C'==gradeChar)
		hundredScore=75;
	else if('D'==gradeChar)
		hundredScore=65;
	else if('E'==gradeChar)
		hundredScore=50;
	else
		hundredScore=0;
	
	if(fabs(hundredScore)<1e-10)
		printf_s("\n输入数据错误！");
	else
		printf_s("\n百分制成绩：%.2f",hundredScore);
	
	return 0;
}
