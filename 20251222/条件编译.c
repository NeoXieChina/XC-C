#include <stdio.h>
#define DEBUG
//#define DEBUG 0 //此时为假
int main()
{
	#ifdef DEBUG
	printf("Debugging\n");
#else
	printf("Not debugging\n");
#endif
	printf("Running\n");
	return 0;
}
