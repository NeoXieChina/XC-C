#include <stdio.h>
int main()
{
	char a[]="I am a boy.",b[20],*p1,*p2;
	//p1,p2分别指向a数组和b数组中的第一个元素
	p1=a;
	p2=b;
	for(;*p1!='\0';p1++,p2++) //p1,p2每次自加1
		*p2=*p1; //将p1所指向的元素的值赋给p2所指向的元素
	*p2='\0';//在复制完全部有效字符后加'\0'
	printf_s("字符串1：%s\n",a); //输出a数组中的字符
	printf_s("字符串2：%s\n",b); //输出b数组中的字符
	
	return 0;
}
