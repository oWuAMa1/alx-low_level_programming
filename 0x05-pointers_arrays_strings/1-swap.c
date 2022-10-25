#include "main.h"
/**
*swap_int - swaps two integers
*@a: an integer
*@b:a integer
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
