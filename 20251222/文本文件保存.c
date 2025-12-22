#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
int main(){ 
	FILE *fp; 
	printf("\n请输入字符串个数："); 
	int cnt=0; 
	scanf("%d",&cnt); 
//str是用来存放字符串的二维数组，temp是临时数组 
	char str[cnt][10],temp[10]; 
	printf("\n请输入%d个字符串：\n",cnt); //提示输入字符串 
	for(int i=0;i<cnt;i++) 
		gets(str[i]); //输入字符串 
	int k; 
	for(int i=0;i<cnt-1;i++){//用选择法对字符串排序 
		k=i; 
		for(int j=i+1;j<cnt;j++) 
			if(strcmp(str[k],str[j])>0) 
				k=j; 
		if(k!=i){ 
			strcpy(temp,str[i]); 
			strcpy(str[i],str[k]); 
			strcpy(str[k],temp); 
		} 
	} 
	printf("\n请输入保存文件的路径与名称："); 
	char filename[20]; 
	gets(filename); 
	if((fp=fopen(filename,"w"))==NULL){//打开外存文件 
		printf("\n打开文件失败！"); 
		exit(0); 
	} 
	printf("\n排序后：\n"); 
	for(int i=0;i<cnt;i++){ 
		fputs(str[i],fp); 
		fputs("\n",fp); 
//向外存文件写一个字符串，然后输出一个换行符 
		printf("%s\n",str[i]); //在屏幕上显示 
	} 
	return 0; 
}

