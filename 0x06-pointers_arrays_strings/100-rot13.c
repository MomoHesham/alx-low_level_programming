#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @h: array
 * Return: char
*/

char *rot13(char *h)
{
	int i, j;
	char one[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char two[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; h[i] != '\0'; i++)
	{
		for (j = 0; one[j] != '\0'; j++)
		{
			if (h[i] == one[j])
			{
				h[i] = two[j];
				break;
			}
		}
	}
	h[i] = '\0';
	return (h);
}
