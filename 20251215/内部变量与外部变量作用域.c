#include <stdio.h>
int a ;
void f1();
void f2();
int main()
{
	f2();
	f1();
	return 0;
}
void f1()
{
	auto int b;
	f2();
}
void f2()
{
	static int c;
}
