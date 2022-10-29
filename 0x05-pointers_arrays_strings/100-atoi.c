#include "main.h"
#include <stdlib.h>
#include <ctype.h>
 #include <string.h>
/**
*_atoi - converts str to integer
*@s : string
*Return: the string converted to an integer
*/
int _atoi(char *s)
{
	unsigned int result = 0;

	int sign = 1;

	int i = 0;

	int count_minus = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			count_minus++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			break;
		}
		i++;
	}
	if (count_minus % 2 == 1)
	{
		sign = -1;
	}
	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + s[i] - '0';
		}
		if (s[i + 1] < '0' || s[i + 1] > '9')
		{
			break;
		}
	}
	return (sign * result);
}
