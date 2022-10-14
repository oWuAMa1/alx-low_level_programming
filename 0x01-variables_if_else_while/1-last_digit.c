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
	if (n % 10 > 5)
	{
		last = n % 10;
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (n % 10 == 0)
	{
		last = n % 10;
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else if (n % 10 < 6 && !0)
	{
		last = n % 10;
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	/* your code goes there */

	return (0);

}
