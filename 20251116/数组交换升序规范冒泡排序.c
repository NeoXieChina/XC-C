#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
	unsigned int cnt ;//学生的人数
	printf_s("\n请输入学生的人数：");
	scanf_s("%u",&cnt);
	
	//根据人数定义数组
	float s[cnt];//学生一门课程的成绩
	
	//随机生成成绩
	srand(time(NULL));
	printf_s("\n排序前：");
	for(int i=0;i<cnt;i++){
		printf_s("%7.2f ",s[i]=rand()%101);
	}
	
	//冒泡升序排序
	for(int j=0;j<cnt-1;j++){
		for(int i=0;i<cnt-1-j;i++){
			if(s[i]>s[i+1]){//比较的是相邻的元素
				s[i]=s[i]+s[i+1];
				s[i+1]=s[i]-s[i+1];
				s[i]=s[i]-s[i+1];
			}
		}
	}
	

	
	printf_s("\n排序后:");
	
	for(int i=0;i<=cnt-1;i++){
		printf_s("%7.2f ",s[i]);
	}
	
	return 0;
}
