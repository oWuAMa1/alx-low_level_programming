#include <stdio.h>
/**
*main - prints the number of arguments passed into it excluding itself
*@argc: argument count
*@argv:  an array of pointers to each argument
*Return: Always 0 for success
*/
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
