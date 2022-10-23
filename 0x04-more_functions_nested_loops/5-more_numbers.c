#include "main.h"
/**
*more_numbers - entry point
*Dec: print 0-14
*/
void more_numbers(void)
{
	char i, j, k, c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c < 10)
			{
				k = c;
			}
			else
			{
				j = c / 10;
				k = c % 10;
				_putchar('0' + j);
			}
			_putchar('0' + k);
		}
		_putchar('\n');
	}
}
