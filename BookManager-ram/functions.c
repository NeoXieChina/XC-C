#include "main.h"
int Search(char isbn[14], struct textbook *TextBook, int BookNumber)
{
	int had = HadData(TextBook, BookNumber);
	if (had <= 0) {
		printf("您还没有添加数据！");
		exit(0);
	} else {
		int isfound = 0;
		int i;
		for (i = 0; i < BookNumber; i++) {
			if (strcmp(isbn, TextBook[i].isbn) == 0) {
				printf("\n================ 教材详情 =================\n");
				printf("书名：      %s\n", TextBook[i].name);
				printf("ISBN：      %s\n", TextBook[i].isbn);
				printf("类型：      %s\n", TextBook[i].type);
				printf("出版社：    %s\n", TextBook[i].publishers);
				printf("编者：      %s\n", TextBook[i].authers);
				printf("征订专业：  %s\n", TextBook[i].major);
				printf("征订年级：  %u\n", TextBook[i].grade);
				printf("征订人数：  %u\n", TextBook[i].number);
				printf("征订单价：  %u 元\n", TextBook[i].PerPrice);
				printf("合计：      %u 元\n", TextBook[i].total);
				printf("联系电话：  %s\n", TextBook[i].tel);
				printf("联系人：    %s\n", TextBook[i].people);
				isfound = 1;
				break;
			}
		}
		if (isfound) {
			printf("\n成功查找到结果。");
			printf("\n\n按回车继续...");
			fflush(stdin);
			getchar();
			return i;
		} else {
			printf("\n查找失败，请确认是否输入正确!");
			printf("\n\n按回车继续...");
			fflush(stdin);
			getchar();
			return 'F';
		}
	}
}
int Search_slience(char isbn[14], struct textbook *TextBook, int BookNumber)
{
	int had = HadData(TextBook, BookNumber);
	if (had <= 0)
		exit(0);
	else {
		int isfound = 0;
		int i;
		for (i = 0; i < BookNumber; i++) {
			if (strcmp(isbn, TextBook[i].isbn) == 0) {
				isfound = 1;
				break;
			}
		}
		if (isfound)
			return i;
		else
			return 'F';

	}
}
int Add(struct textbook *TextBook, int BookNumber)
{
	int had = HadData(TextBook, BookNumber);
	printf("\n请输入想要添加的图书的ISBN编码：");
	fflush(stdin);
	char isbn[14];
	scanf_s("%s", isbn);
	int isok = Search_slience(isbn, TextBook, BookNumber);
	if (isok != 'F') {
		printf("\n图书已存在！");
		exit(0);
	} else {
		createItem(TextBook, had, 100, 1, "书名", 1);
		strcpy(TextBook[had].isbn, isbn);
		createItem(TextBook, had, 200, 1, "类型", 3);
		createItem(TextBook, had, 40, 1, "出版社", 4);
		createItem(TextBook, had, 100, 1, "编者", 5);
		createItem(TextBook, had, 100, 1, "征订专业", 6);
		createItem(TextBook, had, 0, 2, "征订年级", 7);
		createItem(TextBook, had, 0, 2, "征订人数", 8);
		createItem(TextBook, had, 0, 2, "征订单价", 9);
		createItem(TextBook, had, 15, 1, "联系电话", 10);
		createItem(TextBook, had, 10, 1, "联系人", 11);
	}
}
void Edit(char isbn[14], struct textbook * TextBook, int BookNumber)
{
	int isok = Search(isbn, TextBook, BookNumber);
	if (isok == 'F') exit(0);
	else {
		printf("\n是否修改？（Y|N(default))");
		if ('Y' == getchar()) {
			do {
				printf("\nA.书名");
				printf("\nB.ISBN");
				printf("\nC.类型");
				printf("\nD.出版社");
				printf("\nE.编者");
				printf("\nF.征订专业");
				printf("\nG.征订年级");
				printf("\nH.征订人数");
				printf("\nI.征订单价");
				printf("\nJ.联系电话");
				printf("\nK.联系人");
				printf("\nL.返回菜单");
				fflush(stdin);
				printf("\n请选择需要修改的项目：");
				switch (getchar()) {
					case 'A':
						changeItem(TextBook, isok, 100, 1, "书名", 1);
						break;
					case 'B':
						changeItem(TextBook, isok, 14, 1, "ISBN", 2);
						break;
					case 'C':
						changeItem(TextBook, isok, 200, 1, "类型", 3);
						break;
					case 'D':
						changeItem(TextBook, isok, 40, 1, "出版社", 4);
						break;
					case 'E':
						changeItem(TextBook, isok, 100, 1, "编者", 5);
						break;
					case 'F':
						changeItem(TextBook, isok, 100, 1, "征订专业", 6);
						break;
					case 'G':
						changeItem(TextBook, isok, 0, 2, "征订年级", 7);
						break;
					case 'H':
						changeItem(TextBook, isok, 0, 2, "征订人数", 8);
						break;
					case 'I':
						changeItem(TextBook, isok, 0, 2, "征订单价", 9);
						break;
					case 'J':
						changeItem(TextBook, isok, 15, 1, "联系电话", 10);
						break;
					case 'K':
						changeItem(TextBook, isok, 10, 1, "联系人", 11);
						break;
					case 'L':
						return;
						break;
				}
			} while (1);

		}
	}
}

