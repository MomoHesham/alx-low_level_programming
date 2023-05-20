#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _puts_recursion - function that prints strings, followed by new line
 * @s: array of string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	write(1, s, 1);
	_puts_recursion(s + 1);
}
