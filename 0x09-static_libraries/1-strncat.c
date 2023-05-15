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
	int index, loop;

	for (index = 0; dest[index] != '\0'; index++)
		;
	for (loop = 0; loop < n && src[loop] != '\0'; loop++)
	{
		dest[index] = src[loop];
		index++;
	}
	if (loop < n)
	{
		dest[index] = '\0';
	}
	return (dest);
}
