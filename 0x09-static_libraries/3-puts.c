#include "main.h"

/**
 * _puts - prints a string
 * @str: array
*/

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
