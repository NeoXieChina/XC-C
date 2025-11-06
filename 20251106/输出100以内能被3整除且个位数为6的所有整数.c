#include <stdio.h>
int main()
{
	int i,j;
	for(i=0;i<10;i++){
		j=i*10+6;
		if(j%3!=0) continue;
		printf_s("%d ",j);
	}
	return 0;
}
