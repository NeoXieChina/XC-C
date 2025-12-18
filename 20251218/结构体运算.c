#include <stdio.h>
#include <math.h>
union ShareSpaceType {
	char ch;
	int i;
	double x;
};
int main()
{
	union ShareSpaceType u1 = {'\0'}, u2 = {123},*p;
	u2 = u1;
	p = &u2;
	u2.i = 1234;
	printf("\n共用体变量成员值ch：%c,i:%d,x:%lf.", u2.ch, p->i, (*p).x);
	return 0;
}
