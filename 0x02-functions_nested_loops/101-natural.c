#include "main.h"
#include <stdio.h>
/**
*print_multiple - entry point
*Desc: prints the sum of all multiples of 3 and 5 less than 1024
*/
void print_multiple(void)
{
	int x = 0;

	int y = 0;

	while (x < 1024)
	{
		x = x + 3;
	}
	while (y < 1024)
	{
		y = y + 3;
	}
	printf("%d", x + y);
	printf("\n");
}
