#include "main.h"
#include <string.h>
/**
*_strspn - gets the length of a prefix substring.
*@s: string
*@accept: string to accept
*Return: num of bytes in initial segment of s consisting of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
