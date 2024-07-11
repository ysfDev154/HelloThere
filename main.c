#include <stdio.h>

int main(void) {
	char* pc = "Hello There!\n";
	do { printf("%c", *pc); } while(*(++pc));
	return 0;
}
