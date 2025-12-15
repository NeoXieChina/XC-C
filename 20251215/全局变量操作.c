#include <stdio.h>
void fun2(char a,char b)
{
	printf("%c %c ",a,b);
}
char a='A',b='B';
void fun1()
{
	a='C';
	b='D';
	return;
}
int main()
{
	fun1();
	printf(" %c %c ",a,b);
	fun2('E','F');
	return 0;
}
