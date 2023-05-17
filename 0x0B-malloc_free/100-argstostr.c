#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: counts of arguments
 * @av: array of arguments
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, n, m;
	int counter = 0;
	int k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			counter++;
		counter++;
	}
	counter++;
	s = malloc(sizeof(char) * counter);
	if (s == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
		{
			s[k] = av[n][m];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
