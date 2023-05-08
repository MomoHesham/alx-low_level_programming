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
	int i;
	int l = n;

	for (i = 0; s[i] != '\0' && i < l; i++)
	{
		s[i] = b;
	}
	return (s);
}
