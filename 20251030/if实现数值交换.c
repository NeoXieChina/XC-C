#include<stdio.h>
int main(){
	float x,y,t;
	
	printf_s("\n请输入两个实数（逗号间隔）：");
	scanf_s("%f,%f",&x,&y);
	
	if(x>y){ //将x和y的值互换
		t=x;x=y;y=t;
	}
	printf_s("\n由大到小顺序是：%5.2f,%5.2f\n",x,y);
	return 0;
}
