#include <ctype.h>
/**
*_isdigit - entry point
*@c: integer parameter
*Desc: checks for a digit 0 through 9
*Return: either 0 if false or 1 if tru
*/
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
