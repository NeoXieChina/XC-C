//编写一个函数：返回给定的整型一维数组中最大数组元素的值
#include <stdio.h>
int maxFromArray(int a[],int n)
{
	int maxNum=a[0];//假定数组的第一个元素的值最大。
	for(int i=1;i<n;i++){
		if(a[i]>maxNum){
			maxNum=a[i];
		}
	}
	return maxNum;
}
int main ()
{
	
	return 0;
}
