#include <stdio.h>
/**
*main - entry point
*Desc.: print from 0 to 9
*Return: Always 0
*/
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);

}
