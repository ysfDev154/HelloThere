#include <stdio.h>

int main(void) {
	const char* pc = "Hello There!\n";
	do {
		printf("%c", *pc);
	} while(*(++pc));
	return 0;
}
