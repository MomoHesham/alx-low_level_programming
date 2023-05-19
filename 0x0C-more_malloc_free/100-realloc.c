#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory
 * @ptr: pointer of old_size
 * @old_size: old size of array
 * @new_size: new size of array
 * Return: new array with the new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	s = malloc(new_size);

	if(s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < old_size && i < new_size; i++)
	{
		s[i] = ((char*) ptr)[i];
	}
	free(ptr);
	return (s);

}
