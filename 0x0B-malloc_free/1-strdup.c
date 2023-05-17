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
	size_t size = strlen(str) + 1;
	char *s = malloc(size);

	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	if (s == 0)
	{
		return (NULL);
	}
	if (s != 0)
	{
		s = str;
	}
	free(s);
	return (s);
}
