#include "main.h"
/**
*root_of_num - helper function to find the root
*@a: an integer
*@b: an integer
*Return: returns root of num
*/
int root_of_num(int a, int b)
{
	if (a * a != b)
	{
		return (root_of_num(++a, b));
	}
	else
	{
		return (a);
	}
}
/**
*_sqrt_recursion - finds the square root of a number
*@n: an integer
*Return: result
*/
int _sqrt_recursion(int n)
{
	int result, i = 0;

	if (n < 0 || n % 10 == 2 || n % 10 == 3 || n % 10 == 7 || n % 10 == 8)
	{
		return (-1);
	}
	else
	{
		result = root_of_num(i, n);
		return (result);
	}

}
