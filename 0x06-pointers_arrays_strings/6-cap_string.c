#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @c: string array
 * Return: array
*/

char *cap_string(char *c)
{
	int conversion, index, count;

	char chars[] = {' ', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}', '\t', '\n', '\0'};

	conversion = 32;

	for (index = 0; c[index] != '\0'; index++)
	{
		if (c[index] >= 'a' && c[index] <= 'z')
		{
			c[index] -= conversion;
		}
		conversion = 0;
		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == c[index])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (c);
}
