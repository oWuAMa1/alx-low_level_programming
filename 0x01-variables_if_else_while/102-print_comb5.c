#include <stdio.h>
/**
*main - entry point
*Desc.: Prints all possible combinations of two two-digit numbers,
*        ranging from 0-99, separated by a comma followed by a space.
*Return: Always 0.
*/
int main(void)

{

	int a, b;

	for (a = 0; a <= 98; a++)

	{

		for (b = 1; b <= 99; b++)

		{
			if (a >= b)
			{
				continue;
			}
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a == 98 && b == 99)
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
