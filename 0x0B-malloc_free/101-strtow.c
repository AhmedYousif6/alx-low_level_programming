#include "main.h"
#include <stdlib.h>

/**
 * count - count number of words
 * @st: string
 * Return: number of words
*/

int count(char *st)
{
	int i, n = 0;

	for (i = 0; st[i]; i++)
	{
		if (st[i] == ' ')
		{
			if (st[i + 1] != ' ' && st[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits string into words
 * @str: string
 * Return: char of string
*/

char **strtow(char *str)
{
	int i, j, k, l, n = 0, c = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = count(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
		if (w == NULL)
			return (NULL);
	w[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
		j++;
		w[c] = (char *)malloc(j * sizeof(char));
		j--;
		if (w[c] == NULL)
		{
			for (k = 0; k < c; k++)
				free(w[k]);
		free(w[n - 1]);
		free(w);
		return (NULL);
		}
		for (l = 0; l < j; l++)
			w[c][l] = '\0';
		c++;
		i += j;
		}
		i++;
	}
	return (w);
}
