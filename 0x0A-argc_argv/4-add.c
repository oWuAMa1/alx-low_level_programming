#include <stdio.h>
#include <stdlib.h>
/**
*main - adds positive integers
*@argc: argument count
*@argv:  an array of pointers to each argument
*Return: Always 0 for success
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) >= 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
