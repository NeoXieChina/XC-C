#include <stdio.h>
void copy_string (char*from,char *to);
int main()
{
	char*a="I am Chinese."; //a是char* 型指针变量
	char b[]="I love China!"; //b是字符数组
	char *p=b; //使指针变量p指向b数组首元素
	printf("字符串a=%s\n字符串b=%s\n",a,b); //输出a串和b串
	printf("复制字符串a到字符串b：\n");
	copy_string(a,p); //调用copy_string函数，实参为指针变量
	printf("\n字符串a=%s\n字符串b=%s\n",a,b); //输出改变后的a串和b串
	return 0;
}
void copy_string (char*from,char *to)
{ //定义函数，形参为字符指针变量
	for(;*from!='\0';from++,to++){
		*to=*from;
	}
	*to='\0';
}
//{
//	for(;(*to++=*from++)!='\0';);
//}
