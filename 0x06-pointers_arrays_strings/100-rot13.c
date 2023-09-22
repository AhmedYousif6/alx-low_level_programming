#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: takes string
 * Return: ptr to string
*/

char *rot13(char *str)
{
	int i;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = str;

	while (*str)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*str == letters[i])
			{
				*str = rot13[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
