#include <stdio.h>
int main()
{
	int cnt=0;
	printf_s("100..200之间不能被3整除的数有：\n");
	for(int n=100;n<=200;n++){
		if(n%3==0){
			continue;
		}
		cnt++;
		printf_s("%d ",n);
		
		if(cnt%5==0) printf_s("\n");
	}
	return 0;
}
