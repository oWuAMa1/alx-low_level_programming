#include "main.h"
#include <ctype.h>
#include <string.h>
/**
*cap_string - caps first letter of every word
*@s: string
*Return: changed string
*/
char *cap_string(char *s)
{
	int i, MAX = strlen(s);

	for (i = 0; i < MAX; i++)
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			if (isalpha(s[i + 1]))
			{
				s[i + 1] = toupper(s[i + 1]);
			}
		}
	}
	return (s);
}
