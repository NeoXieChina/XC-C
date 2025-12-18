#include <stdio.h>
struct {//声明无名结构体类型
	int num; //成员num(编号)
	char name[10];//成员name(姓名)
	char sex;//成员sex(性别)
	char job;//成员job(职业) t|s
	union { //声明无名共用体类型
		int class;//成员class(班级)
		char position[10];//成员position(职务)
	} category;//成员category是共用体变量
} person[2];//定义结构体
int main()
{
	int i;
	for (i = 0; i < 2; i++) {
		printf("请输入人员信息数据:\n");
		scanf_s("%d %s %c %c", &person[i].num, &person[i].name, &person[i].sex, &person[i].job);
		if (person[i].job == 's')
			scanf("%d", &person[i].category.class);
		else if (person[i].job == 't')
			scanf("%s", person[i].category.position);
		else
			printf("Input error!");
	}

	printf("\n编号\t姓名\t性别\t职业\t职务|班级\n");
	for (i = 0; i < 2; i++) {
		if (person[i].job == 's')
			printf("%-6d%-10s%-4c%-4c%-10d\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.class);
		else
			printf("%-6d%-10s%-4c%-4c%-10s\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.position);
	}
	return 0;
}
