#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: array one
 * @src: array two
 * Return: array
*/

char *_strcat(char *dest, char *src)
{
	int len1 = strlen(dest);
	int len2 = strlen(src);

	int loop, index;

	index = 0;
	for (loop = 0; loop < len1; loop++)
	{
		dest[index] = dest[loop];
		index++;
	}
	for (loop = 0; loop < len2; loop++)
	{
		dest[index] = src[loop];
		index++;
	}
	return (dest);
}
