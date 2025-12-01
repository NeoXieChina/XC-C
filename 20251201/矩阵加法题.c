#include <stdio.h>
int main()
{
	int b[3][3]={0,1,2,0,1,2,0,1,2},i,j,t=1;
	for(i=0;i<3;i++){
		for(j=0;j<=i;j++){
			t+=b[i][j];
		}
	}
	printf_s("%d\n",t);
	return 0;
}
