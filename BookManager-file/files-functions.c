#include "main.h"
void readfile(FILE *fp, struct textbook *TextBook, int BookNumber)
{
	for (int i = 0; i < BookNumber; i++) {
		int a = fscanf(fp, " %99[^,],%13[^,],%199[^,],%39[^,],%99[^,],%99[^,],%u,%u,%u,%u,%14[^,\r\n],%9[^\r\n]", TextBook[i].name, TextBook[i].isbn, TextBook[i].type, TextBook[i].publishers, TextBook[i].authers, TextBook[i].major, &TextBook[i].grade, &TextBook[i].number, &TextBook[i].PerPrice, &TextBook[i].total, TextBook[i].tel, TextBook[i].people);
		if (a != 12)
			break;
	}
}

void savefile(FILE *fp, struct textbook *TextBook, int BookNumber)
{
	int had = HadData(TextBook, BookNumber);
	for (int i = 0; i < had; i++)
		fprintf(fp, "%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%s,%s\n", TextBook[i].name, TextBook[i].isbn, TextBook[i].type, TextBook[i].publishers, TextBook[i].authers, TextBook[i].major, TextBook[i].grade, TextBook[i].number, TextBook[i].PerPrice, TextBook[i].total, TextBook[i].tel, TextBook[i].people);
}
