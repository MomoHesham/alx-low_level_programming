#include "main.h"

/**
 * _strncpy - function that copies string
 * @dest: output dest
 * @src: input src
 * @n: number of bytes to be copy
 * Return: char
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
