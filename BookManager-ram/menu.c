#include "main.h"
//初始化
void Welcome()
{
	printf("\n\n\n\n\n\n\n\n\t启动中，请稍后。\n");
	sleep(1);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\t启动中，请稍后。。\n");
	sleep(1);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\t启动中，请稍后。。。\n");
	sleep(1);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\t启动中，请稍后。。。。\n");
	sleep(1);
	system("cls");
	sleep(1);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\t欢  迎  使  用  西  昌  学  院  教  材  征  订  管  理  系  统  !  \n");
	printf("\n\tWelcome to the Xichang College Textbook Ordering Management System!\n\n\n\n\n");
	sleep(5);
}
//菜单函数
int MainMenu()
{
	system("cls");
	printf("\n============ 首页菜单 ============\n");
	printf("\t1.查询征订信息\n");
	printf("\t2.添加征订信息\n");
	printf("\t3.修改征订信息\n");
	printf("\t4.删除征订信息\n");
	printf("\t5.打印征订信息\n");
	printf("\t6.退出系统\n");
	printf("\t7.重启系统\n");
	fflush(stdin);
	printf("请输入您要进入的选项的编号：");
	switch (getchar()) {
		case '1':
			return 1;
			break;
		case '2':
			return 2;
			break;
		case '3':
			return 3;
			break;
		case '4':
			return 4;
			break;
		case '5':
			return 5;
			break;
		case '6':
			return 0;
			break;
		case '7':
			return 7;
			break;
		default:
			return 8;
			break;
	}
}
void SearchMenu(struct textbook *TextBook,int BookNumber)
{
	char isbn[14];
	system(CLEAN);
	printf("\n============ 查询菜单 ============\n");
	fflush(stdin);
	printf("\t1.查询ISBN\n");
	printf("\t2.返回首页\n");
	printf("请输入选项：");
	if (getchar() == '2') return;
	fflush(stdin);
	printf("\n\t请输入ISBN进行查询：");
	scanf("%s", isbn);
	system(CLEAN);
	Search(isbn,TextBook,BookNumber);
}
void AddMenu(struct textbook *TextBook,int BookNumber)
{
	system(CLEAN);
	printf("\n============ 添加菜单 ============\n");
	fflush(stdin);
	printf("\t1.添加订购信息\n");
	printf("\t2.返回首页\n");
	printf("请输入选项：");
	if (getchar() == '2') return;
	fflush(stdin);
	system(CLEAN);
	Add(TextBook,BookNumber);
}
void EditMenu(struct textbook *TextBook,int BookNumber)
{
	char isbn[14];
	system(CLEAN);
	printf("\n============ 修改菜单 ============\n");
	fflush(stdin);
	printf("\t1.修改订购信息\n");
	printf("\t2.返回首页\n");
	printf("请输入选项：");
	if (getchar() == '2')return;
	fflush(stdin);
	printf("\n请输入ISBN进行查找修改项：");
	scanf("%s", isbn);
	system(CLEAN);
	Edit(isbn,TextBook,BookNumber);
}
void DeleteMenu(struct textbook *TextBook,int BookNumber)
{
	char isbn[14];
	system(CLEAN);
	printf("\n============ 删除菜单 ============\n");
	fflush(stdin);
	printf("\t1.删除订购数据\n");
	printf("\t2.返回首页\n");
	printf("请输入选项：");
	if (getchar() == '2') return;
	fflush(stdin);
	printf("\n请输入ISBN进行删除：");
	scanf("%s", isbn);
	system(CLEAN);
	Delete(isbn,TextBook,BookNumber);
}
void PrintMenu(struct textbook *TextBook,int BookNumber)
{
	system(CLEAN);
	printf("\n============ 打印菜单 ============\n");
	fflush(stdin);
	printf("\t1.打印订购数据\n");
	printf("\t2.返回首页\n");
	printf("请输入选项：");
	if (getchar() == '2') return;
	fflush(stdin);
	system(CLEAN);
	Print(TextBook,BookNumber);
}

