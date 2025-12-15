#include <stdio.h>
#include "fileB.c"
#include "fileC.c"
#include "fileD.c"
extern void enter_string(char str[]); //对函数的声明
extern void delete_string(char str[],char ch); //对函数的声明
extern void print_string(char str[]); //对函数的声明

int main()
{
	char c,str[80];
	enter_string(str); //调用在其他文件中定义的enter_string函数
	scanf("%c",&c); //输入要求删去的字符
	delete_string(str,c);//调用在其他文件中定义的delete_string函数
	print_string(str); //调用在其他文件中定义的print_string函数
	return 0;
}
