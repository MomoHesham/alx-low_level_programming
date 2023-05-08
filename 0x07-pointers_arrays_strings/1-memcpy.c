#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: first array
 * @src: second array
 * @n: numberof bytes that be copied
 * Return: dest array
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
