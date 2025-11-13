#include <stdio.h>
int main()
{
	int k[10]={1,2,3,4,5,6,7,8,9,10},i,t;
	for(i=0;i<10/2;i++){
		t=k[i];
		k[i]=k[9-i];
		k[9-i]=t;
	}
	for(i=2;i<8;i++)
		printf_s("%d",k[i]);
	return 0;
}
