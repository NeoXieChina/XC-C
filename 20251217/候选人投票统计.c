#include <stdio.h>
#include <string.h>
#include <conio.h>
struct candidateType {
	char canName[11];
	int canCount;
};

int main()
{
	struct candidateType canPersion[3] = {{"张三", 15}, {"李四", 19}, {"王五", 21}};
	int canPerCnt=0;
	canPerCnt=3;
	
	char canName[11]={""};
	
	printf_s("\n====开始唱票====");
	do{
		printf_s("\n请输入候选人姓名：");
		scanf_s("%s",canName);
		for(int i=0;i<canPerCnt;i++){
			if(strcmp(canName,canPersion[i].canName)==0)
				canPersion[i].canCount++;
		}
		char ans;
		printf_s("\n唱票是否结束？（Y|N）");
		ans=getch();
		if(ans=='Y' || ans=='y')
			break;
	}while(1);
	printf_s("\n====投票结果====");
	printf_s("\n%10s%4s","姓名","票数");
	for(int i=0;i<canPerCnt;i++){
		printf_s("\n%10s%4d",canPersion[i].canName,canPersion[i].canCount);
	}
	return 0;
}
