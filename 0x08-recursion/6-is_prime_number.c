#include "main.h"
/**
*if_prime - helper function
*@j: integer that is looped
*@num: number
*Return: 1 if prime and 0 is not
*/
int if_prime(int j, int num)
{
	if (j < 10)
	{
		if (num % j == 0)
		{
			return (0);
		}
		else
		{
			return (if_prime(++j, num));
		}
	}
	else
	{
		return (1);
	}
}
/**
*is_prime_number - checks if n is a prime number
*@n: number
*Return: value of if_prime function
*/
int is_prime_number(int n)
{
/*a prime number has only 1 and itself as factors so start iteration from 2 */
	int i = 2;

	if (n == 2)
	{
		return (1);
	}
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (if_prime(i, n));
	}

}
