#include "main.h"
#include <string.h>
/**
*_strchr - locate a character in a string
*@s: a string
*@c: a character
*Return: a pointer to first occurrence of c in s, or NULL if c is not found
*/
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
