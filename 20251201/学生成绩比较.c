#include <stdio.h>
int main()
{
	int score[4][5]={{100,20,30,50,43},{90,70,49,66},{55,66,21,38,45},{45,34,25,76,56}};
	int max,i,j,stu;
	for(i=0;i<5;i++){
		for(j=0,stu=0,max=score[0][i];j<4;j++){
			if(score[j][i]>max){
				max=score[j][i];
				stu=j;
			}
		}
		printf_s("在第%d门课程中，第%d名学生成绩最高，为%d。\n",i+1,stu+1,max);
	}
	return 0;
}
