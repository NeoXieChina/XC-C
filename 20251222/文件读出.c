#include <stdio.h>
#include <string.h>

int main() {
	FILE *fp;
	char filename[20];
	char str[10];
	
	printf("请输入要读取的文件路径与名称：");
	gets(filename);
	
	fp = fopen(filename, "r");
	if (fp == NULL) {
		printf("打开文件失败！\n");
		return 1;
	}
	
	printf("文件内容如下：\n");
	while (fgets(str, sizeof(str), fp) != NULL) {
		str[strcspn(str, "\n")] = '\0';
		printf("%s\n", str);
	}
	
	fclose(fp);
	return 0;
}
