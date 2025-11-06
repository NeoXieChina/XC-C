#include <stdio.h>
int main()
{
	int x,a=1,b=1;
	while(1){
		scanf_s("%d",&x);
		if(x>0){a*=x;break;}
		if(x<0){b*=x;continue;}
		printf_s("%d,%d\n",a,b);
	}
	return 0;
}
