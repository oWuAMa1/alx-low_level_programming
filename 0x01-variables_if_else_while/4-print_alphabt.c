#include <stdio.h>
/**
*main - entry point
*Desc.: print in lowercase without e and q
*Return: Always 0
*/
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
		putchar(x);
		}
	}
	putchar('\n');

	return (0);

}
