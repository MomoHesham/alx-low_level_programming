#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: first array
 * @s2: second array
 * Return: result in a pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *res;
	unsigned int i, j;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	res = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));
	if (res == NULL)
		return (NULL);

	while (s1[i])
	{
		res[j] = s1[i];
		i++;
		j++;
	}

	i = 0;
	while (s2[i])
	{
		res[j] = s2[i];
		i++;
		j++;
	}
	return (res);
}
