#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int m=1,n=6;
	//以当前时间为随机生成器的种子
	srand((unsigned)time(NULL));
	
	printf_s("\n骰子的点数是:%d",m+rand()%(n-m));
	
	return 0;
}
