#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character
 * Return: 1 with lowercase or uppercase and 0 with anything else
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
