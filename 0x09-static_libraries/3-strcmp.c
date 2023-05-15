#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: array one
 * @s2: array two
 * Return: 0 matching , 1 and -1 non-matching
*/

int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
