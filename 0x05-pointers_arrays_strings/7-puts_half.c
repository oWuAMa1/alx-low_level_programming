#include "main.h"
#include <string.h>
/**
*puts_half - prints half of string
*@str: string
*/
void puts_half(char *str)
{
	int i;

	int MAX = strlen(str);

	if (MAX % 2 == 0)
	{
		for (i = MAX / 2; i < MAX; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (MAX + 1) / 2; i < MAX; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
