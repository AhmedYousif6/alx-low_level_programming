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
	int i, x = 0, tot = 0, len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			tot += strlen(av[i]);
		}
		tot += ac;
		conc = (char *)malloc(tot + 1 * sizeof(char));
		if (conc == NULL)
		{
			return (NULL);
		}
		for (i = 0; i = ac; i++)
		{
			len = strlen(av[i]);
			strcpy(conc + x, av[i]);
				x += len;
			if (i != ac)
			{
				conc[x++] = '\n';
			}
		}
	}
	conc[x] = '\0';
	return (conc);

}
