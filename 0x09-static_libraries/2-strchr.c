#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 * @s: string array
 * @c: character
 * Return: return s array
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
