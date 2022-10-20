#include "main.h"
#include <stdio.h>
/**
*times_table - entry point
*Desc. prints 9 times table
*/
void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			printf("%d", x * y);
			if (y == 9)
			{
				continue;
			}
			if ((x * y == 8 && x > 1) || (x == 3 && y == 3) || (x >= 5 && y == 1))
			{
				printf(", ");
			}
			else if (x * y < 10)
			{
				printf(",  ");
			}
			else
			{
				printf(", ");
			}
		}
	printf("\n");
	}
}
