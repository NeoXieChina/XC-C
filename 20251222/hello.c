#include<stdio.h>
int main(){
	FILE *fp;
	fp=fopen("filea.txt","w");
	fprintf(fp,"abc");
	fclose(fp);
	return 0;
}
