#include "main.h"

/**
 * leet - encodes a string into 1337
 * @e: array of string
 * Return: char
*/

char *leet(char *e)
{
	int i, j;
	char low[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char up[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; e[i] != '\0'; ++i)
	{
		for (j = 0; j < 5; j++)
		{
			if (e[i] == low[j] || e[i] == up[j])
			{
				e[i] = num[j];
			}
		}
	}
	return (e);
}
