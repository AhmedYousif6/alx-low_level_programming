#include "main.h"

/**
 * rev_string - function that reverses the string
 * @s: takes a strings
 * Return: void
*/

void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0; s[i]; i++)

		for (j = 0; j < i / 2; j++)
		{
			temp = s[j];
			s[j] = s[i - 1 - j];
			s[i - 1 - j] = temp;
		}

}
