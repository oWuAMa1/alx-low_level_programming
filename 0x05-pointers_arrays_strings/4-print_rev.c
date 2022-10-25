#include "main.h"
#include <string.h>
/**
*print_rev - print reverse of string
*@s: string
*/
void print_rev(char *s)
{
	int i;

	int MAX = strlen(s);

	for (i = MAX; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
