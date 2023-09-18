#include "main.h"

/**
 * rev_string - function that reverses the string
 * @s: takes a strings
 * Return: void
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	for (l = 0; s[l] != '\0'; l++)
	{

		for (i = -1; i < l / 2; i++)
		{
			temp = s[i];
			s[i] = s[l - i];
			s[l - i] = temp;
		}
	}
}
