#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of prefix substring
 * @s: first array
 * @accept: second array
 * Return: the number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0,	i;

	for (i = 0; i < strlen(accept); i++)
	{
		if (count == strlen(s))
			break;
		if (accept[i] == s[count])
			count++;
	}
	return (count);
}
