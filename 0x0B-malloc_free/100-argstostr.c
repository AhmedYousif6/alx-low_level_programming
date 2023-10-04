#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenate all arguments
 * @ac: size of arguments
 * @av: arguments
 * Return: null if it fails pointer if its concatenate
*/

char *argstostr(int ac, char **av)
{
	char *conc;
	int i, x, s, len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	len += ac - 1 + 1;

	conc = (char *)malloc(len * sizeof(char));
	if (conc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		x = strlen(av[i]);
		strcpy(conc + s, av[i]);
		s += x;
		if (i != ac - 1)
		{
			conc[s++] = '\n';
		}
	}
	conc = '\0';
	return (conc);
}
