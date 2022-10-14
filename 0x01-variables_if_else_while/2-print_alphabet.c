#include <stdio.h>
#include <ctype.h>
/**
*main - entry point
*Desc.: print alphabets in lower case
*Return: Always 0
*/
int main(void)
{

	for (int x = 'A'; x <= 'Z'; x++)
	{
		int lowerCase = tolower(x);

		putchar(lowerCase);
	}

	return (0);
}
