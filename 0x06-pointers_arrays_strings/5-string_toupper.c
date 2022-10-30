#include "main.h"
#include <string.h>
#include <ctype.h>
/**
*string_toupper - all lowercase of string to uppercase
*@s: string
*Return: changed s
*/
char *string_toupper(char *s)
{
	int i, MAX = strlen(s);

	for (i = 0; i < MAX; i++)
	{
		if (islower(s[i]))
		{
			s[i] = toupper(s[i]);
		}
	}
	return (s);
}
