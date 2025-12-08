#include <stdio.h>
long fac(int n);
//long fac(int);/*也可以*/
int main()
{
	int sum = 0;
	for (int i = 3; i <= 5; i++) {
		sum += fac(i);
	}
	return 0;
}

long fac(int n)
{
	long f = 1;
	for (int j = 1; j <= n; j++) {
		f = f*j;
	}
	return f;
}
