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

	if (size == 0 || s == NULL)
		return (NULL);
	if (s != 0)
	{
		s = str;
	}
	return (s);
}
