#include "main.h"
#include <stdio.h>
/**
*print_to_98 - entry point
*@n : number
*Desc.: prints from n to 98
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
			{
				continue;
			}
		printf(", ");
		}
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
			{
				continue;
			}
		printf(", ");
		}
	}
	else
	{
		printf("%d", n);
	}
	putchar('\n');
}
