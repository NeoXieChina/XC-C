#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
	int nOpNum1 = 0, nOpNum2 = 0, nSum = 0;
	char *pArgv = argv[1];
	char cOperator;
	while (isdigit(*pArgv)) {
		nOpNum1 = nOpNum2 * 10 + (*pArgv - '0');
		pArgv++;
	}
	cOperator = *pArgv;
	pArgv++;
	while (isdigit(*pArgv) && (*pArgv) != '\0') {
		nOpNum2 = nOpNum2 * 10 + (*pArgv - '0');
		pArgv++;
	}
	switch (cOperator) {
		case '+':
			nSum = nOpNum1 + nOpNum2;
			break;
		case '-':
			nSum = nOpNum1 - nOpNum2;
			break;
		case '*':
			nSum = nOpNum1 * nOpNum2;
			break;
		case '/':
			if (nOpNum2 != 0)
				nSum = nOpNum1 / nOpNum2;
			else {
				printf("表达式错误！");
				exit(0);
			}
			break;
		default:
			printf("表达式错误！");
			break;
	}
	printf("=%d\n",nSum);
	return 0;
}
