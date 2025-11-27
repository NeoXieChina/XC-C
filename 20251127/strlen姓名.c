#include <stdio.h>
#include <string.h>
int main()
{
	char stuName[3][12] = {"张三\0张四", "李四", "王五"};

	printf_s("\n姓名长度：%d个字符。", strlen(stuName[0]));
	printf_s("\n姓名占用的空间大小：%dB", sizeof(stuName[0]));

	return 0;
}
