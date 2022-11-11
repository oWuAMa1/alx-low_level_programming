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
*strlength - gives the length of a string
*@len: incremented value to give the length
*@s: string
*Return: length of the string
*/
int strlength(int len, char *s)
{
	if (*s != '\0')
	{
		len++;
		strlength(len, ++s);
	}
	else
	{
		return (len);
	}
}
/**
*to_nullchar - take pointer to the nullchar
*@strlen: length of string
*@s: string
*Return: pointer to last character before '\0'
*/
char *to_nullchar(int strlen, char *s)
{
	int j = strlen - 1;

	if (j >= 0)
	{
		to_nullchar(--strlen, ++s);
	}
	else
	{
		return (s - 1);
	}
}
/**
*is_palindrome - checks if a string is a palindrome
*@s: string
*Return: 1 if palindrome and 0 if not
*/
int is_palindrome(char *s)
{
	int i = 0, strlen = strlength(i, s);
	char *str;

	str = to_nullchar(strlen, s);
	return (compare_str(s, str));
}
