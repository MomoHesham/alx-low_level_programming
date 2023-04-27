#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: the number of times the character \ is print
*/

void print_diagonal(int n)
{
	int i, y;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (y = 0; y <= i; y++)
			{
				if (i > y)
				{
					_putchar(32);
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
