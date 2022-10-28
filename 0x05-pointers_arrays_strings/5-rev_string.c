#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*rev_string - reverses string
*@s : string
*/
void rev_string(char *s)
{
	int MAX = strlen(s);

	int mid = MAX / 2;

	int i;

	char temp;

	for (i = 0; i < mid; i++)
	{
		temp = s[i];
		s[i] = s[MAX - i - 1];
		s[MAX - i - 1] = temp;
	}
}
