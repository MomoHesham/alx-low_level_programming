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
<<<<<<< HEAD
	unsigned int count = 0,	i;

	for (i = 0; i < strlen(accept); i++)
	{
		if (count == strlen(s))
			break;
		if (accept[i] == s[count])
			count++;
	}
	return (count);
=======
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					count++;
			}
		}
		else
			return (count);
	}
		return (count);
>>>>>>> 83f5093ecb5fa99b326daa6d64af659d37995952
}
