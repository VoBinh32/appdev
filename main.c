// this is main.c
#include <stdio.h>
#include "screen.h"
void foo(void);

int main(){
	clearScreen();
	setColors(33,45);
	printf("Printed from main .\n");
	resetColors();
	printf("Another message\n");
	getchar();
}
