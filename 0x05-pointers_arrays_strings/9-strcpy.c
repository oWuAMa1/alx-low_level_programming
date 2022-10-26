#include "main.h"
#include <string.h>
/**
*_strcpy - copy string pointed by src with '\0' to the buffer pointed by dest
*@dest: pointer
*@src: pointer
*Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
