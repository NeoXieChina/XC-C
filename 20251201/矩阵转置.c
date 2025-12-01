#include <stdio.h>
int main()
{
	int rows=2,cols=3;
	int a[2][3]={{1,2,3},{4,5,6}},b[3][2];
	printf_s("转置前：\n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf_s("%d ",a[i][j]);
		}
		printf_s("\n");
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			b[j][i]=a[i][j];
		}
	}
	printf_s("转置后：\n");
	for(int i=0;i<cols;i++){
		for(int j=0;j<rows;j++){
			printf_s("%d ",b[i][j]);
		}
		printf_s("\n");
	}
	return 0;
}
