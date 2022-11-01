#include "main.h"
#include <string.h>
/**
*_strpbrk - searches a string for any of a set of bytes.
*@s: string
*@accept: string to search
*Return: locates the first occurrence in s of any of the bytes in accept.
*/
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
