#include "main.h"
#include <stdlib.h>
/**
*create_array - creates an array of characters
*@size: amount of bytes
*@c: character
*Return: Null if size is 0 or a pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *p = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
}
