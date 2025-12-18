#include <stdio.h>
#include <math.h>
union ShareSpaceType{
	char ch;
	int i;
	double x;
};
int main()
{
	union ShareSpaceType u1={'\0'};
	
	printf("\n共用体变量的存储空间：%dB.",sizeof(u1));
	printf("\n共用体变量成员的存储空间ch：%dB,i:%dB,x:%dB.",sizeof(u1.ch),sizeof(u1.i),sizeof(u1.x));
	return 0;
}
