#include "main.h"
/*数据库文件路径*/
char database[20] = "bookinfo.csv";

int main()
{
	int choice;
	int BookNumber = 1024;
	struct textbook TextBook[1024]={0};/*= {
		{"高等数学（上册）", "9787040512345", "公共基础课", "高等教育出版社", "同济大学数学系", "计算机科学与技术", 1, 120, 45, 5400, "13800138001", "张老师"},
		{"C程序设计（第五版）", "9787302512346", "专业基础课", "清华大学出版社", "谭浩强", "软件工程", 2, 200, 38, 7600, "13900139002", "李主任"},
		{"数据结构（C语言版）", "9787302123456", "专业核心课", "清华大学出版社", "严蔚敏", "人工智能", 2, 150, 42, 6300, "13700137003", "王教授"},
		{"大学英语（综合教程）", "9787544612347", "公共必修课", "上海外语教育出版社", "李观仪", "全校通用", 1, 300, 35, 10500, "13600136004", "刘老师"},
		{"计算机网络（第8版）", "9787121345678", "专业选修课", "电子工业出版社", "谢希仁", "网络工程", 3, 90, 60, 5400, "13500135005", "赵工"},
		{"操作系统概念", "9787111654321", "专业核心课", "机械工业出版社", "Abraham Silberschatz", "信息安全", 3, 80, 75, 6000, "13400134006", "陈博士"},
		{"Python编程：从入门到实践", "9787115543210", "实践课程", "人民邮电出版社", "Eric Matthes", "数据科学", 2, 100, 89, 8900, "13300133007", "周助教"},
		{"线性代数及其应用", "9787040987654", "公共基础课", "高等教育出版社", "David C. Lay", "电子信息工程", 1, 110, 52, 5720, "13200132008", "吴老师"},
		{"数据库系统概论（第6版）", "9787040567890", "专业核心课", "高等教育出版社", "王珊、萨师煊", "大数据技术", 3, 130, 48, 6240, "13100131009", "郑主任"},
		{"离散数学（第3版）", "9787302987654", "专业基础课", "清华大学出版社", "耿素云、屈婉玲", "密码学", 2, 95, 40, 3800, "13000130010", "孙教授"}
	}*/ ;
	FILE* fp = fopen(database, "r+");
	if (fp == NULL)
		fp = fopen(database, "w+");
	if (fp == NULL)
		printf("\n数据库连接失败，请检查权限或查看文件是否被占用！");
	readfile(fp, TextBook, BookNumber);
	//Welcome();
	do {
		choice = MainMenu();
		switch (choice) {
			case 1:
				SearchMenu(TextBook, BookNumber);
				break;
			case 2:
				AddMenu(TextBook, BookNumber);
				break;
			case 3:
				EditMenu(TextBook, BookNumber);
				break;
			case 4:
				DeleteMenu(TextBook, BookNumber);
				break;
			case 5:
				PrintMenu(TextBook, BookNumber);
				break;
			case 6:
				exit(0);
			case 7:
			default:
				continue;
		}
	} while (choice);
	savefile(fp, TextBook, BookNumber);
	fclose(fp);
	return 0;
}
