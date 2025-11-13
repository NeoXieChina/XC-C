#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define CNT 10

int main()
{
	int randInt[CNT]={0};
	
	//以当前时间为随机生成器的种子
	srand(time(NULL));
	
	for(int n=0;n<CNT;++n){
		randInt[n]=rand()%101;
		
		if(randInt[n]%10==3)
			printf_s("%d",randInt[n]);
	}
	return 0;
}
