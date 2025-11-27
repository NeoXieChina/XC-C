#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int rowCnt=0,colCnt=0;
	printf_s("\n请输入课程门数：");
	scanf_s("%d",&rowCnt);
	printf_s("\n请输入学生人数：");
	scanf_s("%d",&colCnt);
	
	float couScore[rowCnt][colCnt];
	
	srand(time(NULL));
	for(int i=0;i<rowCnt;i++){
		for(int j=0;j<colCnt;j++){
			couScore[i][j]=(float)rand()/RAND_MAX*100;
		}
	}
	//按先行后列输出
	printf_s("\n输出每门课程每名学生的成绩：\n");
	for(int i=0;i<rowCnt;i++){
		for(int j=0;j<colCnt;j++){
			printf_s("%8.2f",couScore[i][j]);
		}
		printf_s("\n");
	}
	//按先列行后行输出
	printf_s("\n输出每名学生每门课程的成绩：\n");
	for(int j=0;j<colCnt;j++){
		for(int i=0;i<rowCnt;i++){
			printf_s("%8.2f",couScore[i][j]);
		}
		printf_s("\n");
	}
	
	return 0;
}
