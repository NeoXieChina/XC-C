#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	//程序启动密码验证
	char passChar1='\0';
	char passChar2='\0';
	char passChar3='\0';
	
	fflush(stdin);
	printf_s("\n请输入程序启动密码：");
	passChar1=getch();putch('!');
	passChar2=getch();putch('!');
	passChar3=getch();putch('!');
	if(passChar1=='1'&& passChar2=='2'&&passChar3=='3'){
		//选择程序功能
		system("cls");//清屏
		printf_s("\n\t====欢迎使用系统===");
		printf_s("\n\t    1.输入数据");
		printf_s("\n\t    2.数据处理");
		printf_s("\n\t    3.输出报表");
		printf_s("\n\t    0.推出系统");
		printf_s("\n\t====================");
		printf_s("\n\t请选择（0|1|2|3）：");
		fflush(stdin);
		char selChar='0';
		selChar=getchar();
		switch (selChar) {
		case '1':
			printf_s("\n\t你选择的是功能1，按任意键继续……");
			break;
		case '2':
			printf_s("\n\t你选择的是功能2，按任意键继续……");
			break;
		case '3':
			printf_s("\n\t你选择的是功能3，按任意键继续……");
			break;
		case '0':
			printf_s("\n\t程序即将退出，按任意键继续……");
			break;
		default:
			printf_s("\n\t选择错误！请重新选择……");
		}
		
		fflush(stdin);
		getch();
	
	}else{
			printf_s("\n程序启动密码错误！欢迎重试...");
	}
	
	return 0;
}
