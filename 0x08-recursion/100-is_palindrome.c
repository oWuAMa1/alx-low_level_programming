#include "main.h"
/**
*compare_str - compares two strings
*@str1: string 1
*@str2: string 2
*Return: 1 if same and 0 if not
*/
int compare_str(char *str1, char *str2)
{
	if (*str1 != '\0')
	{
		if (*str1 != *str2)
		{
			return (0);
		}
		else
		{
			return (compare_str(++str1, --str2));
		}
	}
	else
	{
		return (1);
	}
}

/**
*to_nullchar - take pointer to the nullchar
*@s: string
*Return: pointer to last character before '\0'
*/
char *to_nullchar(char *s)
{
	if (*s == '\0')
	{
		return (s - 1);
	}
	else
	{
		return (to_nullchar(++s));
	}
}
/**
*is_palindrome - checks if a string is a palindrome
*@s: string
*Return: 1 if palindrome and 0 if not
*/
int is_palindrome(char *s)
{
	char *str = to_nullchar(s);

	return (compare_str(s, str));
}

