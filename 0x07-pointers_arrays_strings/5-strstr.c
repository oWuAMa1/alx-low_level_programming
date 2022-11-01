#include "main.h"
#include <string.h>
/**
*_strstr - locates a substring
*@haystack: string
*@needle: substringi
*Return: ptr to beginning of located substr, or NULL if substr is not found
*/
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
