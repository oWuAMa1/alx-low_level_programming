#include <stdio.h>
/**
*main - entry point
*Desc.: print 0-9 with , followed with a space
*Return: Always 0
*/
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);

		if (x == '9')
		{
			continue;
		}
		putchar(',');
		putchar(' ');

	}

	putchar('\n');

	return (0);
}
