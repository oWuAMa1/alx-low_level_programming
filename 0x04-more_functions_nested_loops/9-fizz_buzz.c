#include <stdio.h>
/**
*main - entry point
*Desc: Fizz Buzz test
*Return: Always 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i == 100)
			{
				continue;
			}
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
