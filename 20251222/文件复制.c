#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *in,*out; //定义指向FILE类型文件的指针变量
	char ch,infile[10],outfile[10]; //定义两个字符数组，分别存放两个数据文件名
	printf("输入读入文件的名字:"); scanf("%s",infile); //输入一个输入文件的名字
	printf("输入输出文件的名字:"); scanf("%s",outfile); //输入一个输出文件的名字
	if((in=fopen(infile,"r"))==NULL) {printf("打开源文件失败！\n");exit(0);}//打开输入文件
	if((out=fopen(outfile,"w"))==NULL) {printf("打开目标文件失败！\n");exit(0);}//打开输出文件
	ch=fgetc(in); //从输入文件读入一个字符，赋给变量ch
	while(!feof(in)){//如果未遇到输入文件的结束标志
		fputc(ch,out);
		putchar(ch);
		ch=fgetc(in);
	}
	putchar(10);//显示完全部字符后换行
	fclose(in); fclose(out);//关闭输入输出文件
	return 0;
}

