#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*rev_string - reverses string
*@s : string
*/
void rev_string(char *s)
{

	int i;

	int MAX = strlen(s);

	for (i = MAX; i >= 0; i--)
	{
		s = *s + i;
	}
}
