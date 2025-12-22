#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp; //定义文件指针fp
	printf("请输入所用的文件名: ");
	char ch,filename[10];
	scanf("%s",filename); //输入文件名
	fflush(stdin); //用来消化最后输入的回车符
	if((fp=fopen(filename,"w"))==NULL){//打开输出文件并使fp指向此文件
		printf("打开文件失败...\n");
		exit(0);//如果打开出错就输出“打不开”并终止程序
	}
	printf("请输入一串字符(以#结束): ");
	ch=getchar(); //接收从键盘输入的第一个字符
	while(ch!='#'){ //当输入′#′时结束循环
		fputc(ch,fp); //向外存文件输出一个字符
		putchar(ch);//将输出的字符显示在屏幕上
		ch=getchar(); //再接收从键盘输入的一个字符
	}
	fclose(fp); //关闭文件
	return 0;
}

