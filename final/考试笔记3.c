//编写一个函数：判断给定的正整数是否是素数。
#include <stdio.h>
//#include <math.h>
int isPrim(unsigned int num)//0:不是素数；1:是素数
{
	int flag = 1; //假定num是素数

	for (int i = 2; i < num; i++) {//for (int i = 2; i < sqrt(num); i++) {
		if (num % i == 0) {
			flag = 0;
			break;
		}
	}
	return flag;
}
int main ()
{

	return 0;
}
