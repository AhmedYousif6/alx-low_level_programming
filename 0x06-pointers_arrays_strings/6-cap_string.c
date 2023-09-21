#include "main.h"

/**
 * _islower - check if the character is lowercase
 * @ch: takes character
 * Return: character in lowercase
*/

int _islower(char ch)
{
	return (ch >= 97 && ch <= 122);
}

/**
 * _simbol - check if the character is simbol
 * @ch: takes character
 * Return: 1 if its simbol 0 if not
*/

int _simbol(char ch)
{
	int i;
	char simbol[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (ch == simbol[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: takes string
 * Return: pointer to first index of string
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int found = 1;

	while (*str)
	{
		if (_simbol(*str))
			found = 1;
		else if (_islower(*str) && found)
		{
		*str -= 32;
		found = 0;
		}
		else
		found = 0;
		str++;
	}
	return (ptr);
}