void Delete(char isbn[14], struct textbook * TextBook, int BookNumber)
{
	int had = HadData(TextBook, BookNumber);
	if (had <= 0) {
		printf("您还没有添加数据！");
		exit(0);
	} else {
		int isok = Search(isbn, TextBook, BookNumber);
		if (isok == 'F') exit(0);
		else {
			printf("\n是否删除？（Y|N）：");
			fflush(stdin);
			while (1) {
				if (getchar() == 'Y') {
					for (int i = isok; i < had - 1; i++)
						TextBook[i] = TextBook[i + 1];
					memset(&TextBook[had - 1], 0, sizeof(struct textbook));
					printf("\n删除成功！");
					sleep(1);
					Print(TextBook, BookNumber);
					break;
				} else if (getchar() == 'N') {
					break;
				} else {
					fflush(stdin);
					printf("\n请重新输入！");
					sleep(1);
				}
			}
		}
	}

}

void Print(struct textbook * TextBook, int BookNumber)
{
	int had = HadData(TextBook, BookNumber);
	if (had <= 0) {
		printf("您还没有添加数据！");
		exit(0);
	}
	printf("\n%-30.30s %-15.15s %-12.12s %-20.20s %-15.15s %-15.15s %6s %6s %6s %8s %-12.12s %-8.8s\n", "书名", "ISBN", "类型", "出版社", "编者", "专业", "年级", "人数", "单价", "合计", "电话", "联系人");
	for (int i = 0; i < had; i++) {
		printf("%-30.30s %-15.15s %-12.12s %-20.20s %-15.15s %-15.15s %6u %6u %6u %8u %-12.12s %-8.8s\n", TextBook[i].name, TextBook[i].isbn, TextBook[i].type, TextBook[i].publishers, TextBook[i].authers, TextBook[i].major, TextBook[i].grade, TextBook[i].number, TextBook[i].PerPrice, TextBook[i].total, TextBook[i].tel, TextBook[i].people);
	}
	printf("\n您登记的信息共 %d 条记录。\n", had);
	printf("\n\n按回车继续...");
	fflush(stdin);
	getchar();
}

int HadData(struct textbook * TextBook, int BookNumber)
{
	int had = 0;
	for (int i = 0; i < BookNumber; i++)
		if (TextBook[i].isbn[0] != '\0' || TextBook[i].name[0] != '\0')  had++;
	return had;
}

void changeItem(struct textbook * TextBook, int id, int length, int type, char info[10], int heads_id)
{
	char *charP;
	unsigned int * intP;
	switch (heads_id) {
		case 1:
			charP = TextBook[id].name;
			break;
		case 2:
			charP = TextBook[id].isbn;
			break;
		case 3:
			charP = TextBook[id].type;
			break;
		case 4:
			charP = TextBook[id].publishers;
			break;
		case 5:
			charP = TextBook[id].authers;
			break;
		case 6:
			charP = TextBook[id].major;
			break;
		case 7:
			intP = &(TextBook[id].grade);
			break;
		case 8:
			intP = &(TextBook[id].number);
			break;
		case 9:
			intP = &(TextBook[id].PerPrice);
			break;
		case 10:
			charP = TextBook[id].tel;
			break;
		case 11:
			charP = TextBook[id].people;
			break;
	}
	switch (type) {
		case 1: {
			fflush(stdin);
			printf("\n请输入修改后的%s:", info);
			scanf_s("%s", charP);
			printf("\n您输入的是：%s", charP);
			printf("\n\n按回车继续...");
			fflush(stdin);
			getchar();
			break;
		}
		case 2: {
			fflush(stdin);
			printf("请输入修改后的%s:", info);
			scanf("%u", intP);
			printf("\n您输入的是：%u", *intP);
			TextBook[id].total = TextBook[id].number * TextBook[id].PerPrice;
			printf("\n\n按回车继续...");
			fflush(stdin);
			getchar();
			break;
		}
	}
}
void createItem(struct textbook * TextBook, int id, int length, int type, char info[10], int heads_id)
{
	char *charP;
	unsigned int * intP;
	switch (heads_id) {
		case 1:
			charP = TextBook[id].name;
			break;
		case 2:
			charP = TextBook[id].isbn;
			break;
		case 3:
			charP = TextBook[id].type;
			break;
		case 4:
			charP = TextBook[id].publishers;
			break;
		case 5:
			charP = TextBook[id].authers;
			break;
		case 6:
			charP = TextBook[id].major;
			break;
		case 7:
			intP = &(TextBook[id].grade);
			break;
		case 8:
			intP = &(TextBook[id].number);
			break;
		case 9:
			intP = &(TextBook[id].PerPrice);
			break;
		case 10:
			charP = TextBook[id].tel;
			break;
		case 11:
			charP = TextBook[id].people;
			break;
	}
	switch (type) {
		case 1: {
			fflush(stdin);
			printf("\n请输入修改后的%s:", info);
			scanf_s("%s", charP);
			printf("\n您输入的是：%s", charP);
			break;
		}
		case 2: {
			fflush(stdin);
			printf("请输入修改后的%s:", info);
			scanf("%u", intP);
			printf("\n您输入的是：%u", *intP);
			TextBook[id].total = TextBook[id].number * TextBook[id].PerPrice;
			break;
		}
	}
}

