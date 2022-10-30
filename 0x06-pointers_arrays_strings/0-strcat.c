#include "main.h"
#include <string.h>
/**
*_strcat - concatstwo strings
*@dest: a string
*@src: string to concat with
*Return: return a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
