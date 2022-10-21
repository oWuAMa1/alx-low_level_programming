#include "main.h"
/**
*print_line - entry point
*@n: number of lines
*Desc: print n lines
*/
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
