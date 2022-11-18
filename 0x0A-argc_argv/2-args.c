#include <stdio.h>
/**
*main - prints all the arguments it receives even the first one
*@argc: argument count
*@argv:  an array of pointers to each argument
*Return: Always 0 for success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
