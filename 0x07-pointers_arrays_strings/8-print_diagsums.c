#include "main.h"
#include <stdio.h>
/**
*print_diagsums - prints the sum of each diagonal of a square matrix
*@a: array
*@size: array size
*/
void print_diagsums(int *a, int size)
{
	
	/*bdiag is \ fdiag is / */
	int i, j, *sum_bdiag , *sum_fdiag;

	sum_bdiag = 0;
	sum_fdiag = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum_bdiag += a + (i * size + j) * sizeof(a[i]);
			}
		}
	}
	i = 0, j = size - 1;
	while (i < size)
	{
		sum_fdiag += a + (i * size + j) * sizeof(a[i]);
		j--;
		i++;
	}
	printf("%d, %d\n", *sum_bdiag, *sum_fdiag);
}
