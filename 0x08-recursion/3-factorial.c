#include "main.h"
/**
*factorial - calculates the factorial of a number
*@n: number
*Return: return -1 means an error else it returns factorial of n
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
