#include <stdio.h>
int main ()
{
	printf ("hd:%hd\n",(short int)-1);
	printf ("hx:%hx\n",(unsigned short int)-1);
	printf ("hhd:%hhd\n",'a');
	printf ("hhx:%hhx\n",(unsigned char)97);
	printf ("ld:%ld\n",-123L);
	printf ("lx:%lx\n",123UL);
	printf ("lld:%lld\n",-123LL);
	printf ("llx:%llx\n",123ULL);
	printf ("Lg:%Lg\n",0.01L);
	printf ("Lf:%Lf\n",-0.01L);
	return 0;
}
