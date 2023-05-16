#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creats an array of chars
 * and initializes it with a specfic char
 * @size: size of array
 * @c: specfic char
 * Return: null if size = 0
 * pointer to array or null if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *s = malloc(size * sizeof(char));
	unsigned int i;

	i = 0;

	if (size == 0 || s == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
