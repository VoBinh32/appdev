#include <stdio.h>
void clearScreen(void)
{
	printf("\033[2J");
	fflush(stdout); //output the escape sequen immediately
}
void setColors(short fg, short bg)
{
	printf("\033[%d;%d;lm");
	fflush(stdout);
}

void resetColors(void)
{
	printf("\033[0m");
	fflush(stdout);
