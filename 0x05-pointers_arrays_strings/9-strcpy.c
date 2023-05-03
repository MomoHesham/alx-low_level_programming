#include "main.h"

/**
 * _strcpy - function copies
 * @dest: buffer pointed
 * @src: string pointed
 * Return: char
*/

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
