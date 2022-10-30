#include "main.h"
#include <string.h>
/**
*_strncpy - copies n bytes of string to another
*@dest: string
*@src: string
*@n: number
*Return: a pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
