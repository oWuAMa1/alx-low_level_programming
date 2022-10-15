#include <stdio.h>
/**
*main - entry point
*Desc.: prints diff. combination of two digits in ascending order
*Return: Always 0
*/
int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '8'; x++)
	{

		for (y = '1'; y <= '9'; y++)
		{
			if (y <= x)
			{
				continue;
			}
			else if (y > x)
			{
				putchar(x);
				putchar(y);
			}
			if (x == '8' && y == '9')
			{
				continue;
			}

			putchar(',');
			putchar(' ');

		}

	}

	putchar('\n');
	return (0);
}
