#include <stdio.h>
/**
*main - entry point
*Desc.: print combination of two two-digit numbers
*Return: Always 0
*/
int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '8'; y++)
		{
			putchar(x);
			putchar(y);
			if (x == '9' && y == '8')
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
