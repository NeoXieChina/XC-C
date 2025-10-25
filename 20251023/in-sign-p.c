#include <stdio.h>
int main ()
{
	printf("+\n");
	printf("|");
	printf ("%+d",123);
	printf("|");
	printf ("%+d",0);
	printf("|");
	printf ("%+d",-123);
	printf("|");
	printf("\n-\n");
	printf("|");
	printf ("%6d",123);
	printf("|");
	printf ("%-6d",123);
	printf("|");
	printf ("%3d",123);
	printf("|");
	printf ("%-3d",123);
	printf("|");
	printf("\n0\n");
	printf("|");
	printf ("%06d",123);
	printf("|");
	printf ("%-06d",123);
	printf("|");
	printf ("%06d",-123);
	printf("|");
	printf("\n#\n");
	printf("|");
	printf ("%#o",123);
	printf("|");
	printf ("%#x",123);
	printf("|");
	return 0;
}
