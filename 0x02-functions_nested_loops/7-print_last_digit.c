#include "main.h"
#include <limits.h>
/**
*print_last_digit - entry point
*@n : number
*Desc: prints the last digit of x
*Return: Always 0
*/
int print_last_digit(int n)
{
	int last_num = n % 10;

	if (last_num < 0)
	{
		last_num *= -1;
	}
	_putchar(last_num + '0');
	return (last_num);
}
