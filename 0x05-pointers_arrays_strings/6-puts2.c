#include "main.h"
#include <string.h>
/**
*puts2 - prints every other character of a string
*@str : string
*/
void puts2(char *str)
{
	int i;

	int MAX = strlen(str);

	for (i = 0; i < MAX; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
