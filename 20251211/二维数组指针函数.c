#include <stdio.h>
float *search(float (*scoreLine)[4],int n);
int main()
{
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
	float *p;
	int i,k;
	printf("请输入学生序号：");
	scanf("%d",&k);
	printf("第%d名学生成绩：\n",k);
	p=search(score,k);
	for(i=0;i<4;i++)
		printf("%5.2f\t",*(p+i));
	printf("\n");
	return 0;
}

float *search(float (*scoreLine)[4],int no)
{
	float *pt;
	pt=*(scoreLine+no);
	return(pt);
}
