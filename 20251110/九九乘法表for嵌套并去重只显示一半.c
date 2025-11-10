#include <stdio.h>
int main()
{
	printf_s("\n==========九九乘法表==========\n\n");
	
	printf_s("%3c",' ');//打印左上角空白
	for(int i=1;i<=9;i++)//打印表头
		printf_s("%3d",i);
	printf_s("\n");
	
	for(int i=1;i<=9;i++){
		printf_s("%3d",i);
		for(int j=1;j<=i;j++){
			printf_s("%3d",i*j);
		}
		printf_s("\n");
	}
	printf_s("\n==============================\n");
	return 0;
}
