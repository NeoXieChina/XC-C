#include <stdio.h>
int main()
{
	int x[3][2]={0},i;
	for(i=0;i<3;i++){
		scanf_s("%d",x[i]);
	}
	printf_s("%3d%3d%3d\n",x[0][0],x[0][1],x[1][0]);
	return 0;
}
