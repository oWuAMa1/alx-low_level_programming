#include "main.h"
#include <stdio.h>
/**
*main - entry point
*Desc: prints the sum of all multiples of 3 and 5 less than 1024
*Return: Always 0
*/
int main(void)
{
	int i, total = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			total += i;
		}
	}
	printf("%d\n", total);
	return (0);
}
