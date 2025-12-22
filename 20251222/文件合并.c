#include<stdio.h>
#include <stdlib.h>
int main(){
	FILE *in,*out;
	char ch,infile[10],outfile[10];
	printf("Enter the infile name："); scanf("%s",infile);
	printf("Enter the outfile name：");scanf("%s",outfile);
	if((in=fopen(infile,"r"))==NULL){
		printf("can not open infile\n"); exit(0);
	}
	if((out=fopen(outfile,"w"))==NULL){
		printf("cannotopenoutfile\n"); exit(0);
	}
	while(!feof(in))
		fputc(fgetc(in),out);
	fclose(in);fclose(out);
	return 0;
}

