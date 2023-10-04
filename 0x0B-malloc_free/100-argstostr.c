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
	int i, k, x = 0, s = 0, len = 0;

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

	for (k = 0; k < ac; k++)
	{
		x = strlen(av[k]);
		strcpy(conc + s, av[k]);
		s += x;
		if (k != ac - 1)
		{
			conc[s++] = '\n';
		}
	}
	conc[s] = '\0';
	return (conc);
}
