#include <stdio.h>
#include <stdlib.h>
#define SUM 200000 //捐款总金额20万
int main()
{
	float amountByOne=0,averByOne=0,totalAmount=0;
	int cnt =0;//捐款人次
	
	do{
		system("cls");
		printf_s("\n====西昌学院爱心捐款====");
		printf_s("\n请填写您所捐款金额：");
		scanf_s("%f",&amountByOne);
		printf_s("\n非常感谢！");
		cnt++;
		totalAmount+=amountByOne;
		if(totalAmount>=SUM) break;
	}while(1);
	averByOne=totalAmount/cnt;
	printf_s("\n本次募捐已满，谢谢！");
	printf_s("\n共捐款%d人次\n平均每人次捐款%10.2f元。",cnt,averByOne);
	return 0;
}
