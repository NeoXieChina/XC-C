#include <stdio.h>
#include <stdlib.h>
typedef struct BOOKORDER{
	char ISBN[14];
	char bookName[21];
	char bookAuthor[11];
	float bookPrice;
	int orderCnt;
}BOOKORDERTYPE;
int main(){
	FILE *fp=NULL;
	if((fp=fopen("binFile.dat","ab+"))==NULL){
		printf_s("\n建立文件失败！");
		exit(0);
	}
	printf_s("\n请确定图书种类：");
	int bookCategory=0;
	scanf_s("%d",&bookCategory);
	BOOKORDERTYPE bookOderInfo[bookCategory];
	printf_s("\n===输入图书订购信息===");
	for(int i=0;i<bookCategory;i++){
		system("cls");
		printf_s("\n请输入第%d本教材的征订信息",i+1);
		fflush(stdin);
		printf_s("\nISBN:");
		gets(bookOderInfo[i].ISBN);
		fflush(stdin);
		printf_s("\n图书名称：");
		gets(bookOderInfo[i].bookName);
		fflush(stdin);
		printf_s("\n图书第一作者：");
		gets(bookOderInfo[i].bookAuthor);
		fflush(stdin);
		printf_s("\n图书单价：");
		scanf_s("%f",&bookOderInfo[i].bookPrice);
		fflush(stdin);
		printf_s("\n订购数量：");
		scanf_s("%d",&bookOderInfo[i].orderCnt);
	}
	fwrite(bookOderInfo,sizeof(BOOKORDERTYPE),bookCategory,fp);
//fwrite(bookOderInfo,sizeof(bookOrderInfo),1,fp);
//移动读写位置标记到文件开始
	rewind(fp);
//显示图书订购信息
	BOOKORDERTYPE bookTemp;
	printf_s("\n===图书信息===");
	printf_s("\n%14s%21s%11s%6s%5s\n","ISBN","书名","第一作者","单价","数量");
	while(!feof(fp)){
		fread(&bookTemp,sizeof(BOOKORDERTYPE),1,fp);
		printf_s("%14s",bookTemp.ISBN);
		printf_s("%21s",bookTemp.bookName);
		printf_s("%11s",bookTemp.bookAuthor);
		printf_s("%6.2f",bookTemp.bookPrice);
		printf_s("%5d",bookTemp.orderCnt);
		printf_s("\n");
	}
	rewind(fp);
	printf_s("\n当前记录：%ld",ftell(fp));
//查找图书
	printf_s("\n请输入要查找的图书记录：");
	int recordNo=0;
	scanf_s("%d",&recordNo);
	fseek(fp,(long)sizeof(BOOKORDERTYPE)*(recordNo-1),SEEK_SET);
//BOOKORDERTYPE bookTemp;
	if(fread(&bookTemp,sizeof(BOOKORDERTYPE),1,fp)==1){
//输出图书信息
		printf_s("\n找到的图书信息：");
		printf_s("\nISBN:");
		puts(bookTemp.ISBN);
		printf_s("\n图书名称：");
		puts(bookTemp.bookName);
		printf_s("\n图书第一作者：");
		puts(bookTemp.bookAuthor);
		printf_s("\n图书单价：");
		printf_s("%6.2f",bookTemp.bookPrice);
		printf_s("\n订购数量：");
		printf_s("%5d",bookTemp.orderCnt);
	}else
		printf_s("\n查找失败...");
	return 0;
}

