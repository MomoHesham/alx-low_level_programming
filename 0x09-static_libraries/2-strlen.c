#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: return integer
*/

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; ++index)
		;
	return (index);
}
