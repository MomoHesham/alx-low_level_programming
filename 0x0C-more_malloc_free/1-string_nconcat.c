#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of string from s2
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	res = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (res == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		res[j] = s1[i];
		j++;
	}
	for (i = 0; s2[i] != '\0' || i < n; i++)
	{
		res[j] = s2[i];
		j++;
	}
	return (res);
}
