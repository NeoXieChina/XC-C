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
	if((fp=fopen("binFile.dat","wb"))==NULL){ 
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
	return 0; 
}

