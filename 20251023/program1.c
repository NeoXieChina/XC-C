#include <stdio.h>
int main()
{
	char lowerCh,upperCh;
	lowerCh = getchar();//从键盘读取一个小写字母，赋值给字符变量lowerCh
	upperCh = lowerCh-32;  //转换为大写字母
	//输出lowerCh,upperCh的值
	printf("输入的小写字母是：%c，对应的大写字母是：%c\n",lowerCh,upperCh);
	return 0;
}
