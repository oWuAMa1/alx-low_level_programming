#include "main.h"
/**
*print_alphabet_x10 - entry point
*Desc: prints the alphabets in lowercase x10
*/
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
