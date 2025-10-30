#include <stdio.h>
int main()
{
	printf("d\n");
	printf("%d ",123);
	printf("%d ",-123);
	printf("\nu\n");
	printf("%u ",123);
	printf("%u ",-123);
	printf("\no\n");
	printf("%o ",123);
	printf("%o ",-123);
	printf("\nx X\n");
	printf("%x ",123);
	printf("%X ",123);
	printf("\nc\n");
	printf("%c ",123);
	printf("%c ",'0'+3);
	printf("\na\n");
	printf("%a ",0.123);
	printf("\ne\n");
	printf("%e ",0.123);
	printf("\nf\n");
	printf("%f ",12.3);
	printf("\ng G\n");
	printf("%g ",-123.0);
	printf("%a ",-123456789.0);
	printf("\np\n");
	int a;
	printf("%p ",&a);
	printf("%p ",123);
	printf("\ns\n");
	printf("%s ","123456");
	printf("\nN\n");
	printf("12345%n ",&a);
	printf("，则前面输出%d个字符 。",a);
	return 0;
}
