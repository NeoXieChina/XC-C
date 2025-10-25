#include <stdio.h>
int main ()
{
	printf("h\n");
	short a;
	scanf("%hd",&a);
	printf("%hd\n",a);
	fflush(stdin);
	printf("hh\n");
	char ch;
	scanf("%hhd",&ch);
	printf("%c\n",ch);
	fflush(stdin);
	printf("l\n");
	long int b;
	scanf("%ld",&b);
	printf("%ld\n",b);
	double y;
	scanf("%lf",&y);
	printf("%lf\n",y);
	fflush(stdin);
	printf("ll\n");
	long long int c;
	scanf("%lld",&c);
	printf("%lld\n",c);
	fflush(stdin);
	printf("L\n");
	long double z;
	scanf("%Lf",&z);
	printf("%Lf\n",z);
	return 0;
}
