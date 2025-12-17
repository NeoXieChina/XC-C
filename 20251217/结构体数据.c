#include <stdio.h>
struct student{char name[10];int age;};
int main()
{
	struct student stu[4]={{"zhang",19},{"wang",18},{"li",20},{"zhao",21},};
	struct student *p=stu;
	printf("%s:%d",p[3].name,stu[1].age);
	return 0;
}
