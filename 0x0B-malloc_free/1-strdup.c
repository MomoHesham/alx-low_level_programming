#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space in memory
 * @str: array of string
 * Return: null if str = NULL
*/

char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}
	s = malloc((i + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	while (str[j])
	{
		s[j] = str[j];
		j++;
	}
	s[j + 1] = 0;
	return (s);
}
