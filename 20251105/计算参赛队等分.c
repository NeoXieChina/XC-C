#include <stdio.h>
int main ()
{
	float sum=0,maxScore=0,minScore=10,score=0;
	int judgesCnt=0,cnt=1;
	
	printf_s("\n====计算参赛队等分====");
	
	printf_s("\n请输入评委的人数：");
	scanf_s("%d",&judgesCnt);
	while(cnt<=judgesCnt)
	{printf_s("\n请输入第%d名评委评分：",cnt);
		scanf_s("%f",&score);
		sum+=score;//统计评委总分
		
		if(maxScore<score) maxScore=score;//找最高分
		if(minScore<score) minScore=score;//找最低分
		
		cnt++;//计数评委
	}
	
	printf_s("\n本参赛队最后得分：%.2f。",(sum-maxScore-minScore)/(judgesCnt-2));
	return 0;
}
