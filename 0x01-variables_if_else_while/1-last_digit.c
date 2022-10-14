#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - entry point
*Desc.: checking comparison
*Return: Always 0
*/
int main(void)

{

	int n;
	int last;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		last = n % 10;
		printf("Last digit of %d is and is %d\n greater than 5\n", n, last);
	}
	else if (n == 0)
	{
		last = n % 10;
		printf("Last digit of %d is %d\n and is 0\n", n, last);
	}
	else if (n < 6 && !0)
	{
		last = n % 10;
		printf("Last digit of %d is %d\n and is less than 6 and not 0\n", n, last);
	}
	/* your code goes there */

	return (0);

}
