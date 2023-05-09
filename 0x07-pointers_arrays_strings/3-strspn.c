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
	unsigned int i, count = 0;

	for (i = 0; i < strlen(s); i++)
	{
		if (count == strlen(accept))
			break;
		if (s[i] == accept[count])
			count++;
	}
		return (count);
}
