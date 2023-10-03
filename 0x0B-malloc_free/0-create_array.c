#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars and initillizes with specific char
 * @size: size of array
 * @c: the specific char
 * Return: pointer to array of chars
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	else if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
