#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string array
 * @c: character
 * Return: return s array
*/

char *_strchr(char *s, char c)
{
	int i, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			flag++;
			break;
		}
		if (flag > 0)
		{
			return (s);
		}
	}
	return (s);
}
