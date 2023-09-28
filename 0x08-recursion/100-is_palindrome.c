#include "main.h"

int length(char *s);
int check(char *s, int start, int end, int m);

/**
 * length - find the length of a string
 * @s: takes string
 * Return: the length
*/

int length(char *s)
{
	int count = 0;

	if (*s > '\0')
	{
		count += length(s + 1) + 1;
	}
	return (count);
}

/**
 * is_palindrome - find if the string is palindmore
 * @s: takes string
 * Return: integer
*/

int is_palindrome(char *s)
{
	int end = length(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - check if the string is palindmore
 * @s: takes string
 * @start: the start of a string
 * @end: the end of a string
 * @m: modulos
 * Return: integer
*/

int check(char *s, int start, int end, int m)
{
	if ((start == end && m != 0) || (start == end + 1 && m == 0))
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (check(s, start + 1, end - 1, m));
	}
}
