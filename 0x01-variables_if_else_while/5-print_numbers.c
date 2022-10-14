#include <stdio.h>
/**
*main - entry point
*Desc.: print from 0 to 9
*Return: Always 0
*/
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}

	return (0);
}
