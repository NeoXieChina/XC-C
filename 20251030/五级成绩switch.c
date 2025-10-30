#include <stdio.h>
#include<ctype.h>
#include <math.h>
int main()
{
	char gradeChar='\0';
	float hundredScore=0;
	
	printf_s("\n请输入五级成绩等级（A|B|C|D|E）：");
	gradeChar=islower(gradeChar=getchar())?gradeChar-32:gradeChar;
	
	switch (gradeChar) 
	{
	case 'A':
		hundredScore=90;
		break;
	case 'B':
		hundredScore=85;
		break;
	case 'C':
		hundredScore=75;
		break;
	case 'D':
		hundredScore=65;
		break;
	case 'E':
		hundredScore=50;
		break;
	default:
		hundredScore=0;
		break;
	}
	
	if(fabs(hundredScore)<1e-10)
		printf_s("\n输入数据错误！");
	else
		printf_s("\n百分制成绩：%.2f",hundredScore);
	
	return 0;
}
