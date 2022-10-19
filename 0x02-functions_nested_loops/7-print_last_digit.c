#include "main.h"
/**
*print_last_digit - entry point
*@n : number
*Desc: prints the last digit of x
*Return: Always 0
*/
int print_last_digit(int n)
{
	int x = n % 10;

	_putchar(x);
	return (0);
}
