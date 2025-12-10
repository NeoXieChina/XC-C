#include <stdio.h>
void inverseArray(int x[], int n);
void outputArray(int arr[], int n);
int main()
{
	int a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};
	printf("原数组：\n");
	outputArray(a, 10);
	inverseArray(a, 10);
	printf("倒置后：\n");
	outputArray(a, 10);
	return 0;
}
void inverseArray(int x[], int n)
{
	int temp, i, j, m = (n - 1) / 2;
	for (i = 0; i <= m; i++) {
		j = n - 1 - i;
		temp = x[i];
		x[i] = x[j];
		x[j] = temp;
	}
}
void outputArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%4d", arr[i]);
	printf("\n");
}
