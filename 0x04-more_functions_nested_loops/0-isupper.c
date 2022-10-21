#include <ctype.h>
/**
*_isupper - entry point
*@c: integer parameter
*Desc: checks if c is
*Return: either 0 or 1
*/
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
