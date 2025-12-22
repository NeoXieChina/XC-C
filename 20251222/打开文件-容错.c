#include <stdio.h> 
#include <stdlib.h> 
int main(){ 
	FILE * fp=NULL; 
	fp=fopen("d:\\abc.txt","w"); 
	if(fp==NULL){//!fp 
		printf_s("\n文件打开失败！程序即将结束..."); 
		exit(0);//退出程序返回到OS 
	} 
	fputs("Hello World!",fp); 
	return 0; 
}

