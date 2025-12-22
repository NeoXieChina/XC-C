#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp=NULL;
	if((fp=fopen("99mul.txt","w"))==NULL){
		printf_s("\n建立文件失败！");
		exit(0);
	}
	fprintf_s(fp,"\n=====================================九九乘法表=====================================\n\n");
	fprintf_s(fp,"%4c",' ');//打印左上角空白
	for(int i=1;i<=9;i++)//打印表头
		fprintf_s(fp,"%7d",i);
	fprintf_s(fp,"\n");
	for(int i=1;i<=9;i++){
		fprintf_s(fp,"%3d ",i);
		for(int j=1;j<=i;j++){
			fprintf_s(fp,"%d×%d=%3d ",i,j,i*j);
		}
		fprintf_s(fp,"\n");
	}
	fprintf_s(fp,"\n=====================================================================================\n");
	printf_s("\n建立文件成功，请查看...");
	return 0;
}

