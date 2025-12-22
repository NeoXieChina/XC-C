#include<stdio.h>
int main(){
	FILE*fp;
	int a[10]={1,2,3,0,0},i;
	fp=fopen("d2.dat","wb");
	fwrite(a,sizeof(int),5,fp);
	fwrite(a,sizeof(int),5,fp);
	fclose(fp);
	fp=fopen("d2.dat","rb");
	fread(a,sizeof(int),10,fp);
	fclose(fp);
	for(i=0;i<10;i++)
		printf("%d,",a[i]);
	return 0;
}
