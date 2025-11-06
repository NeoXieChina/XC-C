#include <stdio.h>
int main()
{
	printf_s("100..200之间不能被3整除的数有：");
	for(int n=100;n<=200;n++){
		if(n%3==0){
			continue;
		}
		printf_s("%d ",n);
	}
	printf_s("\n");
	return 0;
}
