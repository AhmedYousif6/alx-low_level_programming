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
	int i, k, s = 0, len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	conc = malloc(sizeof(char) * len + 1);
	if (conc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++, s++)
			conc[s] = av[i][k];
		conc[s] = '\n';
		s++;
	}
	conc[s] = '\0';
	return (conc);
}
