#define PI 3.1415926
#include <stdio.h>
int main()
{
	float l, r, s, v;
	printf("input a radus:");
	scanf("%f", &r);
	l = 2.0 * PI*r;
	s = PI*r*r;
	v = 4.0 / 3 * (PI*r*r*r);
	printf("l=%.4f\n s=%.4f\n v=%.4f\n", l, s, v);
	return 0;
}
