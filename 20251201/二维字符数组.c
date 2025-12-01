#include <stdio.h>
int main() {
	char a[][10] = {
		"Morning",
		"Afternoon",
		"Evening",
		"Night"
	};
	printf_s("%s\n", a[1]);
	return 0;
}
