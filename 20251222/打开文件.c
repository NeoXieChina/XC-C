#include <stdio.h> 
int main(){ 
	FILE * fp=NULL; 
	fp=fopen("d:\\abc.txt","w"); 
	fputs("Hello World!",fp); 
	return 0; 
}
