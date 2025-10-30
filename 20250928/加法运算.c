#include <stdio.h> //这是编译预处理指令
int main ()        //定义主函数
{                 //函数开始的标志
	int a,b,sum;  //本行是程序的声明部分，定义a,b,sum为整型变量
	scanf_s("%d,%d",&a,&b); //从标准输入设备上输入两个整数，并存放至变量a,b的存储空间
	sum=a+b;      //进行a+b的运算，并将结果存放在变量sum中
	printf_s("%d与%d的和=%d。\n",a,b,sum); //输出结果
	return 0;     //函数执行完毕时返回函数值0
}                 //函数结束的标志
