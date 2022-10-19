#include "main.h"
#include <ctype.h>
/**
*_islower - entry point
*@c: a parameter
*Desc.: checks if character is lowercase
*Return: returns 1 if true and 0 if false
*/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
