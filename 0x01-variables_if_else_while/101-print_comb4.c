#include <stdio.h>
/**
*main - entry point
*Desc.: print 3-digit numbers in ascending order separated by , and space
*Return: Always 0-
*/
int main(void)
{
	int x;
	int y;
	int z;

		for (x = '0'; x <= '7'; x++)
		{
			for (y = '1'; y <= '8'; y++)
			{
				for (z = '2'; z <= '9'; z++)
				{
					if (y > x && z > y)
					{
						putchar(x);
						putchar(y);
						putchar(z);
					}
					else
					{
						continue;
					}
					if (x == '7' && y == '8' && z == '9')
					{
						continue;
					}

					putchar(',');
					putchar(' ');
				}
			}
		}

	putchar('\n');
	return (0);
}

