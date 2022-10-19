#include "main.h"
#include <ctype.h>
/**
*_isalpha - entry point
*@c: what will be checked
*Desc.: checks if c is a letter
*Return: 1 if true and 0 if false
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
