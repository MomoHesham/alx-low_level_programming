#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: array one
 * @s2: array two
 * Return: 0 matching , 1 and -1 non-matching
*/

int _strcmp(char *s1, char *s2)
{
	int i, flag;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			flag = 0;
		}
		else if (s1[i] > s2[i])
		{
			flag = 1;
		}
		else
		{
			flag = -1;
		}
		i++;
	}
	if (flag == 0)
		return (0);
	else if (flag == -1)
		return (-1);
	else
		return (1);
}
