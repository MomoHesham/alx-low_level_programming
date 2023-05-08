#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: pointed to array
 * @b: constant byte
 * @n: bytes of memory area pointed to by s
 * Return: array s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; s[i] != '\0' && i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
