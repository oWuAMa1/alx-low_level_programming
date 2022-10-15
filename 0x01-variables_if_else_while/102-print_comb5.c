#include <stdio.h>
/**
*main - entry point
*Desc.: print combination of two two-digit numbers
*Return: Always 0
*/
int main(void)
{
	int a;
	int b;
	int x;
	int y;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '8'; b++)
		{
			for (x = '0'; x <= '9'; x++)
			{
				for (y = '0'; y <= '9'; y++)
				{
					if (a > x || b >= y)
					{
						continue;
					}
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(x);
					putchar(y);
					if (a == '9' && b == '8' && x == '9' && y == '9')
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
