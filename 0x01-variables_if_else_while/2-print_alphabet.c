#include <stdio.h>
#include <ctype.h>
/**
*main - entry point
*Desc.: print alphabets in lower case
*Return: Always 0
*/
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{

		putchar(x);

	}
	putchar('\n');

	return (0);
}
