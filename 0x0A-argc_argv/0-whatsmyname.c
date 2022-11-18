#include <stdio.h>
/**
*main - entry point
*@argc: argument count
*@argv:  an array of pointers to each argument
*Return: Always 0 for success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
