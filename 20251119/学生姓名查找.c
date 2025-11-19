#include <stdio.h>
#include <string.h>
int main()
{
	char findName[11]="";
	
	char stuName[3][11]={"张三","李四","王五"};
	
	printf_s("\n请输入要查找的学生姓名：");
	gets(findName);
	int isFound=0;
	for(int i=0;i<3;i++){
		if(strcmp(findName,stuName[i])==0){
			isFound=1;
			break;
		}
	}
	
	if(isFound)
		printf_s("\n当前班中有要找的学生！");
	else
		printf_s("\n当前班中没有要找的学生！");
		
	return 0;
}
