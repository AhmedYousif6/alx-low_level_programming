#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - func that returns a pointer to a newly allocate space
 * which contain a copy of string given as a parameter
 * @str: string that will take copy of it
 * Return: NULL if str empty or failed to allocate memory
 * or pointer contain the copy of the string
*/

char *_strdup(char *str)
{
	char *cpy;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	cpy = (char *)malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
	{
		return (NULL);
	}

	strcpy(cpy, str);
	return (cpy);
}
