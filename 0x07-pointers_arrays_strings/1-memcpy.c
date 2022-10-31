#include "main.h"
#include <string.h>
/**
*_memcpy - copies a memory area
*@dest: memory area
*@src: memory area
*@n: number of bytes
*Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
