#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: first array
 * @accept: second array
 * Return: a pointer to the byte in s that matches ones of the bytes in accept
 * or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
