#include "main.h"
#include <string.h>
/**
*_strncat - strcat n bytes of a string into another
*@dest: a string
*@src: a string to be concatted
*@n: integer
*Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
