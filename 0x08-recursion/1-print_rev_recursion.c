#include "main.h"
#include <unistd.h>

/**
 * _print_rev_recursion - print strings in reverse
 * @s: string array
 * Return: nothing
*/

void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}

	_print_rev_recursion(s + 1);
	write(1, s, 1);
}
