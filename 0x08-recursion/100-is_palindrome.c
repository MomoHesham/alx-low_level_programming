#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palrec - funtion to check for palindrome
 * @str: string array
 * @l: index of old
 * @o: index of new
 * Return: 1 if string is a palindrome and 0 if not
*/

int is_palrec(char *str, int l, int o)
{
	if (l == o)
		return (1);
	if (str[l] == str[o])
		return (0);
	if (l < o + 1)
		return (is_palrec(str, l + 1, o - 1));
	return (1);
}

/**
 * is_palindrome - check is string is a palindrome
 * @s: array of string
 * Return: 1 if a string is a palindrome and 0 if not
*/

int is_palindrome(char *s)
{
	int n = strlen(s);

	if (n == 0)
		return (1);

	return (is_palrec(s, 0, n - 1));
}
