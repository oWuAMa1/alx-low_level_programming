#include <stdio.h>
#include <stdlib.h>
/**
*main - multiplies two numbers
*@argc: argument count
*@argv:  an array of pointers to each argument
*Return: Always 0 for success
*/
int main(int argc, char *argv[])
{
	if (argc - 1 == 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
