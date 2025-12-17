#include <stdio.h>
int main()
{
	struct a{int x;int y;}num[2]={{20,5},{6,7}};
	printf("%d\n",num[0].x/num[0].y*num[1].y);
	return 0;
}
