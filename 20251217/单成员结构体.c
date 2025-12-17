#include <stdio.h>
#include <string.h>
struct str {
	char name[10];
};
int main()
{
	struct str s1, s2;
	strcpy(s1.name, "123");
	strcpy(s2.name, "456");
	s1 = s2;
	printf("%s\n", s1.name);
	return 0;
}
