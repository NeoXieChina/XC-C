#include <stdio.h>
#define PI 3.1415
#define AREA(r) PI*r*r
#define MAX(a,b) ((a)>(b)?(a):(b))
int main()
{
	float x, y, r, s;

	printf("请输入x,y：");
	scanf("%f%f", &x, &y);
	r = MAX(x, y);
	s = AREA(r);
	printf("AREA=%.2f", s);
	return 0;
}
