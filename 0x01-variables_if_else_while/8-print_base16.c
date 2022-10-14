#include <stdio.h>
/**
*main - entry point
*Desc.: print numbers of base 16 in lowercase
*Return: Always 0
*/
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
