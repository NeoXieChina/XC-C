#include <stdio.h>
void swap(int *p1, int *p2); //对swap函数的声明
int main()
{
	int a, b;
	int *pt1,*pt2; //定义两个int *类型的指针变量
	printf("请输入两个整数：");
	scanf("%d,%d", &a, &b); //输入两个整数
	pt1 = &a; //使pt1指向a
	pt2 = &b; //使pt2指向b
	if (a < b)
		swap(pt1, pt2); //如果a<b,调用swap函数
	printf("max=%d,min=%d\n", a, b); //输出结果
	return 0;
}

void swap(int *p1, int *p2)   //定义swap函数
{
	int temp;
	temp = *p1; //使*p1和*p2互换
	*p1 = *p2;
	*p2 = temp;
}
