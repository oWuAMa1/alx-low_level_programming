#include "main.h"
#include <string.h>
/**
*_strspn - gets the length of a prefix substring.
*@s: string
*@accept: string to accept
*Return: Always 0
*/
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
