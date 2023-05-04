#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two string.
 * @dest: array one
 * @src: array two
 * @n: bytes from src
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);

	int loop, index;

	index = 0;
	for (loop = 0; loop < len; loop++)
	{
		dest[index] = dest[loop];
		index++;
	}
	for (loop = 0; loop < n; loop++)
	{
		dest[index] = src[loop];
		index++;
	}
	return (dest);
}
