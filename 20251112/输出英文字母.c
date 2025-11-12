#include <stdio.h>
int main()
{
	char Ch='A';
	for(int i=1;i<=7;i++){
		for(int j=1;j<=i;j++,Ch++){
			if(Ch>='A' && Ch<='Z')
				if(Ch!='V'){
					putchar(Ch);
				}
			else{}
			else
				break;
		}
		printf_s("\n");
	}
	return 0;
}
