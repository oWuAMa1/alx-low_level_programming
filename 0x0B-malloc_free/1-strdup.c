#include "main.h"
#include <stdlib.h>
/**
*_strdup - a function that duplicates a string
*@str: a pointer to the string
*Return: Null if str is Null or on success, a pointer to the duplicated string
*/
char *_strdup(char *str)
{
	int i = 0, count = 0;

	char *p;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	while (i < count)
	{
		str--;
		i++;
	}
	p = malloc(sizeof(char) * count);

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < count)
		{
			p[i] = *str;
			i++;
			str++;
		}
		return (p);
	}
}
