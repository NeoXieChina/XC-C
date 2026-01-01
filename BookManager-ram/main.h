#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/*根据不同平台选择指令*/
#ifdef _WIN32
#define CLEAN "cls"
#endif
#ifdef __linux__
#define CLEAN "clear"
#endif
/*教材结构体定义*/
struct textbook {
	char name[100];
	char isbn[14];
	char type[200];
	char publishers[40];
	char authers[100];
	char major[100];
	unsigned int grade;
	unsigned int number;
	unsigned int PerPrice;
	unsigned int total;
	char tel[15];
	char people[10];
};
/*菜单子项定义*/
void Welcome();
int MainMenu();
void SearchMenu(struct textbook *TextBook,int BookNumber);
void AddMenu(struct textbook *TextBook,int BookNumber);
void EditMenu(struct textbook *TextBook,int BookNumber);
void DeleteMenu(struct textbook *TextBook,int BookNumber);
void PrintMenu(struct textbook *TextBook,int BookNumber);
/*菜单主要功能定义*/
int Search_slience(char isbn[14],struct textbook *TextBook,int BookNumber);
int Search(char isbn[14],struct textbook *TextBook,int BookNumber);
int Add(struct textbook *TextBook,int BookNumber);
void Edit(char isbn[14],struct textbook *TextBook,int BookNumber);
void Delete(char isbn[14],struct textbook *TextBook,int BookNumber);
void Print(struct textbook *TextBook,int BookNumber);
/*微小功能拆分*/
int HadData(struct textbook *TextBook, int BookNumber);
void changeItem(struct textbook *TextBook,int id,int length,int type,char info[10],int heads_id);
void createItem(struct textbook *TextBook,int id,int length,int type,char info[10],int heads_id);
