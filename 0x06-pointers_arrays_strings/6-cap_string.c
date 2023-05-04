#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @c: string array
 * Return: array
*/

char *cap_string(char *c)
{
	int i;
	int spacecounter = 0;

	i = 0;
	while (c[i] != '\0')
	{
		if ((spacecounter % 2 == 1) && c[i] >= 97 && c[i] <= 122)
		{
			c[i] -= 32;
		}
		else
		{
			spacecounter++;
		}
		i++;
	}
	return (c);
}
