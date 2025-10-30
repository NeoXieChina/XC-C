#include <stdio.h>
int main()
{
	int higherByteCode,lowerByteCode;
	printf("\n请输入一个汉字：");
	putchar(higherByteCode=getchar());
	putchar(lowerByteCode=getchar());
	printf("的内码是：0x%02x%02x（十进制：%d,%d）\n",higherByteCode,lowerByteCode,higherByteCode,lowerByteCode);
	return 0;
}
