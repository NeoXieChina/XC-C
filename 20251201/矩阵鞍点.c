#include <stdio.h>
int main()
{
	int a[3][3] = {{1, 2, 3}, {4, 5, 6}, { 7, 8, 9}};
	int maxnum, minnum, rows;
	for (int i = 0; i < 3; i++) {
		rows = 0, maxnum = a[i][0];
		for (int j = 1; j < 3; j++) {
			if (a[i][j] > maxnum) {
				maxnum = a[i][j];
				rows = j;
			}
		}
		minnum = a[0][rows];
		for (int k = 1; k < 3; k++) {
			if (a[k][rows] < minnum) {
				minnum = a[k][rows];
			}
		}
		if (maxnum == minnum) {
			printf_s("鞍点是：%d\n", maxnum);
			break;
		}
	}
	return 0;
}
